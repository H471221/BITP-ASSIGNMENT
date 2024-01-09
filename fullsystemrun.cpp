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
///////////////////////////VARIABLE INITIALIZATION////////////////////
    
    //decision whether customer want to continue or cancel transaction
    char 
    decision; //Y or N
    //
    int drink_selected; //drink code (1-14)
    //
    double 
    total_sales,    //total sales in a loop 
    money_change,   //money change
    total_money,    //total money inserted during vending machine loops
    money_inserted = 0.00;  //
    //STRUCT
    VendItem items[15]; 

////////////////////////////VARIABLE INITIALIZATION///////////////////

    items[1] = {"Cola", 1.50, 10};
    items[2] = {"Rootbeer", 1.50, 9};
    items[3] = {"Lemon-lime", 1.50, 8};
    items[4] = {"Strawberry", 1.50, 7};
    items[5] = {"Mountain Dew", 1.50, 6};
    items[6] = {"Mirinda Orange", 1.50, 5};
    items[7] = {"Pepsi", 1.50, 0};
    items[8] = {"Lemon Tea", 2.00, 3};
    items[9] = {"Grape Soda", 2.00, 2};
    items[10] = {"Ice Cream Soda", 2.00, 1};
    items[11] = {"Milo", 2.00, 5};
    items[12] = {"Apple Juice", 2.50, 5};
    items[13] = {"Orange Juice", 2.50, 5};
    items[14] = {"Guava Juice", 2.50, 4};
       cout<<"\t      Kasturi Vending Machine tak menyala\t     \n  "
            "\t|-----------------------------------------------|\n"
            "\t|Code\t|Drink Name\t|   Cost(RM)    |    Quantity\t|\n "  
            "\t|-----------------------------------------------|\n"
            "\t|  1\t|Coca-Cola\t|\t1.50  \t|\t"<<items[1].Drink_quantity<<"\t|\n " 
            
            "\t|  2\t|Root Beer\t|\t1.50  \t|\t"<<items[2].Drink_quantity<<"\t|\n "
                                               
            "\t|3\tLemon-Lime\t|\t1.50  \t|\t"<<items[3].Drink_quantity<<"\t|\n " 
            
            "\t|Strawberry\t|\t1.50\t|\t"<<items[4].Drink_quantity<<"\t|\n "
           
            "\t|Mountain Dew\t|\t1.50\t|\t"<<items[5].Drink_quantity<<"\t|\n "
            
            "\t|Mirinda Orange\t|\t1.50\t|\t"<<items[6].Drink_quantity<<"\t|\n "
           
            "\t|Pepsi Original\t|\t1.50\t|\t"<<items[7].Drink_quantity<<"\t|\n "
           
            "\t|Lemon Tea\t|\t2.00\t|\t"<<items[8].Drink_quantity<<"\t|\n "
           
            "\t|Grape Soda\t|\t2.00\t|\t"<<items[9].Drink_quantity<<"\t|\n "
           
            "\t|Ice Cream Soda\t|\t2.00\t|\t"<<items[10].Drink_quantity<<"\t|\n "
           
            "\t|Milo Ice\t|\t2.00\t|\t"<<items[11].Drink_quantity<<"\t|\n "
            
            "\t|Apple Juice\t|\t2.50\t|\t"<<items[12].Drink_quantity<<"\t|\n "
            
            "\t|Orange Juice\t|\t2.50\t|\t"<<items[13].Drink_quantity<<"\t|\n "
            
            "\t|Guava Juice\t|\t2.50\t|\t"<<items[14].Drink_quantity<<"\t|\n "  
           
<<endl;

/*///DO NOT CROSS////////// WORK IN PROGRESS //////////DO NOT CROSS////////////////////////////////////////////////
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
////////////DO NOT CROSS/////////// WORK IN PROGRESS /////DO NOT CROSS//////////////////////////////////////////*/ 
    
//zaini buatkan function kat sini 
    do  { 
        jump:
        cout << "Select a drink(1-14) :";
        cin >> drink_selected;
        if(items[drink_selected].Drink_quantity == 0){
            cout << "Sorry! drink sold out please choose another drink\n";
            continue; 
        }
        else if(drink_selected == 0){
            cout << "Beginning maintenance mode..." << endl;
            break;
        }
        else
            cout << "Are you sure? (Y to continue/ N to cancel): ";
            cin >> decision;
        if (decision == 'Y' || decision == 'y'){
            break;
            cout <<"Drink selected: "<< items[drink_selected].Drink_name << endl;
        }
        else if (decision == 'N' || decision == 'n'){
            goto jump;
        }
    }while(items[drink_selected].Drink_quantity == 0);
    
//ngan sini
    do {
        cout << "Drink price :RM"<<fixed<<setprecision(2)<< items[drink_selected].Drink_price << endl;
        cout << "Insert money(Max:RM3.00) :RM";
        cin >> money_inserted;
            if(money_inserted > 3.00 || money_inserted <= 0.00){
                cout << "Invalid currency! MAX :RM3.00" << endl;
                continue;
            }else{               
                cout << "Total amount entered(RM): " << fixed << setprecision(2) << money_inserted << endl;  
                total_money += money_inserted;

            }
    } while(total_money <= items[drink_selected].Drink_price);   //"<< fixed << setprecision(2)" is to lock value to .2 decimal places
   
   //FINAL OUTPUT FOR SELECTED DRINK
   money_change = total_money - items[drink_selected].Drink_price;
   cout << "Change: RM" << money_change << endl;
   total_sales; //add total money for sales receipt
   total_money = 0.00; //reset total money for vending machine
   cout << "Enjoy your drink!" << endl; 
   items[drink_selected].Drink_quantity--; //minus one from drink bought
   cout << "total drinks left: " << items[drink_selected].Drink_quantity;
}

