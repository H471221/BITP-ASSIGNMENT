#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct Vending {
    string drinkName;
    double drinkCost;
    int drinkQuantity;
};

void printMenu(Vending items[], int size) {
    cout << "\t      Kasturi Vending Machine tak menyala\t     \n  "
            "\t|-----------------------------------------------|\n"
            "\t|Code\t|Drink Name\t|   Cost(RM)    |    Quantity\t|\n "
            "\t|-----------------------------------------------|\n";

    for (int i = 0; i < size; i++) {
        cout << "\t|" << i + 1 << "\t|" << items[i].drinkName << "\t|\t" << fixed << setprecision(2)
             << items[i].drinkCost << "\t|\t" << items[i].drinkQuantity << "\t|\n ";
    }

    cout << endl;
}

void purchase(Vending items[], int index, double& moneyCollected) {
    double money, moneyBal, collected;

    do {
        cout << endl << "Drink: " << items[index].drinkName << endl << "Price: RM" << items[index].drinkCost << endl;
        cout << "Enter Money (RM1-RM3): RM";
        cin >> money;

        if (money < items[index].drinkCost || money > 3 || money < 1.5) {
            cout << "Invalid Amount!" << endl;
        } else {
            moneyBal = money - items[index].drinkCost;
            cout << endl << "Your Balance: RM " << moneyBal;
            items[index].drinkQuantity--;
            collected = money - moneyBal;
            moneyCollected += collected;
        }
    } while (money < items[index].drinkCost || money > 3 || money < 1.5);
}

void vendor(Vending items[], int size) {
    int code2, stock;
    printMenu(items, size);

    cout << endl << "Enter drink code that needs to be restocked: ";
    cin >> code2;

    for (int j = 0; j < size; j++) {
        if (code2 == j + 1) {
            cout << "Enter Amount to Restock: ";
            cin >> stock;
            items[j].drinkQuantity += stock;
        }
    }

    printMenu(items, size);
}

int main() {
    const int SIZE = 14;
    Vending items[SIZE];
    double collectedMoney = 0;

    // Initialize items
    items[0] = {"Cola", 1.50, 10};
    items[1] = {"Rootbeer", 1.50, 9};
    // ... (similarly initialize other items)

    printMenu(items, SIZE);

    char choice;
    cout << "Are you a vendor(0) or a customer(1)? Enter '0' or '1': ";
    cin >> choice;

    if (choice == '0') {
        string id;
        do {
            cout << "Enter Vendor's password: ";
            cin >> id;
            if (id == "1234") {
                vendor(items, SIZE);
            } else {
                cout << "Wrong password" << endl;
            }
        } while (id != "1234");
    } else if (choice == '1') {
        char choice2;
        do {
            printMenu(items, SIZE);
            int code;
            cout << endl << "Please Enter Drink Code: ";
            cin >> code;

            if (code >= 1 && code <= SIZE) {
                if (items[code - 1].drinkQuantity != 0) {
                    purchase(items, code - 1, collectedMoney);
                } else {
                    cout << "Out of Stock!" << endl;
                    break;
                }
            } else {
                cout << "Invalid Drink Code!" << endl;
            }

            cout << endl << "Would you like to continue? (Y-Yes/N-No): ";
            cin >> choice2;
        } while (choice2 == 'Y' || choice2 == 'y');
    }

    cout << "Total Money Collected: RM " << fixed << setprecision(2) << collectedMoney << endl;

    // Update the drink quantity in the output file (drinkQuantity.txt)
    ofstream output("drinkQuantity.txt");
    for (int i = 0; i < SIZE; i++) {
        output << items[i].drinkQuantity << endl;
    }
    output.close();

    return 0;
}
