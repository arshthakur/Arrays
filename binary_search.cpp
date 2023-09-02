#include <iostream>
using namespace std;

class search
{
    int size;
    int element;
    int arr[10];
    int low;
    int mid;
    int high;

public:
    void getvalue()
    {
        cout << "enter the size of array: ";
        cin >> size;
        cout << "enter the elements of array: " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    void binary()
    {
        cout << "enter the element:";
        cin >> element;
        low = 0;
        high = size - 1;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] == element)
            {
                break;
            }

            else if (arr[mid] < element)
            {
                low = mid + 1;
            }
            else if (arr[mid] > element)

            {
                high = mid - 1;
            }
            else
                cout << "element is not found :";
        }

        cout << "the element is at " << mid;
    }
};
int main()
{
    search obj;
    obj.getvalue();
    obj.binary();
    return 0;
}