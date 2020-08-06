#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int n, i, a;
    int even_count = 0;
    int odd_count = 0;

    cout << "Please enter a positive integer: ";
    cin >> n;

    for (i = 1; i < n; i++)
    {
        while (n != 0)
        {
            //get the last digit of the number
            a = n % 10;
            if (a % 2 == 0)
                even_count++;
            else
                odd_count++;
            //reduce the number of digit by 1
            // by removing last digit of number
            n = n / 10;
            if (even_count > odd_count)
                cout << i ;
        }
    }
}






