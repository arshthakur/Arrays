#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,f=0;
    cout<<"enter the elements: "<<endl;
    for(int i=0;i<5;i++)
    {
    cin>>arr[i];
    }
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=0;i<5;i++){
        if(arr[i]==n){
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"element is found"<<endl;
    }
    else
    {
        cout<<"element is not found";
    }
    return 0;
}