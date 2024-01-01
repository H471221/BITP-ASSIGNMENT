#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
 struct VendItem {
    char name[20];  // Max drink name
    double price;   // drink price
    int quantity;   // drink quantity
};

int main()
{
   

VendItem items[20];


items[1] = { "Cola", 1.50, 10 };
items[2] = { "Rootbeer", 1.50, 10 };
items[3] = { "Lemon-lime", 1.50, 10 };
items[4] = { "Strawberry", 1.50, 10 };
items[5] = { "Mountain Dew", 0.80, 10 };
items[6] = { "Mirinda Orange", 0.75, 10 };
items[7] = { "Pepsi", 0.75, 10 };
items[8] = { "Lemon Tea", 0.75, 10 };
items[9] = { "Grape Soda", 0.80, 10 };
items[10] = { "Ice Cream Soda", 0.80, 10 };
items[11] = { "Milo", 0.75, 10 };
items[12] = { "Apple Juice", 0.75, 10 };
items[13] = { "Orange Juice", 0.75, 10 };
items[14] = { "Guava Juice", 0.80, 10 };

cout << "Cola Price: " << items[0].price << " This struct member display the drink price for cola" << endl;
cout << "Cola Price: " << items[0].price << " This struct member display the drink price for cola" << endl;
cout << "Whitespaces char test: " << items[4].name << " This struct member display the drink with whitespaces" << endl;

    for(int i=1; i<=14; i++){
        cout << "Drink "<< i <<" "<< items[i].name << fixed <<" RM"<< items[i].price <<" "<< items[i].quantity <<" "<< setprecision(2) << endl;
    }
}
