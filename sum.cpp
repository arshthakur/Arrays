#include<iostream>
using namespace std;
 int main()
{
int arr[10],n;
int sum=0;
cout<<"enter the number of elements";
cin>>n;
for(int i=0; i<n;i++){
    cin>>arr[i];
    sum=sum+arr[i];
}
cout<<"sum:"<<sum;
return 0;
}
