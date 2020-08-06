#include <iostream>
using namespace std;

// driver code
int main()
{
    int n, k;

    cout << "Enter decimal number: ";
    cin >> n;

    // Size of an integer is assumed to be 256 bits
    if (n >= 0 && n <= 8 )
    {
        for (int i = 3; i >= 0; i--)
        {
            k = n >> i;
            if (k & 1)
                cout << "1";
            else
                cout << "0";
        }
    }
    else if (n >= 9 && n <= 16)
    {
        for (int i = 4; i >= 0; i--)
        {
            k = n >> i;
            if (k & 1)
                cout << "1";
            else
                cout << "0";
        }
    }
    else if (n >= 17 && n <= 32)
    {
        for (int i = 5; i >= 0; i--)
        {
            k = n >> i;
            if (k & 1)
                cout << "1";
            else
                cout << "0";
        }
    }
    else if (n >= 33 && n <= 64)
    {
        for (int i = 6; i >= 0; i--)
        {
            k = n >> i;
            if (k & 1)
                cout << "1";
            else
                cout << "0";
        }
    }
    else if (n >= 65 && n <= 128)
    {
        for (int i = 7; i >= 0; i--)
        {
            k = n >> i;
            if (k & 1)
                cout << "1";
            else
                cout << "0";
        }
    }
    else if (n >= 129 && n <= 256)
    {
        for (int i = 8; i >= 0; i--)
        {
            k = n >> i;
            if (k & 1)
                cout << "1";
            else
                cout << "0";
        }
    }
    else if (n >= 257 && n <= 512)
    {
        for (int i = 9; i >= 0; i--)
        {
            k = n >> i;
            if (k & 1)
                cout << "1";
            else
                cout << "0";
        }
    }
}