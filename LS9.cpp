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
#include <iostream>

using namespace std;

int main() {

    // int num {};
    // cout << "Enter an integer: ";
    // cin >> num;

    // cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;


    int num1{}, num2{};
    cout << "Enter two integers separated by space: ";
    cin >> num1 >> num2;

    if (num1 != num2){
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    } else {
        cout << "The numbers are the same" << endl;
    }

    cout  << endl;
    return 0;
}