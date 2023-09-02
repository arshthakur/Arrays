#include<iostream>
using namespace std;
 int main()
{
int arr[10],n;
int sum1=0;
int sum2=0;
cout<<"enter the number of elements";
cin>>n;
for(int i=0; i<n;i++){
    cin>>arr[i];
}
for(int i=0; i<n;i++){
    if(arr[i]%2==0){
      sum1=sum1+arr[i];
    }

    else if(arr[i]%2==1){
      sum2=sum2+arr[i];
    }
    
}
    cout<<"sum of even is "<<sum1<<endl;
    cout<<"sum of odd is "<<sum2<<endl;    

return 0;
}