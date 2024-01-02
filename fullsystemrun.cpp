// The final goal is to make the drink availablity in the machine as the latest one in the machine so the user can choose
/*FIND THE CONSTANT AND VARIABLE
    CONSTANT = drink.name, drink.price
    VARIABLE = drink.quantity (drink is -1 each time a purchase is made, so the drink availability needed to update each time)

    Summary: to make sure the drink is always in latest stock, item quantity must be from stock in .dat file
*/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
struct VendItem
{
    char Drink_name[20]; // Max drink name
    double Drink_price;  // drink price
    int Drink_quantity;  // drink quantity
};

int main()
{
    VendItem items[15];

    items[1] = {"Cola", 1.50, 10};
    items[2] = {"Rootbeer", 1.50, 9};
    items[3] = {"Lemon-lime", 1.50, 8};
    items[4] = {"Strawberry", 1.50, 7};
    items[5] = {"Mountain Dew", 1.50, 6};
    items[6] = {"Mirinda Orange", 1.50, 5};
    items[7] = {"Pepsi", 1.50, 4};
    items[8] = {"Lemon Tea", 2.00, 3};
    items[9] = {"Grape Soda", 2.00, 2};
    items[10] = {"Ice Cream Soda", 2.00, 1};
    items[11] = {"Milo", 2.00, 5};
    items[12] = {"Apple Juice", 2.50, 5};
    items[13] = {"Orange Juice", 2.50, 5};
    items[14] = {"Guava Juice", 2.50, 4};
cout<<"                        UTeM Vending Machine             \n  "
            "\t|-----------------------------------------------|\n"
            "\t|  Drink Name\t|     Cost(RM)  |    Quantity\t|\n "  
            "\t|-----------------------------------------------|\n"
            "\t|Coca-Cola\t|\t1.50  \t|\t"<<items[1].Drink_quantity<<"\t|\n " 
            "\t|-----------------------------------------------|\n"
            "\t|Root Beer\t|\t1.50  \t|\t"<<items[2].Drink_quantity<<"\t|\n "
            "\t|-----------------------------------------------|\n"                                        
            "\t|Lemon-Lime\t|\t1.50  \t|\t"<<items[3].Drink_quantity<<"\t|\n " 
            "\t|-----------------------------------------------|\n"
            "\t|Strawberry\t|\t1.50\t|\t"<<items[4].Drink_quantity<<"\t|\n "
            "\t|-----------------------------------------------|\n" 
            "\t|Mountain Dew\t|\t1.50\t|\t"<<items[5].Drink_quantity<<"\t|\n "
            "\t|-----------------------------------------------|\n" 
            "\t|Mirinda Orange\t|\t1.50\t|\t"<<items[6].Drink_quantity<<"\t|\n "
            "\t|-----------------------------------------------|\n" 
            "\t|Pepsi Original\t|\t1.50\t|\t"<<items[7].Drink_quantity<<"\t|\n "
            "\t|-----------------------------------------------|\n" 
            "\t|Lemon Tea\t|\t2.00\t|\t"<<items[8].Drink_quantity<<"\t|\n "
            "\t|-----------------------------------------------|\n" 
            "\t|Grape Soda\t|\t2.00\t|\t"<<items[9].Drink_quantity<<"\t|\n "
            "\t|-----------------------------------------------|\n" 
            "\t|Ice Cream Soda\t|\t2.00\t|\t"<<items[10].Drink_quantity<<"\t|\n "
            "\t|-----------------------------------------------|\n"
            "\t|Milo Ice\t|\t2.00\t|\t"<<items[11].Drink_quantity<<"\t|\n "
            "\t|-----------------------------------------------|\n" 
            "\t|Apple Juice\t|\t2.50\t|\t"<<items[12].Drink_quantity<<"\t|\n "
            "\t|-----------------------------------------------|\n" 
            "\t|Orange Juice\t|\t2.50\t|\t"<<items[13].Drink_quantity<<"\t|\n "
            "\t|-----------------------------------------------|\n" 
            "\t|Guava Juice\t|\t2.50\t|\t"<<items[14].Drink_quantity<<"\t|\n "  
            "\t|-----------------------------------------------|\n"
<<endl;

    int total_sold = 10;
    double total_earned = 700.34;
    ofstream outfile("sales_record.dat"); // default mode is ios::out
    outfile << "SALES RECORD \n";
    outfile << "Total earned = RM" << fixed << setprecision(2) << total_earned << endl;
    outfile << "Total sold = " << total_sold << " cans" << endl
            << endl;
    outfile << "Stock left\n";
    for (int i = 1; i <= 14; i++)
    {
        outfile << items[i].Drink_name << " = ";
        outfile << items[i].Drink_quantity << endl;
    }
    outfile << "\nStock need to be replenished\n";
    for (int i = 1; i <= 14; i++)
    {
        outfile << items[i].Drink_name << " = ";
        outfile << 10 - items[i].Drink_quantity << endl;
    }
    // must have total drinks sold, total money earned, quantity of drink not sold,
    outfile.close();
    return 0;
}