#include<iostream>
using namespace std;

class check{
    int i;
    int arr[10];
    int size;
    int index;
    public:
    void getvalue();
    void setvalue();
    void display();
    void del();

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
void check::del(void)
{
    cout<<"enter the index:"<<endl;
    cin>>index;
    for(i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size=size-1;
}
int main()
{
    check obj;
    obj.getvalue();
    obj.setvalue();
    obj.display();
    obj.del();
    obj.display();
    return 0;
}