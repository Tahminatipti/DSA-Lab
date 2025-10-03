#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter element : "<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before sorting : "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<< " ";
    }
    cout<<endl;
    int temp;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]<a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    cout<<"After sorting : "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}
