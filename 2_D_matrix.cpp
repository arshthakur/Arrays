#include <iostream>
using namespace std;
int main()
{
    int arr[2][2], i, j;
    cout << "enetr the values in a matrix:" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "the  matrix are:" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}