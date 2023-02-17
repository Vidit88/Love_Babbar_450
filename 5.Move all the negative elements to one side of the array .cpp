#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the no. of elemenys in the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (i=0;i<n;i++)
    {
        cout<<a[i];
        
    }
}