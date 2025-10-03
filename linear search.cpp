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
    cout<<"Array : ";
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int value,position;
    cout<<"Enter value : ";
    cin>>value;
    for(int i=1;i<=n;i++)
    {

            if(a[i]==value)

            {position=i;
            break;}

        }
        if(position<=0)
            cout<<"Item is not found "<<endl;
        else
            cout<<"Item is found in position : "<<position<<endl;

}
