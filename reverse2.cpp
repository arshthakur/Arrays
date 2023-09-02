#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int even[6]={1,5,6,3,4,8};
    int odd[5]={5,6,4,3,8};

    reverse(even,6);
    printarray(even,6);

    reverse(odd,5);
    printarray(odd,5);
    
    return 0;
}