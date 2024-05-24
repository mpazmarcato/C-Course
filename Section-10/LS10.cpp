//Section 10 
// C++ Strings

#include <iostream>
#include <cstring>      // for c-style string functions
#include <cctype>       // for character-based functions

using namespace std;    

int main()
{
    char firstName[20] {};
    char lastName[20] {};
    char fullName[50] {};
    char temp[50] {};

    // cout << firstName;

    cout << "Please enter your first name: ";
    cin >> firstName;

    cout << "Please enter your last name: ";
    cin >> lastName;

    cout << "Hello " << firstName << " your first name has " << strlen(firstName) << " characters" << endl;
    cout << "and your last name " << lastName << " has " << strlen(lastName) << " characters" << endl;

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    cout << "Your full name is " << fullName << endl;
    cout  << endl;

    return 0;
}