#include<iostream>
using namespace std;

bool search(int arr[], int n, int element){
    for(int i=0; i<n;i++){
        if(arr[i]==element){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int i, n, element, arr[50];
    cout << "enter the size of an array : " << endl;
    cin >> n;
    cout << "enter the elements of an array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the element: " << endl;
    cin >> element;

    bool found = search(arr, n, element);

    
     if (found)
        {
        cout << "the element is present in array at index : " <<endl;
        }
 
        else
     {
         cout<<"the element is not present in an array";
         
    }
         
    return 0;
}