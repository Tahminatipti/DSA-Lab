#include<iostream>
using namespace std;
void insertion_sort(int a[],int length);
int main()
{
    int length;
    cout<<"Enter size of array : ";
    cin>>length;
    int a[length];
    for(int i=0;i<length;i++)
    {
        cin>>a[i];
    }
    cout<<"Before sorting : ";
    for(int i=0;i<length;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    insertion_sort(a,length);

    cout<<"After sorting : ";
    for(int i=0;i<length;i++)
    {
        cout<<a[i]<<" ";
    }


}
void insertion_sort(int a[],int length)
 {
    for(int i=1;i<length;i++)
    {
        int key=a[i];
       int j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
 }




