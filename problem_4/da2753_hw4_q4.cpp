#include <iostream>
#include <cmath>

using namespace std;

int main()
{
//    //SECTION A --------------------------------- SECTION A//

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
    cout << "The geometric mean is: " << geoMean << endl;

    //SECTION B --------------------------------- SECTION B//

    double geoMeanB, exponentB, numB, exit, baseB = 1.0;

    cout << "section B" << endl;
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: " << endl;

    int i = 1;
    while (exit != -1)
    {
        cin >> numB;
        cin >> exit;
        baseB = baseB * numB;
        i++;

        if (numB == -1)
        {
            numB = 0;
            baseB = baseB * numB;
        }
    }
    exponentB = i;
    geoMeanB = pow(baseB, 1/exponentB);
    cout << "exponent is: " << i << endl;
    cout << "The geometric mean is: " << geoMeanB << endl;

    return 0;
}