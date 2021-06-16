#include "binaryconversion.h"

#include <cmath>
#include <QDebug>
#include <iostream>
using namespace std;

BinaryConversion::BinaryConversion()
{
    qDebug() << "--------------- Binary Conversion ---------------";
}

int BinaryConversion::binaryToDecimal(int num)
{
    int sum = 0;
    int counter = 1;
    int binary = num;
    int rem;

    while(binary != 0)
    {
        rem = binary % 10;
        binary /= 10;
        sum += rem * pow(2, counter);
        ++counter;
    }
    return sum;
}
