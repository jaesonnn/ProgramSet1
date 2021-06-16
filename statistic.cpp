#include "statistic.h"

#include <cmath>
#include <QDebug>
#include <iostream>
using namespace std;

Statistic::Statistic()
{
    qDebug() << "------------------- Statistic -------------------";
}

void Statistic::printStatistics(int num)
{
    cout << "\n";

    int minimum = 32767;
    int maximum = 0;
    int sum = 0;
    int average = 0;
    int number;

    for(int counter=1; counter<=num; counter++)
    {
        cout << "Enter a number: ";
        cin >> number;

        if(maximum < number)        // maximum is less than the current number
            maximum = number;       // maximum is assigned the value of the current number
        if(minimum > number)        // minimum is greater than the current number
            minimum = number;       // minimum is assigned the value of the current number

        sum += number;
    }

    average = sum / num;            // the average of the number is calculated for
    cout << "\nLargest number is: " << maximum << "\n";
    cout << "Smallest number is: " << minimum << "\n";
    cout << "Average is: " << average << "\n";
    cout << "Sum is: " << sum << "\n";
    cout << "-----------------------------------\n\n";
}
