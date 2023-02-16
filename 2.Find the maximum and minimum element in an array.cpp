#include<iostream>
using namespace std;

int max(int n, int a[100])
{
    int i,max=0;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<"Maximum Element in the array is"<<endl<<max<<endl;
    return 0;
}
int min(int n , int a[100])
{
   int i,max=0;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    int min=max;
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<"Minimum element in the array is"<<endl<<min<<endl;
    return 0;
}

int main()
{
    int n,m;
    cout<<"Enter the No. of elements in the array"<<endl;
    cin>>n;
    int a[n],i;
    cout<<"Enter the elements in the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max(n,a);
    min(n,a);
}