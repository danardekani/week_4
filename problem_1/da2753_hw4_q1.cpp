#include <iostream>
using namespace std;

//Section A
int main()
{
    int count, positiveInt, num;

    //Section A user input
    cout << "section a" << endl;
    cout << "Please enter a positive integer: ";
    cin >> positiveInt;

    count = 1;
    num = 0;
    while (count <= positiveInt) {
        count ++;
        num += 2;
        cout << num << endl;
    }

    //Section B user input
    cout << "section b" << endl;
    cout << "Please enter a positive integer: ";
    cin >> positiveInt;

    num = 0;
    for(count = 1; count <= positiveInt; count++) {
        num += 2;
        cout << num << endl;
    }
    return 0;
}
