#include <iostream>
#include <fstream> //to use file output function
#include <iomanip> //to use function fixed << setprecision
using namespace std;
 struct VendItem {
    char Drink_name[20];  // Max drink name
    double Drink_price;   // drink price
    int Drink_quantity;   // drink quantity
};

int main()
{

VendItem items[15];

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

    double total_earned;
    ifstream infile("input.dat");// default mode is ios::out
    infile>>total_earned;
    cout<<"Drink name = "<<items[1].Drink_name<<endl<<"Total earned = "<<fixed<<setprecision(2)<<total_earned<<endl;
    //must have total drinks sold, total money earned, quantity of drink not sold, 
    infile.close();

}
