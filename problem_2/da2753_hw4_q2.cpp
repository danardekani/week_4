#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter decimal number: " << endl;
    cin >> num;

    while (num != 0)
    {
        if (num >= 1000)
        {
            cout << "M";
            num -= 1000;
        }
        else if (num >= 500)
        {
            cout << "D";
            num -= 500;
        }
        else if (num >= 100)
        {
            cout << "C";
            num -= 100;
        }
        else if (num >= 50)
        {
            cout << "L";
            num -= 50;
        }
        else if (num >= 10)
        {
            cout << "X";
            num -= 10;
        }
        else if (num >= 5)
        {
            cout << "V";
            num -= 5;
        }
        else if (num >= 1)
            cout << "I";
            num -= 1;
    }
    return 0;
}

