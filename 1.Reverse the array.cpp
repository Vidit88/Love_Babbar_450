#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the No. of elements in the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the Elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The Reverser array is"<<endl;
    for(i=n-1;i!=-1;i--)
    {
        cout<<a[i]<<endl;
    }
}