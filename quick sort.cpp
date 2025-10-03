#include<iostream>
#include<utility>
#include<cstdlib>
#include<ctime>

using namespace std;

void quicksort_recursion(int a[],int low,int high);
void quicksort(int a[],int length);
int Partition(int a[],int low,int high);
int main()
{
    int length;
    cout<<"Enter length : ";
    cin>>length;
    cout<<"Enter element : ";
    int a[length];
    for(int i=0;i<length;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Before sorting : ";
    for(int i=0;i<length;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
    quicksort(a,length);
    cout<<"After  sorting : ";
    for(int i=0;i<length;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
void quicksort(int a[],int length)
{
    quicksort_recursion(a,0,length-1);
}
void quicksort_recursion(int a[],int low,int high)
{
    if(low<high)
    {
        int pivot_value=Partition(a,low,high);
        quicksort_recursion(a,low,pivot_value-1);
        quicksort_recursion(a,pivot_value+1,high);
    }

}
int Partition(int a[],int low,int high)
{
    int pivot_value=a[high];
    int i=low;
    for(int j=low;j<high;j++)
    {
        if(a[j]<=pivot_value)
        {
            swap(a[i],a[j]);
            i++;
        }
    }
        swap(a[i],a[high]);
        return i;

}


