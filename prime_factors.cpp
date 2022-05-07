#include <iostream>
using namespace std;
int primecheck(int number)
{
    int x, count = 0;
    x = number;
    for (int i = 2; i * i <= number; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
        while (x % i == 0)
        {
            x /= i;
        }
    }
    if (x != 1)
    {
        count++;
    }
    return count;
}
int main()
{
    int number;
    cout << "Enter your number: ";
    cin >> number;
    cout << "number of prime factors are: " << primecheck(number);
    return 0;
}