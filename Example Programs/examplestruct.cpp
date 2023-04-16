#include <iostream>
#include <string>

using namespace std;

// Define a structure type called room
struct Room {
    int room_no;
    int floor;
    double price;
    string customer_name;
};

// Define a global array of that type
Room roomArray[5];

// Function to input room array from user
void Read_RoomArray() {
    for (int i = 0; i < 5; i++) {
        cout << "Enter information for Room " << i+1 << ":" << endl;
        cout << "Room No: ";
        cin >> roomArray[i].room_no;
        cout << "Floor: ";
        cin >> roomArray[i].floor;
        cout << "Price: ";
        cin >> roomArray[i].price;
        cin.ignore();
        cout << "Customer Name: ";
        getline(cin, roomArray[i].customer_name);
    }
}

// Function to display room array to user
void Show_RoomArray() {
    for (int i = 0; i < 5; i++) {
        cout << "Room " << i+1 << ":" << endl;
        cout << "Room No: " << roomArray[i].room_no << endl;
        cout << "Floor: " << roomArray[i].floor << endl;
        cout << "Price: " << roomArray[i].price << endl;
        cout << "Customer Name: " << roomArray[i].customer_name << endl;
    }
}

// Main function
int main() {
    // Input room array from user
    Read_RoomArray();
    // Display room array to user
    Show_RoomArray();
    return 0;
}

