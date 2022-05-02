#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string str;
        getline(cin, str);
        string rev = "";
        int len = str.length();
        rev.resize(len);
        for (int i = 0; i < len; i++)
        {
            rev[i] = str[len - 1 - i];
        }
        if (str.compare(rev) == 0)
        {
            cout << "It is a pallindrome string.";
        }
        else
        {
            cout << "It is not a pallindrome string";
        }
        t--;
        cout << endl;
    }

    return 0;
}