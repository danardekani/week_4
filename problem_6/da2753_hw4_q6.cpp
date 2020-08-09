#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int n, i, num, even_count = 0, odd_count = 0;

    cout << "Please enter a positive integer: ";
    cin >> num;

    for (i = 2; i <= num; i++)
    {
        even_count = 0;
        odd_count = 0;
        n = i;

        while (n > 0) {
            //get the last digit of the number
            if (n % 2 == 0) {
                even_count++;
            }
            else {
                odd_count++;
            }
            //reduce the number of digit by 1
            // by removing last digit of number
            n = n / 10;
        }
        if (even_count > odd_count) {
            cout << i << endl;
        }
    }
}






