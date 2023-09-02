#include <iostream>
using namespace std;
int main()
{
    int size, element, arr[10], low, mid, high;
    cout << "enter the size of array";
    cin >> size;
    cout << "enter the elements into an array:  " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "the element to search:" << endl;
    cin >> element;
    low=0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            cout << "the element found at " << mid;
            exit(0);
        }
        else if (arr[mid]<element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "no. is not found " << endl;
    return 0;
}