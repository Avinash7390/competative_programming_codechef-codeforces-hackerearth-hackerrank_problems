#include <iostream>
using namespace std;
int prime(int number)
{
    int flag = 0, i;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int main()
{
    int number;
    cout << "Enter your number: ";
    cin >> number;
    int check = prime(number);
    if (check == 0)
    {
        cout << "its a prime number.";
    }
    else
    {
        cout << "Its not a prime number.";
    }
    return 0;
}