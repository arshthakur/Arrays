#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j,k;
    cout<<"enter the values in matrixes: "<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>b[i][j];
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;
        }
    }
    cout<<"the mult of two matrices are: "<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++){
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
          //  cout<<c[i][j]<<" ";
            }
        }
            cout<<endl;
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}