// Arrays & Iteration

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Display X, Y, and Error values
void Disp(float newarray[201][4]) {
    for (int i = 0; i < 201; i++) {
        cout << fixed << setprecision(3) << "X = " << newarray[i][0] << "\t" << "Y_1= " << newarray[i][1] << "\t"
            << "Y_2= " << newarray[i][2] << "\t" << "Error= " << newarray[i][3] << endl;
    }
}

// Display solutions
void DispSol(float newarray[201][4]) {
    for (int i = 0; i < 201; i++) {
        if (newarray[i][3] < 0.1) {
            cout << fixed << setprecision(3) << "X = " << newarray[i][0] << "\t" << "Y_1= " << newarray[i][1] << "\t"
                << "Y_2= " << newarray[i][2] << "\t" << "Error= " << newarray[i][3] << endl;
        }
    }
}

// Add calculations to the array
void fillArray(float x, float y_1, float y_2, float error, float newarray[201][4], int i) {
    newarray[i][0] = x;
    newarray[i][1] = y_1;
    newarray[i][2] = y_2;
    newarray[i][3] = error;
    //cout << error << endl;
}

int main()
{

    float min = -5;
    float max = 5;
    float step = .05;
    float error = 1;
    float y_1;
    float y_2;
    float newarray[201][4] = {};
    int i = 0;

    for (float x = min; x >= min && x <= max; x += step) {
        y_1 = pow(x, 2) + x - 4;
        y_2 = -0.5 * pow(x, 3) + 0.2 * pow(x, 2) + 4 * x - 1;
        error = abs(y_1 - y_2);
        fillArray(x, y_1, y_2, error, newarray, i);
        i += 1;
    }

    Disp(newarray);
    cout << '\n' << "Solutions" << '\n' << endl;
    DispSol(newarray);

}
