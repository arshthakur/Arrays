#include<iostream>
using namespace std;
void swapAlt(int arr[], int size){
    for(int i=0; i<size;i+=2){
        if(i+1<size){
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            // swap(arr[i],arr[i+1]);
        }
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int even[8]={5,6,3,2,7,9,0,1};
    int odd[5]={1,4,6,3,7};

    swapAlt(even,8);
    printarray(even,8);
    swapAlt(odd,5);
    printarray(odd,5);
    return 0;
}