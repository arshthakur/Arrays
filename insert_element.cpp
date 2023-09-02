#include<iostream>
using namespace std;

class check{
    int i;
    int arr[10];
    int size;
    int index;
    int element;
    public:
    void getvalue();
    void setvalue();
    void display();
    void insert();

};
void check::getvalue(void)
{
    cout<<"enter the size: ";
    cin>>size;
}
void check::setvalue(void){
    cout<<"enter the elements: ";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void check::display(void){
    cout<<"the elements are: "<<endl;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void check::insert(void)
{
    cout<<"enter the index:"<<endl;
    cin>>index;
    cout<<"enter the element: "<<endl;
    cin>>element;
    for(i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
        arr[index]=element;
    }
    size=size+1;
}
int main()
{
    check obj;
    obj.getvalue();
    obj.setvalue();
    obj.display();
    obj.insert();
    obj.display();
    return 0;
}