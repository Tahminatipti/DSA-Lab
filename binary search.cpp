#include<iostream>

using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"enter element : "<<endl;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array print : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout <<endl;
     int temp;
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             if(a[i]>a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }

     }
    cout<<"Array print after sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int item;
    cout<<"Enter search item : ";
    cin>>item;
    int b=0;
    int e=n-1;

    while(b<=e)
    {
        int m=(b+e)/2;
        if(a[m]==item)
        {
            cout<<"Item found at index : "<<m+1<<endl;
            return 0;
        }
        else if(item<a[m])
        {
            e=m-1;
        }
        else
        {
            b=m+1;
        }
    }

   cout<<"Item is not found "<<endl;
   return 0;


}
