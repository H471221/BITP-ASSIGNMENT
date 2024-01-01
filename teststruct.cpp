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
   

VendItem items[15];

items[0] = { "Cola", 2.50, 10 };
items[1] = { "Rootbeer", 1.50, 10 };
items[2] = { "Lemon-lime", 1.50, 10 };
items[3] = { "Strawberry", 1.50, 10 };
items[4] = { "Mountain Dew", 1.50, 10 };
items[5] = { "Mirinda Orange", 1.50, 10 };
items[6] = { "Pepsi", 1.50, 10 };
items[7] = { "Lemon Tea", 2.00, 10 };
items[8] = { "Grape Soda", 2.00, 10 };
items[9] = { "Ice Cream Soda", 2.00, 10 };
items[10] = { "Milo", 2.00, 10 };
items[11] = { "Apple Juice", 2.50, 10 };
items[12] = { "Orange Juice", 2.50, 10 };
items[13] = { "Guava Juice", 2.50, 10 };

/* 
items[1] = { "Cola", 1.50, 10 };
items[2] = { "Rootbeer", 1.50, 10 };
items[3] = { "Lemon-lime", 1.50, 10 };
items[4] = { "Strawberry", 1.50, 10 };
items[5] = { "Mountain Dew", 1.50, 10 };
items[6] = { "Mirinda Orange", 1.50, 10 };
items[7] = { "Pepsi", 1.50, 10 };
items[8] = { "Lemon Tea", 2.00, 10 };
items[9] = { "Grape Soda", 2.00, 10 };
items[10] = { "Ice Cream Soda", 2.00, 10 };
items[11] = { "Milo", 2.00, 10 };
items[12] = { "Apple Juice", 2.50, 10 };
items[13] = { "Orange Juice", 2.50, 10 };
items[14] = { "Guava Juice", 2.50, 10 };
*/
    for(int i=0; i<=14; i++){
        cout << fixed << "Drink "<< i << " " << items[i].name << " RM" << items[i].price << setprecision(2) << " " << items[i].quantity << " " << endl;
    }
}
