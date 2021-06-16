#include "pattern.h"

#include <QDebug>
#include <iostream>
using namespace std;

Pattern::Pattern()
{
    qDebug() << "-------------------- Pattern --------------------";
}

void Pattern::drawTriangle(int base)
{
    cout << "\n";
    int numberOfSpaces = 0;

    // outer for-loop controls the triangle's height with the endl
    for(int counterOne=1; counterOne<=base; counterOne++)
    {
        // this for-loop counts the number of spaces
        for(numberOfSpaces=base-counterOne; numberOfSpaces>0; numberOfSpaces--) {
            cout << " ";
        }

        // this for-loop output the number of asterisks
        for(int counterTwo=base-counterOne; counterTwo<base; ++counterTwo) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n";
}
