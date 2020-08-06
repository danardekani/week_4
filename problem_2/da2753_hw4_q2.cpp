#include <iostream>
using namespace std;

int main() {

    string answer;
    int number;
    int i = 6;
    int num[] = {1,5,10,50,100,500,1000};
    string romanSymbol[] = {"I","V","X","L","C","D","M"};

    //Prompt user for decimal number
    cout << "Enter decimal number: ";
    cin >> number;

    while(number > 0)
    {
        int divide = number / num[i];
        number = number % num[i];
        while(divide --)
        {
            romanSymbol[i] = answer;
            cout << answer ;
        }
        i --;
    }
}
