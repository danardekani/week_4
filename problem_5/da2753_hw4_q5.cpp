#include <iostream>
using namespace std;

int main()
{
    int numberRows, spacing, print, i;

    cout << "Please enter a positive integer: ";
    cin >> numberRows;

    //This loop runs through the first
    //half of the hourglass
    for (i = 1; i <= numberRows; i++) {

        //This for loop provides
        //indentation for each new row
        for (spacing = 1; spacing < i; spacing++)
            cout << " " ;

        //This for loop prints out the *
        //for each new row incrementing by 1 each iteration
        for (print = i; print <= numberRows; print++)
            cout << "*" << " ";

        //This cout statement ends each row.
        cout << endl;
    }

    //This loop will work in reverse from the first half
    //decrement numberRows by one every iteration
    for (i = numberRows; i >= 1; i--) {

        for (spacing = 1; spacing < i; spacing++)
            cout << " " ;

        for (print = i; print <= numberRows; print++)
            cout << "*" << " ";

        cout << endl;
    }
}