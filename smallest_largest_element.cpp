#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,small,large;
cout<<"enter the elements in the array";
for(i=0;i<5;i++)
{
    cin>>arr[i];
}
small=arr[0];
large=arr[0];
for(i=0;i<5;i++){
    if(small>arr[i])
    small=arr[i];
}
for(i=0;i<5;i++){
    if(large<arr[i])
large=arr[i];
}
cout<<"the largest value is "<<large<<endl;
cout<<"the smallest value is "<<small<<endl;
return 0;
}