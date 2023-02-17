#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Emter the no. of elements in the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        cout<<a[i];
    }
     for(i=0;i<n;i++)
    {
        if(a[i]==1)
        cout<<a[i];
    }
     for(i=0;i<n;i++)
    {
        if(a[i]==2)
        cout<<a[i];
    }
}