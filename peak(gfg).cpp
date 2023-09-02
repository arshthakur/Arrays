#include<iostream>
using namespace std;

class solution{
    int arr[10],n;
    public:
    class Solution
{
    public:
    int setdata(){
       cout<<"enter the elements of an array:";
       cin>>n;
       cout<<"the elements of array are:"<<endl;
       for(int i=0;i<=n;i++)
       {
           cin>>arr[i];
       }
    }
    int peakElement(int arr[], int n)
    {
        int peak=arr[0];
       for(int i=1;i<=n;i++){
           if(peak<arr[i])
           {
               peak=arr[i];
           }
         
       }
    }
       int display(){
       cout<<"the peak element is "<<peak;
    }
};
int main()
{
    solution p;
    p.peakElement();
    p.display();
    return 0;
}
}
