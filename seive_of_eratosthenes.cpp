#include <iostream>
using namespace std;
int arr[1000001];
void seive()
{
    int max = 50;
    arr[0] = arr[1] = 1;
    for (int i = 2; i <= max; i++)
    {
        if (arr[i] == 1)
            continue;
        for (int j = 2 * i; j <= max; j += i)
        {
            arr[j] = 1;
        }
    }
}
int main()
{
    int key, t;
    cout << "Enter the key element: ";
    cin >> key;
    seive();
    if (arr[key] == 0)
    {
        cout << "prime";
    }
    else
    {
        cout << "composite";
    }
    return 0;
}