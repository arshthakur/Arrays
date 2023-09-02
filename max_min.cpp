#include<iostream>
using namespace std;

int getmin(int arr[], int n)
{
    int min=INT16_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int getmax(int arr[], int n)
{
    int max=INT16_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[50], n;
    cout<<"enter the number of elements : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the maximum value is "<<getmax(arr, n)<<endl;
    cout<<"the minimum value is "<<getmin(arr, n)<<endl;
    return 0;
}