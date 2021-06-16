#include "wage.h"

#include <QDebug>
#include <iostream>
using namespace std;

Wage::Wage()
{
//    qDebug() << "A Wage object has been created.";
}

void Wage::calculateWage()
{
    cout << "Enter hours worked (-1 to end): " ;
    cin >> hoursWorked;

    while(hoursWorked != -1)
    {
        cout << "Enter the worker's hourly rate($00.00): ";
        cin >> hourlyRate;

        if(hoursWorked <= 40)
        {
            salary = hoursWorked * hourlyRate;
            cout << "Salary is: $" << salary << "\n\n";
        }
        else {
            extraHours = hoursWorked - 40;
            int hrlyRateInt = int(hourlyRate);      // converted into an integer
            float temp1 = 40 * hrlyRateInt;
            float temp2 = extraHours * 1.5 * hrlyRateInt;
            salary = temp1 + temp2;

            cout << "Employee worked " << extraHours << " hour(s) overtime for a value of $" << temp2 << "\n";
            cout << "Salary is $" << salary << "\n\n";
        }

        cout << "Enter hours worked (-1 to end): ";
        cin >> hoursWorked;
    }
}
