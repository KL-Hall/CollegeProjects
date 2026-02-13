// Conditional Statements

#include <iostream>
using namespace std;

int main()
{
    float m1, m2;
    int x1 = 3, y1 = 7, x2 = -2, y2 = 2;
    // Select one group below at a time
    //int x3 = 4, y3 = -1, x4 = -5, y4 = 8;
    int x3 = 10, y3 = 16, x4 = -5, y4 = 1;
    //int x3 = 3, y3 = 6, x4 = 3, y4 = 4;

    if ((x2 - x1) == 0 || (x4 - x3) == 0) {
        cout << "Undefined" << endl;
    }

    else {

        m1 = ((float(y2) - y1) / (x2 - x1));
        m2 = ((float(y4) - y3) / (x4 - x3));

        cout << "Slope 1 = " << m1 << "\n" << "Slope 2 = " << m2 << endl;

        // If the slopes are the same, they will never intersect, so they are parallel.
        // If they are negative reciprocals of each other, they intersect at a 90 degree angle and are perpendicular.
		// If the slopes are positive, they are positively correlated. If they are negative, they are negatively correlated.

        if (m1 == m2 && m1 && m2 >= 0) {
            cout << "Parallel & Positively Correlated" << endl;
        }

        else if (m1 == m2 && m1 && m2 <= 0) {
            cout << "Parallel & Negatively Correlated" << endl;
        }

        else if (m1 == (-1 / m2) || m2 == (-1 / m1)) {
            cout << "Perpendicular" << endl;
        }

        else {
            cout << "Not Parallel or Perpendicular" << endl;
        }
    }


}

