#include <iostream>

using namespace std;

double divide(double a, double b)
{
    const double delta = 0.000000001;
    double ret = 0;
    if(!((-delta < b) && ( b < delta )))
    {
        ret = a / b;
    }
    else 
    {
        throw 0;
    }
}

int main()
{
    try
    {
        double r = divide(1, 0);
        cout << "r = " << r <<endl;
    }
    catch(...)
    {
        cout << "Divide by zero..." << endl;
    }
    return 0;
}

