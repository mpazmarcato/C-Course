
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    const int priceSmallRoom {25}; // REMEMBER TO ADD CONST, IF NOT SOMEONE CAN MODIFY IT DURING THE PROGRAM
    const int priceLargeRoom {35};
    const double taxRate {0.06};
    
    cout << "Hello, welcome to Frank's Carpet Cleaning Service!" << endl;

    cout << "\nHow many small rooms would you like cleaned: ";
    int smallRooms {0};
    cin >> smallRooms;

    cout << "How many large rooms would you like cleaned: ";
    int largeRooms {0};
    cin >> largeRooms;

    int cost = (priceSmallRoom * smallRooms) + (priceLargeRoom * largeRooms);
    double totalTax = cost * taxRate;
    double totalPrice = cost + totalTax;

    cout << "\nEstimate for carpet cleaning service";
    cout << "\nNumber of small rooms: " << smallRooms;
    cout << "\nNumber of large rooms: " << largeRooms;
    cout << "\nPrice per small room: $" << priceSmallRoom;
    cout << "\nPrice per large room: $" << priceLargeRoom;
    cout << "\nCost: $" << cost;
    cout << "\nTax: $" << totalTax;
    cout << "\n===============================";
    cout << "\nTotal estimate: $" << totalPrice;
    cout << "\nThis estimate is valid for " << 30 << " days";

    cout << endl;
    return 0;
}

