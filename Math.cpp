

#include <iostream>
#include <iomanip>
//#include <math.h> // C
#include <cmath> // C++
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << x << endl;


    float y;
    y = abs(-5); // Absolute value
    //y = sqrt(17); // Square root
    //y = pow(3,4); // Exponent
    //y = exp(5); // Euler's number, e^5
    //y = log(1000); // Natural log, ln(1000)
    //y = log10(1000); // Log base 10

    cout << y << endl;


    float c;
    c = 7 % 3; // Remainder
    cout << c << endl;


    int a = 5, b = 5;
     a = a * 3;
     // OR
     b *= 3;
     cout << a << endl;
     cout << b << endl;


     int i = 2;
     int j;
     int l;

     cout << i << endl;
     j = i++; // Increase increment and return original
     cout << j << endl;
     l = ++i; // Increase increment and return increment
     cout << l << endl;

}



