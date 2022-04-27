#include <iostream>
using namespace std;
void binary_search(int A[], int low, int high, int key);
int main()
{
    int key;
    int A[10] = {6, 9, 34, 56, 78, 90, 100, 110, 122, 134};
    cout << "Enter the key element: ";
    cin >> key;
    binary_search(A, 0, 9, key);
    return 0;
}
void binary_search(int A[], int low, int high, int key)
{
        int mid = (low + high) / 2;
        if (key == A[mid])
        {
            cout << "element is found at position: " << mid;
        }
        else if (key > A[mid])
        {
            return binary_search(A, mid + 1, high, key);
        }
        else
        {
            return binary_search(A, low, mid - 1, key);
        }
    if (low > high)
    {
        cout << "Element is not found";
    }
}