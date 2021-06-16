#include "product.h"

#include <QDebug>
#include <iostream>
using namespace std;

Product::Product()
{
    qDebug() << "-------------------- Product --------------------";
}

void Product::findProduct()
{
    int limit = 171;
    unsigned long long int myProduct = 1;

    for(int counter=1; counter <= limit; counter+=2) {
        myProduct = myProduct * counter;    //if a number added by 2 is still smaller than 171, it is multiplied by 1 and a new value of Product is found
    }

    cout << "The product of the odd integers from 1 to 171 is: " << myProduct << "\n";
}
