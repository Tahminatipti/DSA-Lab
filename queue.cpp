#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<"print first element : ";
    cout<<q.front()<<endl<<endl;
    cout<<"print last element : ";
    cout<<q.back()<<endl<<endl;
    q.pop();
    cout<<"print first element after pop : ";
    cout<<q.front();
    cout<<endl<<endl;
    cout<<"print all element : "<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}
