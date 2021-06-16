#include "wage.h"
#include "product.h"
#include "palindrome.h"
#include "pattern.h"
#include "binaryconversion.h"
#include "statistic.h"

#include <iostream>
using namespace std;

int main()
{
    // class Wage driver
    Wage wageObj;                   // a Wage object is created
    cout<<"**********************Sample Output Results**************************\n";
    cout<<"      Enter hours worked (-1 to end): 39\n";
    cout<<"      Enter hourly rate of the worker ($00.00): 12.07\n";
    cout<<"      Salary is $470.73\n\n";

    cout<<"      Enter hours worked (-1 to end): 40\n";
    cout<<"      Enter hourly rate of the worker ($00.00): 7.50\n";
    cout<<"      Salary is $300.00\n\n";

    cout<<"      Enter hours worked (-1 to end): 41\n";
    cout<<"      Enter hourly rate of the worker ($00.00): 10.00\n";
    cout<<"      Employee worked 1 hour(s) overtime for a value of $15.00\n";
    cout<<"      Salary is $415.00\n\n";

    cout<<"      Enter hours worked (-1 to end): -1\n\n";

    wageObj.calculateWage();        // function calculateWage in Wage class is called
    cout << "\n";

    // class Product driver
    Product prodObj;                // a Product object is created
    prodObj.findProduct();
    cout << "\n";

    // class Palindrome driver
    Palindrome palObj;              // a Palindrome object is created
    if(palObj.isPalindrome(1234321))
        cout << "1234321 is a palindrome\n";
    else
        cout << "1234321 is not a palindrome\n";

    if(palObj.isPalindrome(1230321))
        cout << "1230321 is a palindrome\n";
    else
        cout << "1230321 is not a palindrome\n";

    if(palObj.isPalindrome(1212432))
        cout << "1212432 is a palindrome (this should print)\n\n";
    else
        cout << "1212432 is not a palindrome\n\n";

    // class Pattern driver
    Pattern patObj;                 // a Pattern object is created
    cout << "Right triangle of base 9\n";
    patObj.drawTriangle(9);
    cout << "Right triangle of base 3\n";
    patObj.drawTriangle(3);
    cout << "Right triangle of base 5\n";
    patObj.drawTriangle(5);

    // class BinaryConversion driver
    BinaryConversion binConObj;     // a BinaryConversion object is created
    cout << "Binary value 111 to decimal = 3\n";
    cout << "Actual function result: " << binConObj.binaryToDecimal(111);
    cout << "\n\nBinary value 101001 to decimal = 41\n";
    cout << "Actual function result: " << binConObj.binaryToDecimal(101001);
    cout << "\n\nBinary value 11100 to decimal = 28\n";
    cout << "Actual function result: " << binConObj.binaryToDecimal(11100) << endl << endl;

    // class Statistic driver
    Statistic statObj;              // a Statistic object is created
    cout << "Testing with 5 values: 1, 2, 5, 4, 3\n";
    cout << "Largest: 5\n"
            "Smallest: 1\n"
            "Average: 3\n"
            "Sum: 15\n";
    statObj.printStatistics(5);

    cout << "Testing with 2 values: -1, 8\n";
    cout << "Largest: 8\n"
            "Smallest: -1\n"
            "Average: 3\n"
            "Sum: 7\n";
    statObj.printStatistics(2);

    cout << "Testing with 3 values: 8, -2, -6\n";
    cout << "Largest: 8\n"
            "Smallest: -6\n"
            "Average: 0\n"
            "Sum: 0\n";
    statObj.printStatistics(3);

    return 0;
}
