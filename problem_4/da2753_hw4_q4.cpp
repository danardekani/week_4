#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    //SECTION A --------------------------------- SECTION A//
    double sequenceLength, geoMean, exponent, num, base = 1.0;

    cout << "section a" << endl;
    cout << "Please enter the length of the sequence: ";
    cin >> sequenceLength;
    cout << "Please enter your sequence: " << endl;

    for (int i = 1; i <= sequenceLength; i++)
    {
        cin >> num;
        base = base * num;
    }
    exponent = sequenceLength;

    geoMean = pow(base, 1/exponent);
    cout << "The geometric mean is: " << setprecision(5) << geoMean << endl;

    //SECTION B --------------------------------- SECTION B//

    double geoMeanB, exponentB, numB, baseB = 1.0;

    cout << "section B" << endl;
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: " << endl;
    cin >> numB;
    int k = 0;
    while (numB >= 0)
    {
        baseB *= numB;
        cin >> numB;
        k++;
    }
    exponentB = k;
    geoMeanB = pow(baseB, 1/exponentB);
    cout << "the geometric mean is: " << geoMeanB << endl;
    return 0;
}
