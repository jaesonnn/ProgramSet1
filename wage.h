#ifndef WAGE_H
#define WAGE_H

class Wage
{
public:
    Wage();
    void calculateWage();

private:
    float salary = 0;
    int hoursWorked;
    float hourlyRate;
    int extraHours = 0;
};

#endif // WAGE_H
