#include <iostream>
using namespace std;

int main()
{
    int positiveInt, i, j, k;

    cout << "Please enter a positive integer: ";
    cin >> positiveInt;

    //This loop runs through the first
    //half of the hourglass
    for(i = 1; i <= positiveInt; i++) {

        //This for loop provides
        //indentation for each new row
        for(j = 1; j < i; j++)
            cout << " " ;

        //This for loop prints out the *
        //for each new row incrementing by 1 each iteration
        for(k = i; k <= positiveInt; k++)
            cout << "*" << " ";

        //This cout statement ends each row.
        cout << endl;
    }
}