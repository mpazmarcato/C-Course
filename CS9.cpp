// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> numbers {};
    char choice{};

    do {
        cout << "P - Print numbers";
        cout << "\nA - Add a number";
        cout << "\nM - Display mean of the numbers";
        cout << "\nS - Display the smallest number";
        cout << "\nL - Display the largest number";
        cout << "\nQ - Quit" << endl;
    
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 'P':
        case 'p':{
            if (numbers.empty()){
                cout << "[] - the list is empty" << endl;
            } else {
                cout << "[ ";
                for (int num : numbers) {
                    cout << num << " ";
                }
                cout << "]\n";
            }
            break;
        }
        case 'a': {
            int num{};

            cout << "Enter a number to add: ";
            cin >> num;

            bool isDuplicate = false;
            for (int n : numbers) {
                if (n == num) {
                    isDuplicate = true;
                    break;
                }
            }

            if (isDuplicate) {
                cout << num << " already exists in the list, please try another one" << endl;
            } else {
                numbers.push_back(num);
                cout << num << " added" << endl;
            }
        }
            break;
        case 'M':
        case 'm':{
            if (numbers.empty()){
                cout << "Unable to calculate the mean - no data" << endl;
            } else {
                int sum {};

                for (int num : numbers) {
                    sum += num;
                }

                double mean = static_cast<double>(sum) / numbers.size();
                cout << "Mean: " << mean << endl;
            }
        }   
            break;
        case 'S':
        case 's':{
            if (numbers.empty()){
                cout << "Unable to return the smallest number - no data" << endl;
            } else {
                int smallest = numbers[0];
                for(int i{1}; i < numbers.size(); ++i){
                    smallest = numbers[i];
                }
                cout << "The smallest number is " << smallest << endl;
            }
        }
            break;
        case 'L':
        case 'l':{
            if (numbers.empty()){
                cout << "Unable to return the largest number - no data" << endl;
            } else {
                int largest = numbers[0];
                for(int i{1}; i < numbers.size(); ++i){
                    largest = numbers[i];
                }
                cout << "The smallest number is " << largest << endl;
            }
        }
            break;
        case 'Q':
        case 'q':
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Unknown selection, please try again" << endl;
            break;
        }
    } while (choice != 'q' || choice != 'Q');

    return 0;
}