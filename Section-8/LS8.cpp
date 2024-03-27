// Section 8
// Assignment operator (=)

#include <iostream>

using namespace std;

int main() {
    
    int num1 {10};
    int num2 {20};
    
    num1 = 100;
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;
    return 0;
}

// Arithmetic operators
/*
    +   addition
    -   subtraction
    *   multiplication
    /   division
    %   modulo or remainder  (works only with integers)
    
    +, -. * and /  operators are overloaded to work with multiple types such as int, double, etc.
    %  only for integer types
*/
#include <iostream>

using namespace std;

int main() {
    
    int num1 {200};
    int num2 {100};
    
  //  cout << num1 << " + " <<  num2 << " = "<< num1+ num2 << endl;
 
    int result {0};
    
    result = num1 + num2;
    cout << num1 << " + " <<  num2 << " = "<< result << endl;
    
    result = num1 - num2;
    cout << num1 << " - " <<  num2 << " = "<< result << endl;
    
    result = num1 * num2;
    cout << num1 << " * " <<  num2 << " = "<< result << endl;
    
    result = num1 / num2;
    cout << num1 << " / " <<  num2 << " = "<< result << endl;    
    
    result = num2 / num1;
    cout << num2 << " / " <<  num1 << " = "<< result << endl;
    
    result = num1 % num2;
    cout << num1 << " % " <<  num2 << " = "<< result << endl;    
    
    num1 = 10;
    num2 = 3;
    
    result = num1 % num2;
    cout << num1 << " % " <<  num2 << " = "<< result << endl;    
    
    result = num1 * 10 + num2;
    
    cout << 5/10 << endl;
    
    cout << 5.0/10.0 << endl;
    
    cout << endl;
    return 0;
}

// Convert EUR to USD

#include <iostream>

using namespace std;

int main() {
  
    const double usd_per_eur {1.19};
    
    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR : ";
    
    double euros {0.0};
    double dollars {0.0};
    
    cin >> euros;
    dollars = euros * usd_per_eur;
    
    cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;

    cout  << endl;
    return 0;
}

/*
    Increment operator ++
    Decrement operator --

    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointers

    Prefix   ++num
    Postfix      num++
    
    Don't overuse this operator!
    ALERT!!! Never use it twice for the same variable in the same statement!!
*/
#include <iostream>

using namespace std;

int main() {
    
    int counter {10};
    int result {0};
     
// Example 1 - simple increment
    cout << "Counter : " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter : " << counter << endl;
  
    counter++;
    cout << "Counter : " << counter << endl;

    ++counter; 
    cout << "Counter : " << counter << endl;

// Example 2 - preincrement
//    counter = 10;
//    result = 0;
//    
//    cout << "Counter : " << counter << endl;
//    
//    result = ++counter; // Note the pre increment
//    cout << "Counter : " << counter << endl;
//    cout << "Result : " << result << endl;

// Example 3 - post-increment
//    counter = 10;
//    result = 0;
//    
//    cout << "Counter : " << counter << endl;
//    
//    result = counter++; // Note the post increment
//    cout << "Counter : " << counter << endl;
//    cout << "Result : " << result << endl;

// Example 4
//    counter = 10;
//    result = 0;
//
//    cout << "Counter : " << counter << endl;
//
//    result = ++counter + 10;  // Note the pre increment
//        
//    cout << "Counter : " << counter << endl;
//    cout << "Result : " << result << endl;

// Example 5
//    counter = 10;
//    result = 0;
//
//    cout << "Counter : " << counter << endl;
//
//    result = counter++ + 10;  // Note the post increment
//        
//    cout << "Counter : " << counter << endl;
//    cout << "Result : " << result << endl;

    cout << endl;
    return 0;
}

// Mixed Type Expressions
/*
    Ask the user to enter 3 integers
    Calculate the sum of the integers then
    calculate the average of the 3 integers.
    
    Display the 3 integers entered
    the sum of the 3 integers and
    the average of the 3 integers.
*/

#include <iostream>

using namespace std;

int main() {
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    average = static_cast<double>(total) / count;
   // average = (double)total/count;  Old-Style
    
    
    cout << "The 3 numbers were: "<< num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;
    
    cout << endl;
    return 0;
}

// Equality Operators

#include <iostream>

using namespace std;

int main() {
    
    bool equal_result {false};
    bool not_equal_result {false};
    
    int num1{}, num2{};
    
    cout << boolalpha;      // will display true/false instead of 1/0 for booleans
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparision result (equals) : " << equal_result << endl;
    cout << "Comparision result (not equals) : " << not_equal_result << endl;

    
//    char char1{}, char2{};
//    cout << "Enter two characters separated by a space: ";
//    cin >> char1 >> char2;
//    equal_result = (char1 == char2);
//    not_equal_result = (char1 != char2);
//    cout << "Comparision result (equals) : " << equal_result << endl;
//    cout << "Comparision result (not equals) : " << not_equal_result << endl;
//    
    double double1{}, double2{};
//    cout << "Enter two doubles separated by a space: ";
//    cin >> double1 >> double2;
//    equal_result = (double1 == double2);
//    not_equal_result = (double1 != double2);
//    cout << "Comparision result (equals) : " << equal_result << endl;
//    cout << "Comparision result (not equals) : " << not_equal_result << endl;
//
//    cout << "Enter an integer and a double separated by a space: ";
//    cin >> num1 >> double1;
//    equal_result = (num1 == double1);
//    not_equal_result = (num1 != double1);
//    cout << "Comparision result (equals) : " << equal_result << endl;
//    cout << "Comparision result (not equals) : " << not_equal_result << endl;


    cout << endl;
    return 0;
}

// Relational Operators
#include <iostream>

using namespace std;

int main() {
    int num1{}, num2{};
    
    cout << boolalpha;
//    cout << "Enter 2 integers separated by a space: ";
//    cin >> num1 >> num2;
    
//    cout << num1 << " > "   << num2  << " : " << (num1 > num2) << endl;
//    cout << num1 << " >= " << num2  << " : " << (num1 >= num2) << endl;
//    cout << num1 << " < "  << num2  << " : " << (num1 < num2) << endl;
//    cout << num1 << " <= " << num2  << " : " << (num1 <= num2) << endl;
   
    const int lower {10};
    const int upper {20};
    
    cout << "\nEnter an integer that is greater than " << lower << " : " ;
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;
    
    cout << "\nEnter an integer that is less than or equal to " << upper << " : " ;
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <=  upper) << endl;
    
    cout  << endl;
    return 0;
}

// Logical Operators

#include <iostream>

using namespace std;

int main() {
    int num {};
    const int lower{10};
    const int upper {20};
    
    cout << boolalpha;
    
    // Determine if an entered integer is between two other integers
    // assume lower < upper
//    cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
//    cin >> num;
//    
//    bool within_bounds {false};
//    
//    within_bounds = (num > lower && num < upper);
//    cout << num  << " is between "<< lower <<  " and " << upper << " : " << within_bounds << endl;
    
    // Determine if an entered integer is outside two other integers
    // assume lower < upper
//    cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
//    cin >> num;
//    
//    bool outside_bounds {false};
//    outside_bounds = (num < lower || num > upper);
//    cout << num  << " is outside "<< lower <<  " and " << upper << " : " << outside_bounds << endl;

    // Determine if an entered integer is exactly on the boundary
    // assume lower < upper
//    cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
//    cin >> num;
//    
//    bool on_bounds {false};
//    on_bounds = (num == lower || num == upper);
//    cout << num  << " is on one of the bounds which are "<< lower <<  " and " << upper << " : " << on_bounds << endl;

  //   Determine is you need to wear a coat based on temperature and wind speed    
    bool wear_coat {false}; 
    double temperature {};
    int wind_speed {};
    
    const int wind_speed_for_coat { 25 };       // wind over this value requires a coat
    const double temperature_for_coat {45}; // temperature below this value requires a coat
    
    // Require a coat if either wind is too high OR temperature is too low
    cout << "\nEnter the current temperature in (F) :" ;
    cin >> temperature;
    cout << "Enter windspeed in (mph): ";
    cin >> wind_speed;
    
    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;
    
    
    // Require a coat if BOTH the windspeed is too high AND temperature is too low
    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;
    
    
    cout << endl;
    return 0;
}
