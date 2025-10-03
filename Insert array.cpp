#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter element : "<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before insert : "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    int position,value;
    cout<<"Enter position : ";
    cin>>position;
    cout<<"Enter value : ";
    cin>>value;
    cout<<endl;
    if(position<=0)
        cout<<"Insertion is not possible"<<endl;
    else
    {
    for(int i=n;i>=position;i--)
    {
        a[i+1]=a[i];
    }
    a[position]=value;

    cout<<"After insertion : "<<endl;
    for(int i=1;i<=n+1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
