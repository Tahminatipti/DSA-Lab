#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter array element : "<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before deletion : "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    int position;
    cout<<"Enter position : ";
    cin>>position;
    cout<<endl;
    if((position >=n+1)||(position==0))
    {
        cout<<"Deletion is not position "<<endl;
    }

    else
    {
        for(int i=position;i<=n;i++)
        {
            a[i]=a[i+1];
        }
        cout<<"After deletion : "<<endl;
        for(int i=1;i<=n-1;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
