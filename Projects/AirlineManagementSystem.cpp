#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

// Global Arrays And Variables

string names[100] = {"Hashim"};
string passwords[100] = {"123"};
string roles[100] = {"manager"};
string flightNames[100];
int flightPricesB[100];
int flightPricesE[100];
string flightTimes[100];
string flightRoutes[100];
int ticketsQuantity[100];
string routess[100];
string namess[100];
int pricesB[100];
int pricesE[100];
int quantityT[100];
int qCount = 0;
int count = 1;
int Flightscount = 0;

// Function Prototypes

void header();
int checkArray(string name, string password);
void signUp();
string signIn();
string clientInterface();
string mainMenu();
void managerMenu();
void enteringMenu();
void client();
void addFlight();
int checkArrays(string name, string route);
void updatePrice();
void viewFlights();
void updateTime();
void removeFlight();
void clearScreen();
void updateRoutes();
void updateTickets();
void clientMenu();
void clientF();
void checkQuantity();
void confirmTickets();
int ticketClass();
void addAdmin();
void flightCheck();
void cauTickets();

main()
{
    string op;
    while (op != "3")
    {
        op = mainMenu();
        if (op == "1")
        {
            enteringMenu();
        }
        else if (op == "2")
        {
            client();
        }
    }
    cout << endl;
    cout << "Thanks for using Airline Management System :)" << endl;
    clearScreen();
}

// Funtion Definitions

void enteringMenu()
{
    string userRole = signIn();
    if (userRole == "manager")
    {
        cout << endl;
        cout << "Your are Entering In Manager Menu" << endl;
        clearScreen();
        managerMenu();
    }
    else if (userRole == "client")
    {
        cout << endl;
        cout << "Your are Entering In client menu" << endl;
        clearScreen();
        clientMenu();
    }
    else
    {
        cout << endl;
        cout << "Credentials Do Not Exist." << endl;
        clearScreen();
    }
}

void header()
{
    system("cls");
    cout << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "                       $$                                                                 $$" << endl;
    cout << "                       $$                   AIRLINE MANAGEMENT SYSTEM                     $$" << endl;
    cout << "                       $$                                                                 $$" << endl;
    cout << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << endl
         << endl;
}

string mainMenu()
{
    string z = "0";
    system("cls");
    header();
    cout << "Press one of the following keys." << endl
         << endl;
    cout << "1 - For Admin Sign In." << endl;
    cout << "2 - For Customer." << endl;
    cout << "3 - Exit." << endl
         << endl;
    cout << "Your option: ";
    cin >> z;
    return z;
}

void client()
{
    string x = "0";
    while (x != "3")
    {
        x = clientInterface();
        if (x == "1")
        {
            string userRole = signIn();
            if (userRole == "manager")
            {
                cout << endl;
                cout << "Your are Entering In Manager Menu" << endl;
                clearScreen();
                managerMenu();
            }
            else if (userRole == "client")
            {
                cout << endl;
                cout << "Your are Entering In client menu" << endl;
                clearScreen();
                clientMenu();
            }
            else
            {
                cout << endl;
                cout << "User Not Found Kindly Sign Up First." << endl;
                clearScreen();
            }
        }
        if (x == "2")
        {
            signUp();
        }
    }
}

string clientInterface()
{
    string x;
    system("cls");
    header();
    cout << "Press One Of The Following Keys." << endl
         << endl;
    cout << "1- For Sign In." << endl;
    cout << "2- For Sign UP." << endl;
    cout << "3- To Return To Main Menu." << endl
         << endl;
    cout << "Your Option: ";
    cin >> x;
    return x;
}

int checkArray(string name, string password)
{
    bool tf = false;
    for (int x = 0; x < count; x++)
    {
        if (name == names[x] && password == passwords[x])
        {
            tf = true;
            break;
        }
    }
    if (tf)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void signUp()
{
    string name;
    string password;

    system("cls");
    header();

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your password: ";
    cin >> password;
    int check = 0;
    check = checkArray(name, password);
    if (check == 0)
    {
        names[count] = name;
        passwords[count] = password;
        roles[count] = "client";
        count++;
        cout << endl
             << "Congratulations, Signed Up Successfully." << endl;
        clearScreen();
    }
    if (check == 1)
    {
        cout << endl
             << "Credentials Already Exists Try Different Username or Password." << endl;
        clearScreen();
    }
}

string signIn()
{
    system("cls");
    header();
    cout << endl
         << endl;

    string name, password;

    cout << "Enter Username: ";
    cin >> name;
    cout << "Enter Password: ";
    cin >> password;

    bool tf = false;
    int x;
    for (x = 0; x < count; x++)
    {
        if (name == names[x] && password == passwords[x])
        {
            tf = true;
            break;
        }
    }
    if (tf)
    {
        return roles[x];
    }
    else
    {
        return "undefined";
    }
}

// Manager functions.

void managerMenu()
{
    string a = "-1";
    while (a != "0")
    {

        string x = "0";
        header();
        cout << "Press One Of The Following Keys." << endl;
        cout << "1 - To add the flight with its name, ticket price, time, route and tickets quantity." << endl;
        cout << "2 - To update the prices." << endl;
        cout << "3 - To view the flights." << endl;
        cout << "4 - To update timings of flights." << endl;
        cout << "5 - To remove or cancel the flights." << endl;
        cout << "6 - To update flights routes." << endl;
        cout << "7 - To update the tickets Quantity." << endl;
        cout << "8 - To add another admin." << endl;
        cout << "9 - To view either flight is full or not after sale of tickets," << endl;
        cout << "0 - To exit." << endl;
        cout << "Your Option: ";
        cin >> x;
        a = x;

        if (x == "1")
        {
            addFlight();
        }
        if (x == "2")
        {
            updatePrice();
        }
        if (x == "3")
        {
            viewFlights();
        }
        if (x == "4")
        {
            updateTime();
        }
        if (x == "5")
        {
            removeFlight();
        }
        if (x == "6")
        {
            updateRoutes();
        }
        if (x == "7")
        {
            updateTickets();
        }
        if (x == "8")
        {
            addAdmin();
        }
        if (x == "9")
        {
            flightCheck();
        }
    }
}

void addFlight()
{
    string name, time, route;
    int priceB, priceE, quantity;

    header();
    cout << "Enter Flight Name: ";
    cin >> name;
    cout << "Enter Business Seat Price (In Dollars) : ";
    cin >> priceB;
    cout << "Enter Economy Seat Price (In Dollars) : ";
    cin >> priceE;
    cout << "Enter Flight Time: ";
    cin >> time;
    cout << "Enter Flight Route: ";
    cin.ignore();
    getline(cin, route);
    cout << "Enter Number Of Tickets: ";
    cin >> quantity;
    int check = checkArray(name, route);

    if (check == 1)
    {
        cout << endl;
        cout << "Flight Name or Route Already Exists." << endl;
        clearScreen();
    }

    else if (check == 0)
    {
        flightNames[Flightscount] = name;
        flightPricesB[Flightscount] = priceB;
        flightPricesE[Flightscount] = priceE;
        flightTimes[Flightscount] = time;
        flightRoutes[Flightscount] = route;
        ticketsQuantity[Flightscount] = quantity;
        Flightscount++;
        cout << endl
             << "Flight Added Successfully." << endl;
        clearScreen();
    }
}

int checkArrays(string name, string route)
{
    bool tf = false;
    for (int x = 0; x <= Flightscount; x++)
    {
        if (flightNames[x] == name && route == flightRoutes[x])
        {
            tf = true;
            break;
        }
    }
    if (tf)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void updatePrice()
{
    header();
    string name;
    int priceB, priceE;
    cout << "Enter Name of Flight: ";
    cin >> name;
    int count = 0;
    for (int x = 0; x < Flightscount; x++)
    {
        if (name == flightNames[x])
        {
            cout << "Business Seat Price Is: " << flightPricesB[x] << endl;
            cout << "Enter New Price: ";
            cin >> priceB;
            flightPricesB[x] = priceB;
            cout << "Ecoomy Seat Price Is: " << flightPricesE[x] << endl;
            cout << "Enter New Price: ";
            cin >> priceE;
            flightPricesB[x] = priceE;
            cout << endl
                 << "Price Updated Successfully." << endl;
            clearScreen();
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Flight Not Found." << endl;
        clearScreen();
    }
}

void viewFlights()
{
    header();
    int num = 1;
    for (int x = 0; x < Flightscount; x++)
    {
        if (flightNames[x] != "!")
        {
            cout << num << "- "
                 << "Flight Name: "
                 << "\t"
                 << "Business Seat Price: "
                 << "\t"
                 << "Economy Seat Price: "
                 << "\t"
                 << "Flight Time: "
                 << "\t"
                 << "Flight Route: "
                 << "\t"
                 << "\t"
                 << "Quantity Of Tickets: "
                 << endl
                 << "   " << flightNames[x]
                 << "\t"
                 << "\t"
                 << "\t"
                 << flightPricesB[x]
                 << "\t"
                 << "\t"
                 << "\t"
                 << flightPricesE[x]
                 << "\t"
                 << "\t"
                 << "\t"
                 << flightTimes[x]
                 << "\t"
                 << "\t"
                 << flightRoutes[x]
                 << "\t"
                 << "\t"
                 << "\t"
                 << ticketsQuantity[x];
            cout << endl
                 << endl;
        }
        num++;
    }
    clearScreen();
}

void updateTime()
{
    header();
    string name;
    string time;
    cout << "Enter Name of Flight: ";
    cin >> name;
    int count = 0;
    for (int x = 0; x < Flightscount; x++)
    {
        if (name == flightNames[x])
        {
            cout << "Flight Time Is: " << flightTimes[x] << endl;
            cout << "Enter New Time: ";
            cin >> time;
            flightTimes[x] = time;
            cout << endl
                 << "Time Updated Successfully." << endl;
            clearScreen();
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Flight Not Found." << endl;
        clearScreen();
    }
}

void removeFlight()
{
    header();
    string name;
    cout << "Enter Name of Flight: ";
    cin >> name;
    bool tf = false;
    int x;
    for (x = 0; x < Flightscount; x++)
    {
        if (name == flightNames[x])
        {
            tf = true;
            break;
        }
    }
    if (tf)
    {
        flightNames[x] = "!";
        cout << endl
             << "Flight Removed Successfully." << endl;
        clearScreen();
    }
    else
    {
        cout << "Flight Not Found." << endl;
        clearScreen();
    }
}

void clearScreen()
{
    cout << endl;
    cout << "Press Any Key To Continue.";
    getch();
    system("cls");
}

void updateRoutes()
{
    header();
    string name;
    string route;
    cout << "Enter Name of Flight: ";
    cin >> name;
    int count = 0;
    for (int x = 0; x < Flightscount; x++)
    {
        if (name == flightNames[x])
        {
            cout << "Flight Route Is: " << flightRoutes[x] << endl;
            cout << "Enter New Route: ";
            cin >> route;
            flightRoutes[x] = route;
            cout << endl
                 << "Route Updated Successfully." << endl;
            clearScreen();
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Flight Not Found." << endl;
        clearScreen();
    }
}

void updateTickets()
{
    header();
    string name;
    int quantity;
    cout << "Enter Name of Flight: ";
    cin >> name;
    int count = 0;
    for (int x = 0; x < Flightscount; x++)
    {
        if (name == flightNames[x])
        {
            cout << "Quantity of Tickets Is: " << ticketsQuantity[x] << endl;
            cout << "Enter Number of Tickets You Want To Add: ";
            cin >> quantity;
            ticketsQuantity[x] = quantity + ticketsQuantity[x];
            cout << endl
                 << "Tickets Quantity Updated Successfully." << endl;
            clearScreen();
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Flight Not Found." << endl;
        clearScreen();
    }
}

void addAdmin()
{
    string name;
    string password;

    system("cls");
    header();

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter password: ";
    cin >> password;
    int check = 0;
    check = checkArray(name, password);
    if (check == 0)
    {
        names[count] = name;
        passwords[count] = password;
        roles[count] = "manager";
        cout << endl
             << "Admin Added Successfully." << endl;
        clearScreen();
        count++;
        clearScreen();
    }
    if (check == 1)
    {
        cout << "Credentials Already Exists Try Different Username or Password." << endl;
        clearScreen();
    }
}

void flightCheck()
{
    int x;
    string name;

    system("cls");
    header();

    cout << "Enter Name of Flight: ";
    cin >> name;
    bool tf = false;
    for (x = 0; x < Flightscount; x++)
    {
        if (name == flightNames[x])
        {
            tf = true;
            break;
        }
    }
    if (tf == true && ticketsQuantity[x] == 0)
    {
        cout << endl
             << "Flight Is Full." << endl;
    }
    else if (tf == true && ticketsQuantity[x] != 0)
    {
        cout << endl
             << "Flight Is Not Full." << endl;
        cout << "Remaining Tickets Are: " << ticketsQuantity[x] << endl;
    }
    else
    {
        cout << endl
             << "Flight Not Found." << endl;
        clearScreen();
    }
}

// Client functions.

void clientMenu()
{
    string a = "-1";
    string x;
    while (a != "0")
    {
        header();
        cout << "Select One of The Following Options." << endl;
        cout << "1- To Find A Flight." << endl;
        cout << "2- To View Tickets." << endl;
        cout << "0- To Exit." << endl;
        cout << "Your Option: ";
        cin >> x;
        a = x;
        if (x == "1")
        {
            clientF();
        }
        if (x == "2")
        {
            cauTickets();
        }
    }
}

void clientF()
{
    header();
    string route;
    int num = 1;
    int count = 0;
    int quantityT = 0;
    int x;
    cout << "Enter Route of Flight: ";
    cin.ignore();
    getline(cin, route);

    for (x = 0; x < Flightscount; x++)
    {
        if (route == flightRoutes[x])
        {
            namess[x] = flightNames[x];
            routess[x] = flightRoutes[x];
            pricesB[x] = flightPricesB[x];
            pricesE[x] = flightPricesE[x];
            count++;
        }
    }
    if (count == 0)
    {
        cout << endl;
        cout << "Unfortunately, No Flights Are Available." << endl;
        cout << endl;
        cout << "Press Any Key To Continue.";
        getch();
    }
    if (count != 0)
    {
        int y;
        for (y = 0; y < Flightscount; y++)
        {
            if (route == routess[y])
            {
                cout << endl;
                cout << num << "- ";
                cout << "Flight Name: "
                     << "\t"
                     << "Flight Route: "
                     << "\t"
                     << "\t"
                     << "Flight Time: "
                     << endl
                     << "   "
                     << namess[y]
                     << "\t"
                     << "\t"
                     << "\t"
                     << routess[y]
                     << "\t"
                     << "\t"
                     << "\t"
                     << flightTimes[y];
                num++;
            }
        }
    }
    if (num != 1)
    {
        checkQuantity();
    }
}

void checkQuantity()
{
    int x, y, z;
    string fName;
    cout << endl
         << endl
         << "Select Name of Flight: ";
    cin >> fName;

    bool tf = false;
    for (x = 0; x < Flightscount; x++)
    {
        if (fName == namess[x])
        {
            tf = true;
            break;
        }
    }

    if (tf)
    {
        z = ticketClass();
    }
    else
    {
        cout << endl
             << "Please Select A Valid Flight Name." << endl;
        checkQuantity();
    }

    if (z == 1)
    {
        header();
        cout << "Price of One Business Class Seat Is: " << pricesB[x] << endl
             << endl;
        cout << "Enter The Quantity of Tickets You Want To Buy: ";
        cin >> quantityT[x];
        qCount++;
        if (quantityT[x] > ticketsQuantity[x])
        {
            cout << endl
                 << "Sorry, Available Tickets Are: " << ticketsQuantity[x] << endl;
            clearScreen();
            checkQuantity();
        }
        if (quantityT[x] <= ticketsQuantity[x])
        {
            header();
            cout << "Your Payable Amount Is: " << quantityT[x] * pricesB[x] << endl
                 << endl;
            cout << "Press 1 To Confirm Tickets." << endl;
            cout << "Press 0 To Exit." << endl;
            cout << "Your Option: ";
            cin >> y;
            clearScreen();
        }
    }
    if (z == 2)
    {
        header();
        cout << "Price of One Economy Class Seat Is: " << pricesE[x] << endl
             << endl;
        cout << "Enter The Quantity of Tickets You Want To Buy: ";
        cin >> quantityT[x];
        if (quantityT[x] > ticketsQuantity[x])
        {
            cout << endl
                 << "Sorry, Available Tickets Are: " << ticketsQuantity[x] << endl;
            clearScreen();
            checkQuantity();
        }
        if (quantityT[x] <= ticketsQuantity[x])
        {
            header();
            cout << "Your Payable Amount Is: " << quantityT[x] * pricesB[x] << endl
                 << endl;
            cout << "Press 1 To Confirm Tickets." << endl;
            cout << "Press 0 To Exit." << endl;
            cout << "Your Option: ";
            cin >> y;
            clearScreen();
        }
    }
    if (y == 1)
    {
        confirmTickets();
        ticketsQuantity[x] = ticketsQuantity[x] - quantityT[x];
    }
}

int ticketClass()
{
    int a;
    header();
    cout << "Select Class of Ticket." << endl
         << endl;
    cout << "1- Business." << endl;
    cout << "2- Economy." << endl;
    cout << "3- Exit." << endl;
    cout << "Your Option: ";
    cin >> a;
    clearScreen();
    return a;
}

void confirmTickets()
{
    header();
    cout << "Thanks For Using Our Airline Management System. Have A Safe Journey :)" << endl
         << endl;
    clearScreen();
}

void cauTickets()
{
    string name;
    int x;

    system("cls");
    header();

    cout << "Enter Name of Flight: ";
    cin >> name;
    bool tf = false;
    for (x = 0; x < Flightscount; x++)
    {
        if (name == namess[x])
        {
            tf = true;
            break;
        }
    }
    if (tf)
    {
        system("cls");
        header();

        cout << "Flight Name:"
             << "\t"
             << "Flight Route:"
             << "\t"
             << "\t"
             << "Tickets Bought:"
             << endl
             << name
             << "\t"
             << "\t"
             << flightRoutes[x]
             << "\t"
             << "\t"
             << "\t"
             << quantityT[x] << endl;
        clearScreen();
    }
    else
    {
        cout << endl
             << "Flight Not Found." << endl;
        clearScreen();
    }
}
