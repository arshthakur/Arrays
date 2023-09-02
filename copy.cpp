#include <iostream>
using namespace std;
int main()
{
    int original[10], duplicate[10], i;
    cout << "enter the elements of an array :";
    for (i = 1; i <= 5; i++)
    {
        cin >> original[i];
    }
    for(i=1;i<=5;i++)
{
    duplicate[i] = original[i];
}
    cout << "the array is " << endl;
    for (i = 1; i <= 5; i++)
    {
        cout << duplicate[i] << endl;
    }
    return 0;
}
