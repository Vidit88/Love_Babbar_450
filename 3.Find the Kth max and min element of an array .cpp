#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cout<<"Enter the no. of elements in the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    cout<<"The value of "<<k<<" smallest element in the array is"<<a[k-1];
}