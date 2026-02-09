
#include <iostream>
#include <iomanip>
using namespace std; // <- So you don't have to write out std:: every time

//#define PI 3.14; // Alternate way to intialize a constant, but it functions very differently

int main()
{
    // VARIABLE TYPES
    int a; // Declaration of variable.
    a = 3; // Assign value to variable.
    int b = 3; // Initialize variable.
    char c = 'C'; // Char stands for "character". It only uses one letter. Must use single quotes.
    float d = 12.9; // 32 bits
    double e = 12345678.90123456788; // 64 bits

    cout << sizeof(d) << endl; // Number of bytes
    cout << scientific << e << endl; // Scientific notation
    cout << fixed << setprecision(2) << e << endl; // setprecision controls the number of digits, 
    // but when precreded by fixed it controls the number of decimal places. setprecision needs library <iomanip>
    bool f = true; // Outputs 1 or 0.
    cout << f << endl;
    cout << boolalpha << f << endl; // Outputs true or false

    int x = 4, y = 5;
    float z;
    z = x / y; // This won't work as it will return an integer instead of a float
    cout << z << endl;
    z = float(x) / y; // This return as a float
    cout << z << endl;
    z = 4. / y; // Technically works but not the best format
    cout << z << endl;

    const double PI = 3.14; // Constant variables save memory and improve performance as they cannot be altered

    cout << PI << endl;

    cout << "Hello World!\n" << "How are you?\n" << '\t' << PI << endl;
}
