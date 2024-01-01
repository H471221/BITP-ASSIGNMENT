//The final goal is to make the drink availablity in the machine as the latest one in the machine so the user can choose 
/*FIND THE CONSTANT AND VARIABLE 
    CONSTANT = drink.name, drink.price
    VARIABLE = drink.quantity (drink is -1 each time a purchase is made, so the drink availability needed to update each time)

    Summary: to make sure the drink is always in latest stock, item quantity must be from stock in .dat file
*/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
    cout<<"                     UTeM Vending Machine             \n  "
            "\t|-----------------------------------------|\n"
            "\t| Drink Name     | Cost(Cents) | Quantity |\n "  
            "\t|-----------------------------------------|\n"
            "\t| Cola           |   1.50      |   10     |\n " 
            "\t|-----------------------------------------|\n"
            "\t| Root Beer      |   1.50      |   10     |\n "
            "\t|-----------------------------------------|\n"                                        
            "\t| Lemon-Lime     |   1.50      |   10     |\n " 
            "\t|-----------------------------------------|\n"
            "\t| Strawberry     |   1.50      |   10     |\n "
            "\t|-----------------------------------------|\n" 
            "\t| Mountain Dew   |   1.50      |   10     |\n "
            "\t|-----------------------------------------|\n" 
            "\t| Mirinda Orange |   1.50      |   10     |\n "
            "\t|-----------------------------------------|\n" 
            "\t| Pepsi          |   1.50      |   10     |\n "
            "\t|-----------------------------------------|\n" 
            "\t| Lemon Tea      |   2.00      |   10     |\n "
            "\t|-----------------------------------------|\n" 
            "\t| Grape Soda     |   2.00      |   10     |\n "
            "\t|-----------------------------------------|\n" 
            "\t| Ice Cream Soda |   2.00      |   10     |\n "
            "\t|-----------------------------------------|\n"
            "\t| Milo           |   2.00      |   10     |\n "
            "\t|-----------------------------------------|\n" 
            "\t| Apple Juice    |   2.50      |   10     |\n "
            "\t|-----------------------------------------|\n" 
            "\t| Orange Juice   |   2.50      |   10     |\n "
            "\t|-----------------------------------------|\n" 
            "\t| Guava Juice    |   2.50      |   10     |\n "  
            "\t|-----------------------------------------|\n"
<<endl;

}