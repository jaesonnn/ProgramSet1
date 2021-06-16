#include "palindrome.h"

#include <QDebug>
#include <iostream>
using namespace std;

Palindrome::Palindrome()
{
    qDebug() << "------------------- Palindrome ------------------";
}

bool Palindrome::isPalindrome(long int number)
{
    int num = number;

    int firstNum = num / 1000000;       // the first digit of the original number is found and separated
    num %= 1000000;                  // the remainder after dividing for the first digit is calculated for

    int secondNum = num / 100000;
    num %= 100000;

    int thirdNum = num / 10000;
    num %= 10000;

    int fourthNum = num / 1000;
    fourthNum = fourthNum;              // since the fourth number won't be used, we assign the value of the fourth number in fourthNum
    num %= 1000;

    int fifthNum = num / 100;
    num %= 100;

    int sixthNum = num / 10;
    num %= 10;

    int seventhNum = num / 1;

    int answer = 0;                     // answer is initially set to false (i.e., 0)

    if(firstNum == seventhNum)          // the 1st number is compared to the 7th number
    {
        if(secondNum == sixthNum)       // if the 1st and 7th numbers are alike, then the 2nd and 6th numbers are compared
        {
            if(thirdNum == fifthNum)    // if the 2nd and 6th numbers are alike, then the 3rd and 5th numbers are compared
                answer = true;
            else
                answer = false;         // unless the 3rd and 5th numbers aren't alike, then the number is not a palindrome
        }
        else
            answer = false;             // unless the 2nd and 6th numbers aren't alike, then the number is not a palindrome
    }
    else {
        answer = false;                 // unless the 1st and 7th numbers aren't alike, then the number is not a palindrome
    }

    return answer;
}
