#include<iostream>
using namespace std;
void selection_sort(int a[],int length);
int main()
{
    int length;
    cout<<"Enter array size : ";
    cin>>length;
    cout<<"Enter array element : ";
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
    selection_sort(a,length);
    cout<<"after sorting : ";
    for(int i=0;i<length;i++)
    {
        cout<<a[i]<<" ";
    }


}
void selection_sort(int a[],int length)
{
    for(int i=0;i<length-1;i++)
    {
         int min_pos=i;
       for(int j=i+1;j<length;j++)
      {
        if(a[j]<a[min_pos])
        {
            min_pos=j;
        }
      }



    if(min_pos!=i)
    {
        int temp;
        temp=a[i];
        a[i]=a[min_pos];
        a[min_pos]=temp;
    }

    }

}




