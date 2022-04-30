#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
void hashing(char str[])
{
    int arr[91]{0};
    int length = strlen(str);
    char x;
    for (int i = 0; i < length; i++)
    {
        arr[int(str[i])]++;
    }
    cout << "Entre your character: ";
    cin >> x;
    if (int(x) <= 90 && int(x) >= 65)
    {
        cout << "frequency of your letter is: " << (arr[int(x)]) << endl;
    }
    else
    {
        cout << "character not found" << endl;
    }
}
int main()
{
    char str[100] = "MNNIT ALLAHABAD";
    hashing(str);
    return 0;
}