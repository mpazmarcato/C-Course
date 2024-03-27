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