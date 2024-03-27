// // Section 9
// // If Statement 

// #include <iostream>

// using namespace std;

// int main() {
//     int num {};
//     const int min {10};
//     const int max {100};
    
//     cout << "Enter a number between " << min << " and " << max << ": ";
//     cin >> num;
    
//     if (num >= min) {
//         cout << "\n=========== If statement 1 =============" << endl;
//         cout << num << " is greater than or equal to " << min << endl;
      
//         int diff {num - min};
//         cout << num << " is " << diff << " greater than " << min << endl;
//     }
    
//     if (num <= max) {
//         cout << "\n=========== If statement 2=============" << endl;
//         cout << num << " is less than or equal to " << max << endl;
        
//         int diff { max -num};
//         cout << num << " is " << diff << " less than " << max << endl;
//     }
    
//     if (num >= min && num <=max) {
//       cout << "\n=========== If statement 3=============" << endl;   
//       cout << num << " is in range " << endl;
//       cout << " This means satements 1 and 2 must also display!!" << endl;
//     }
    
//     if (num == min || num == max) {
//         cout << "\n=========== If statement 4 =============" << endl;   
//         cout << num << " is right on a boundary " << endl;
//         cout << "This means all 4 statements display " << endl;

//     }
    
//     cout << endl;
//     return 0;
// }

// // If-Else Statement
// #include <iostream>

// using namespace std;

// int main() {
//     int num{};
//     const int target {10};

//     cout << "Enter a number  and I'll compare it to " << target << ": ";
//     cin >> num;
    
//     if (num >= target) {
//         cout << "\n==================================" << endl;
//         cout << num << " is greater than or equal to " << target << endl;
//         int diff { num - target};
//         cout << num << " is " << diff << " greater than " << target << endl;
//     } else {
//         cout << "\n==================================" << endl;
//         cout << num << " is less than " << target << endl;
//         int diff { target - num};
//         cout << num << " is " << diff << " less than " << target << endl;
//     }
//     cout  << endl;
//     return 0;
// }

// // Shipping

// /* 
//     Shipping cost calculator
    
//     Ask the user for package dimension in inches
//     length, width, height - these should be integers
    
//     All dimension must be 10 inches or less or we cannot ship it
    
//     Base cost $2.50
//     If package volume is greater than 100 cubic inches there is a 10% surcharge
//     If package volume is greater than 500 cubic inches there is a 25% surcharge

// */

// #include <iostream>
// #include <iomanip>

// using namespace std;

// int main() {
    
//     int length{}, width{}, height{};
//     double base_cost{2.50};
    
//     const int tier1_threshold {100};    // volume
//     const int tier2_threshold{500};    // volume
    
//     int max_dimension_length  {10};  // inches
    
//     double tier1_surcharge {0.10};  // 10% extra
//     double tier2_surcharge {0.25};  // 25% extra
    
//     // All dimension must be 10 inches or less
    
//     int package_volume{};
    
//     cout << "Welcome to the package cost calculator" << endl;
//     cout << "Enter length, width, and height of the package separated by spaces : ";
//     cin >> length >> width >> height;
    
//     if(length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
//        cout << "Sorry, package rejected - dimension exceeded" << endl;
//     } else {
//         double package_cost {};
//         package_volume = length * width * height;
//         package_cost = base_cost;

//         if (package_volume > tier2_threshold){
//             package_cost += package_cost * tier2_surcharge;
//         } else if (package_volume > tier1_threshold) {
//             package_cost += package_cost * tier1_surcharge;
//         }
        
//         cout << fixed << setprecision(2);
//         cout << "The volume of your package is: " << package_volume << endl;
//         cout << "Your package will cost $" << package_cost << " to ship" << endl;
//     }
    
//     return 0;
// }

// Switch Statement

/* 
    Ask the user what grade they expect on an exam and 
    tell them what they need to score to get it.
*/

// #include <iostream>

// using namespace std;

// int main() {
    
//     char letter_grade {};
    
//     cout << "Enter the letter grade you expect on the exam: ";
//     cin >> letter_grade;
    
//     switch (letter_grade) {
//         case 'a':
//         case 'A':
//             cout << "You need a 90 or above, study hard!" << endl;
//             break;
//         case 'b':
//         case 'B':
//             cout << "You need 80-89 for a B, go study!" << endl;
//             break;
//         case 'c':
//         case 'C':
//             cout << "You need 70-79 for an average grade" << endl;
//             break;
//         case 'd':
//         case 'D':
//             cout << "Hmm you should strike for a better grade. All you need is 60-69" << endl;
//             break;
//         case 'f':
//         case 'F': {
//             char confirm {};
//             cout << "Are you sure (y/n)? ";
//             cin >> confirm;

//             if (confirm == 'y' || confirm == 'Y')
//                 cout << "Ok, I guess you didn't study" << endl;
//             else if (confirm == 'n' || confirm == 'N')
//                 cout << "Good - go study" << endl;
//             else 
//                 cout << "Invalid choice" << endl;
//             break;
//         }
//         default:
//             cout << "Sorry, not a valid grade" << endl;
//             break;
//     }
    
//     cout << endl; 
//     return 0;
// }

// Switch with enumeration

// #include <iostream>

// using namespace std;

// int main() {
    
//     enum Direction {
//         left, right, up, down
//     };
    
//     Direction heading {left};
    
//     switch (heading)
//     {
//     case left:
//         cout << "Going left" << endl;
//         break;
//     case right:
//         cout << "Going right" << endl;
//         break;
//     case up:
//         cout << "Going up" << endl;
//         break;
//     case down:
//         cout << "Going down" << endl;
//         break;
//     default:
//         break;
//     }
    
//     cout <<  endl;
//     return 0;
// }

// Conditional Operator
// #include <iostream>

// using namespace std;

// int main() {

//     // int num {};
//     // cout << "Enter an integer: ";
//     // cin >> num;

//     // cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;


//     int num1{}, num2{};
//     cout << "Enter two integers separated by space: ";
//     cin >> num1 >> num2;

//     if (num1 != num2){
//         cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
//         cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
//     } else {
//         cout << "The numbers are the same" << endl;
//     }

//     cout  << endl;
//     return 0;
// }

// // For Loop
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     for (int i{1} ; i <= 10 ; ++i)
//         cout << i << endl;

//    for (int i{1} ; i <=10 ; i+=2)
//        cout << i << endl;

//    for (int i {10}; i > 0; --i)
//        cout << i << endl;
//    cout << "Blastoff!" << endl;

//    for (int i{10}; i<=100; i+=10) {
//        if (i % 15 == 0) 
//            cout << i << endl;
//    }

//    for (int i{1}, j{5} ; i<=5 ; ++i, ++j)
//        cout << i << " + " << j << " = " << (i+j) << endl;

//    for ( int i{1}; i<=100; ++i) {
//        cout << i;
//        if (i % 5 == 0)
//            cout << endl;
//        else 
//            cout << " ";
//    }

//  for ( int i{1}; i<=100; ++i) {
//        cout << i << ( (i % 10 ==0) ? "\n" : " ");
//    }
//       

//    vector<int> nums {10,20,30,40,50};
//    for (unsigned i{0}; i < nums.size(); ++i)
//        cout << nums[i] << endl;
    
//     cout << endl;
//     return 0;
// }

// Range-based For Loop
// #include <iostream>
// #include <vector>
// #include <iomanip>

// using namespace std;

// int main() {
   
//     // int scores[] {10, 20, 30};
//     // for (auto score : scores)
//     //     cout << score << endl;

//     // vector<double> temperature {87.9, 77.9, 80.0, 72.5};
//     // double average_temp {};
//     // double total {};

//     // for (auto temp : temperature)
//     //     total += temp;

//     // if (temperature.size() != 0)
//     //     average_temp = total / temperature.size();
    
//     // cout << fixed << setprecision(1);
//     // cout << "Average temp is " << average_temp << endl;

//     // for (auto val : {1, 2, 3, 4})
//     //     cout << val << endl;

//     // for (auto c : "This is a test")
//     //     if (c != ' ')
//     //         cout << c;

//     for (auto c: "This is a test")
//         if (c == ' ')
//             cout << "\t";
//         else
//             cout << c;
            
        
//     return 0;
// }

// While Loop
// #include <iostream>

// using namespace std;

// int main() {
    
//     // int num {};
//     // cout << "Enter a positive integer - start the countdown: ";
//     // cin >> num;

//     // while (num > 0)
//     // {
//     //     cout << num << endl;
//     //     --num;
//     // }
//     // cout << "Blastoff" << endl;

//     // int num {};
//     // cout << "Enter a positive integer - start the count up: ";
//     // cin >> num;

//     // int i {1};
//     // while (num >= i)
//     // {
//     //     cout << i << endl;
//     //     i++;
//     // }
//     // cout << "Blastoff" << endl;

//     // bool done {false};
//     // int number {0};

//     // while (!done) {
//     //         cout << "Enter an integer between 1 and 5: ";
//     //         cin >> number;
//     //         if (number <= 1 || number >= 5)
//     //             cout << "Out of range, try again" << endl;
//     //         else {
//     //             cout << "Thanks!" << endl;
//     //             done = true;
//     //         }
//     //     }

//     cout  << endl;
//     return 0;
// }

//Do-while
//Simple Menu example
// #include <iostream>

// using namespace std;

// int main() {

//     char selection{};
//     do {
//         cout << "\n-----------------------" << endl;
//         cout << "1. Do this" << endl;
//         cout << "2. Do that" << endl;
//         cout << "3. Do something else" << endl;
//         cout << "Q. Quit" << endl;
//         cout << "\nEnter your selection: ";

//         cin >> selection;

//         switch (selection)
//         {
//         case '1':
//             cout << "You code 1 - doing this" << endl;
//             break;
//         case '2':
//             cout << "You code 2 - doing that" << endl;
//             break;
//         case '3':
//             cout << "You code 3 - doing something else" << endl;
//             break;
//         case 'Q':
//         case 'q':
//             cout << "Goodbye!" << endl;
//             break;
//         default:
//             cout << "Try again" << endl;
//             break;
//         }

//     } while (selection != 'q' && selection != 'Q');

//     cout  << endl;
//     return 0;
// }

//Nested Loops
//Nested Loops - Histogram 
#include <iostream>
#include <vector>

using namespace std;

int main() {

    // for(int num1{1}; num1 <= 10; ++num1){
    //     for(int num2{1}; num2 <= 10; ++num2){
    //         cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    //     }
    //     cout << "************" << endl;
    // }

    int numItens{};
    cout << "How many data itens do you have?";
    cin >> numItens;
    
    vector<int> data {};

    for(int i{1}; i <= numItens; ++i){
        int dataItem{};
        cout << "Enter data item " << i << ": ";
        cin >> dataItem;
        data.push_back(dataItem);
    }

    cout << "\nDisplaying Histogram" << endl;

    for(auto val : data){
        for (int i{1}; i <= val; ++i){
            if (i % 5 == 0)
                cout << "*";
            else
                cout << "-";
        }
        cout << endl;
    }

    cout  << endl;
    return 0;
}

