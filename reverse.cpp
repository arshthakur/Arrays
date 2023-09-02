#include<iostream>
using namespace std;
int main()
{
    int arr[10],i;
    cout<<"enter the elements of an array: "<<endl;
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"the reverse of an array is "<<endl;
    for(i=9;i>=0;i--){
        cout<<arr[i]<<endl;
    }
    return 0;
}