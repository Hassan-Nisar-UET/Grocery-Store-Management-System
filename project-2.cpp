#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

const int size = 10;
int currentShopBoy = 0;
string boyNamee[size];
int boyAge[size];
int boyExperience[size];
string stockName[size];
int stockQuantity[size];
int stockPrice[size];
int sort[size];
int copyStock[size];
string messageArray;
int currentStock = 0;
void admin();
int manue();
void customerFunction();
int coordinatorManue();
void loginCoordinator();
void messageForCoordinator();
void buyStock();
void verity();
void display();
void showMsg();
void addBoy();
void viewBoy();
void demoBoy();
void changeBoy();
void addStock();
void viewStock();
void demoStock();
void changeStock();
void sortByPrice();
void sortByExperience();
int customerManue();
void changeStockFunction(int i, string nstock, int nquantity, int nprice);
void addBoyFunction(string bName, int bAge, int bExperience);
void changeBoyFunction(int i, string nname, int nage, int nexperience);
void addStockFunction(string stock, int sQuantity, int sPrice);
string adminName = "hamza";
string adminPin = "111";
string coordinator = "awan";
string coordinatorPin = "222";
int main()
{
    display();
    cout << "press any key to countinue" << endl;
    getch();   
    system("cls"); 
    int option = -2;
    while (option != 4)
    {
        
        system("CLS");
        cout << " 1:Login as Admin" << endl;
        cout << " 2:Login as coordinator" << endl;
        cout << " 3:customer" << endl;
        cout << " 4: Exit" << endl;
        cout << "enter your option" << endl;
        cin >> option;
        system("cls");
        if (option == 1)
        {
            admin();
        }
        if (option == 2)
        {
            loginCoordinator();
        }
        if (option == 3)
        {
            customerFunction();
        }
    }
}
void admin()
{
    string userName, userPin;
    cout << "enter the admin name" << endl;
    cin >> userName;
    cout << "enter the admin password" << endl;
    cin >> userPin;
    if (userName == adminName && userPin == adminPin)
    {
        cout << "sucessfully login" << endl;
        cout << "press any key to countinue" << endl;
        getch();

        int adminOption = -1;
        demoBoy();
        while (adminOption != 7)
        {
            system("cls");
            adminOption = manue();
            if (adminOption == 1)
            {
                addBoy();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (adminOption == 2)
            {
                viewBoy();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (adminOption == 3)
            {
                changeBoy();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (adminOption == 4)
            {
                viewStock();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (adminOption == 5)
            {
                sortByPrice();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (adminOption == 6)
            {
                sortByExperience();
                cout << "press any key to countinue" << endl;
                getch();
            }
        }
    }
    else
    {
        cout << "you are not admin try again" << endl;
        cout << "press any key to countinue" << endl;
        getch();
    }
}
int manue()
{
    int option = -5;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "|         WELCOM TO ADMIN SECTION               " << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++|" << endl;
    cout << "1. Admin can add shopkeeper detail" << endl;
    cout << "2. admin can view the shopkeeper details." << endl;
    cout << "3. admin can change the shopkeeper detail" << endl;
    cout << "4. Admin can view stock detail" << endl;
    cout << "5. view sortout the stock by price" << endl;
    cout << "6. view shopkeeper sort by experience" << endl;
    cout << "7. exit" << endl;
    cout << "enter your option" << endl;
    cin >> option;
    return option;
}
void loginCoordinator()
{
    string coordinator, pin;
    cout << "enter the coordinator id" << endl;
    cin >> coordinator;
    cout << "enter the coordinator pin" << endl;
    cin >> pin;
    if (coordinator == coordinator && coordinatorPin == pin)
    {
        cout << "sucessfully login" << endl;
        cout << "press any key to countinue" << endl;
        getch();

        int mOption = -5;
        demoStock();
        while (mOption != 7)
        {
            system("cls");

            mOption = coordinatorManue();
            if (mOption == 1)
            {
                addStock();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (mOption == 2)
            {
                viewStock();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (mOption == 3)
            {
                changeStock();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (mOption == 4)
            {
                sortByPrice();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (mOption == 5)
            {
                sortByExperience();
                cout << "press any key to countinue" << endl;
                getch();
            }
            if (mOption == 6)
            {
                showMsg();
                getch();
            }
        }
    }
    else
    {
        cout << "you are not coordinator" << endl;
        cout << "press any key to countinue" << endl;
        getch();
    }
}
int coordinatorManue()
{
    int managerOption;
    cout << "1. add stock details" << endl;
    cout << "2. view stock details" << endl;
    cout << "3. change stock details" << endl;
    cout << "4. sortout the stock by price" << endl;
    cout << "5. sort by experience" << endl;
    cout << "6. view message of customer" << endl;
    cout << "7. exit" << endl;
    cout << "enter your option" << endl;
    cin >> managerOption;
    system("cls");
    return managerOption;
}
void addBoy()
{
    string bName;
    int bAge;
    int bExperience;
    cout << "enter the name of shopkeeper" << endl;
    cin >> bName;
    cout << "enter the age of shopkeeper" << endl;
    cin >> bAge;
    cout << "enter the work experience of shopkeeper" << endl;
    cin >> bExperience;
    addBoyFunction(bName, bAge, bExperience);
}
void addBoyFunction(string bName, int bAge, int bExperience)
{
    if (bAge > 18 && bAge < 60)
    {
        boyNamee[currentShopBoy] = bName;
        boyAge[currentShopBoy] = bAge;
        boyExperience[currentShopBoy] = bExperience;
        currentShopBoy++;
    }
    else
    {
        cout << "age Error" << endl;
        cout << "press any key to countinue" << endl;
        getch();
    }
}
void viewBoy()
{
    cout << "SHOPKEEPER"
         << "\t"
         << "AGE"
         << "\t"
         << "EXPERIENCE IN YEARS" << endl;
    for (int i = 0; i <= currentShopBoy; i++)
    {
        cout << boyNamee[i] << "\t" << boyAge[i] << "\t" << boyExperience[i] << endl;
    }
}
void demoBoy()
{
    addBoyFunction("ali", 30, 9);
    addBoyFunction("hamza", 45, 15);
    addBoyFunction("awan", 48, 20);
    addBoyFunction("ahmad", 25, 17);
    addBoyFunction("malik", 50, 30);
}
void changeBoy()
{
    string cname;
    int cage;
    int cexperience;
    cout << "enter the name of shopkeeper which you want to change" << endl;
    cin >> cname;
    cout << "enter the age of shopkeeper which you want to change" << endl;
    cin >> cage;
    cout << "enter the experience of shopkeeper which you want to change" << endl;
    cin >> cexperience;
    for (int i = 0; i <= currentShopBoy; i++)
    {
        if (cname == boyNamee[i] && cage == boyAge[i] && cexperience == boyExperience[i])
        {
            string nname;
            int nage;
            int nexperience;
            cout << "enter the name of new shopkeeper" << endl;
            cin >> nname;
            cout << "enter the age of new shopkeeper" << endl;
            cin >> nage;
            cout << "enter the experience of new shopkeeper" << endl;
            cin >> nexperience;
            changeBoyFunction(i, nname, nage, nexperience);
        }
    }
}
void changeBoyFunction(int i, string nname, int nage, int nexperience)
{
    if (nage > 18)
    {
        boyNamee[i] = nname;
        boyAge[i] = nage;
        boyExperience[i] = nexperience;
    }
    else
    {
        cout << "age Error" << endl;
        cout << "press any key to countinue" << endl;
        getch();
    }
}
void addStock()
{
    string stock;
    int sPrice;
    int sQuantity;
    cout << "enter the stock" << endl;
    cin >> stock;
    cout << "enter the quantity of stock " << endl;
    cin >> sQuantity;
    cout << "enter the  price of stock" << endl;
    cin >> sPrice;
    addStockFunction(stock, sQuantity, sPrice);
}
void addStockFunction(string stock, int sQuantity, int sPrice)
{
    if (sQuantity > 0 && sQuantity)
    {
        stockName[currentStock] = stock;
        stockQuantity[currentStock] = sQuantity;
        stockPrice[currentStock] = sPrice;
        currentStock++;
    }
    else
    {
        cout << "quantity Error" << endl;
        cout << "press any key to countinue" << endl;
        getch();
    }
}
void viewStock()
{
    cout << "stock"
         << "\t"
         << "\t"
         << "QUANTITY"
         << "\t"
         << "\t"
         << "PRICE" << endl;
    for (int i = 0; i <= currentStock; i++)
    {
        cout << stockName[i] << "\t" << stockQuantity[i] << "\t"
             << "\t" << stockPrice[i] << endl;
    }
}
void demoStock()
{
    addStockFunction("floor", 5, 200);
    addStockFunction("rice", 6, 60);
    addStockFunction("oil", 4, 300);
    addStockFunction("soap", 9, 20);
}
void changeStock()
{
    string cstock;
    int cquantity;
    int cprice;
    cout << "enter the name of stock which you want to change" << endl;
    cin >> cstock;
    cout << "enter the quantity of stock which you want to change" << endl;
    cin >> cquantity;
    cout << "enter the price of stock which you want to change" << endl;
    cin >> cprice;
    for (int i = 0; i <= currentStock; i++)
    {
        if (cstock == stockName[i] && cquantity == stockQuantity[i] && cprice == stockPrice[i])
        {
            string nstock;
            int nquantity;
            int nprice;
            cout << "enter the name of new stock" << endl;
            cin >> nstock;
            cout << "enter the quantity of new stock" << endl;
            cin >> nquantity;
            cout << "enter the price of new stock" << endl;
            cin >> nprice;
            changeStockFunction(i, nstock, nquantity, nprice);
        }
    }
}
void changeStockFunction(int i, string nstock, int nquantity, int nprice)
{
    if (nquantity > 0)
    {
        stockName[i] = nstock;
        stockQuantity[i] = nquantity;
        stockPrice[i] = nprice;
    }
    else
    {
        cout << "quantity Error" << endl;
        cout << "press any key to countinue" << endl;
        getch();
    }
}
void sortByPrice()
{

    for (int i = 0; i <= currentStock; i++)
    {

        copyStock[i] = stockPrice[i];
    }
   
    int largestidx = -0;
    for (int j = 0; j <= currentStock; j++)
    {
         int largest = 0;
        for (int i = 0; i <= currentStock; i++)
        {
            if (copyStock[i] > largest)
            {
                largest = copyStock[i];
                largestidx = i;
            }
        }
        sort[j] = largestidx;
        copyStock[largestidx] = -1;
    }
    cout << "price" << endl;
    cout << "stock"
         << "\t"
         << "\t"
         << "QUANTITY"
         << "\t"
         << "\t"
         << "PRICE" << endl;
    for (int k = 0; k <= currentStock; k++)
    {
        largestidx = sort[k];
        cout << stockName[largestidx] << "\t" << stockQuantity[largestidx] << "\t"
             << "\t" << stockPrice[largestidx] << endl;
    }
}
void sortByExperience()
{

    for (int i = 0; i <= currentShopBoy; i++)
    {

        copyStock[i] = boyExperience[i];
    }
    
    int largestidx = -0;
    for (int j = 0; j <= currentShopBoy; j++)
    {
        int largest = 0;
        for (int i = 0; i <= currentShopBoy; i++)
        {
            if (copyStock[i] > largest)
            {
                largest = copyStock[i];
                largestidx = i;
            }
        }
        sort[j] = largestidx;
        copyStock[largestidx] = -1;
    }
    cout << "price" << endl;
    cout << "SHOPKEEPER"
         << "\t"
         << "\t"
         << "AGE"
         << "\t"
         << "\t"
         << "EXPERIENCE" << endl;
    for (int k = 0; k <= currentShopBoy; k++)
    {
        largestidx = sort[k];
        cout << boyNamee[largestidx] << "\t"
             << "\t" << boyAge[largestidx] << "\t"
             << "\t" << boyExperience[largestidx] << endl;
    }
}
void customerFunction()
{
    int customerOption;
    while (customerOption != 5)
    {
        customerOption = customerManue();
        if (customerOption == 1)
        {
            system("cls");
            viewStock();
            cout << "press any key to countinue" << endl;
            getch();
        }
        if (customerOption == 2)
        {
            buyStock();
            cout << "press any key to countinue" << endl;
            getch();
        }
        if (customerOption == 3)
        {
            verity();
            cout << "press any key to countinue" << endl;
            getch();
        }
        if (customerOption == 4)
        {
            messageForCoordinator();
            cout << "press any key to countinue" << endl;
            getch();
        }
    }
}
int customerManue()
{
    int customerOption = 0;
    cout << "1.view the stocks" << endl;
    cout << "2.buy stock" << endl;
    cout << "3.view the verity of stocks" << endl;
    cout << "4.send message to coordinator" << endl;
    cout << "5.exit" << endl;
    cout << "enter your option" << endl;
    cin >> customerOption;
    system("cls");
    return customerOption;
}
void buyStock()
{
    string bstock;
    cout << "enter the name of stock which you want to buy" << endl;
    cin >> bstock;
    int bquantity;
    cout << "enter the quantity " << endl;
    cin >> bquantity;
    int totalprice = 0;
    for (int i = 0; i <= currentStock; i++)
    {
        if (bstock == stockName[i])
        {
            totalprice = bquantity * stockPrice[i];
            stockQuantity[i]=stockQuantity[i]-bquantity;
        }
       
    }
    cout << "your total price is  " << totalprice << endl;
}
void verity()
{
    cout << "1.rice" << endl;
    cout << "2.milk" << endl;
    cout << "3.nudels" << endl;
    cout << "4.beans" << endl;
    cout << "5.tea" << endl;
    cout << "6.red chilli" << endl;
    cout << "7.chilli garlic sauce" << endl;
    cout << "8.floor" << endl;
    cout << "9.pickel" << endl;
}
void messageForCoordinator()
{
    cout << "write your massage for coordinator" << endl;
    cin >> messageArray;
}
void showMsg()
{
    for (int i = 0; messageArray[i] != '\0'; i++)
    {
        cout << messageArray[i];
    }
}
void display()
{
    cout << " ||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||" << endl;
    cout << " ||+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++||" << endl;
    cout << " ||*****************************************************************************************************************||" << endl;
    cout << " ||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||" << endl;
    cout << " ||                                                                                                                 ||" << endl;
    cout << " ||     GROCERY STORE MANAGEMENT SYSTEM                                                                             ||" << endl;
    cout << " ||      ________  ________   _______   _______   ______  ________                                                  ||" << endl;
    cout << " ||     |        | |       | |       | |         |        |       | |       |                                       ||" << endl;
    cout << " ||     |    ____  |_______| |       | |         |____    |_______| |_______|                                       ||" << endl;
    cout << " ||     |   |   |  |*        |       | |         |        |*            |                                           ||" << endl;
    cout << " ||     |_______|  | *__     |_______| |_______  |______  | *__         |                                           ||" << endl;
    cout << " ||                                                 ________ ________  _______  _______   ______                    ||" << endl;
    cout << " ||                                                 |            |    |       | |      | |                          ||" << endl;
    cout << " ||                                                 |_______     |    |       | |______| |____                      ||" << endl;
    cout << " ||                                                         |    |    |       | |*       |                          ||" << endl;
    cout << " ||                                                 ________|    |    |_______| | *__    |______                    ||" << endl;
    cout << " ||  developer: HASSAN NISAR                                                                                        ||" << endl;
    cout << " ||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||" << endl;
    cout << " ||+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++||" << endl;
    cout << " ||*****************************************************************************************************************||" << endl;
    cout << " ||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||" << endl;
}