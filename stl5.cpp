#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> max1;
    priority_queue<int,vector<int>,greater<int>> min;
    max1.push(10);
    max1.push(20);
    max1.push(30);
    max1.push(40);
    max1.push(50);
    max1.push(60);
    max1.push(70);
    cout<<"size ->"<<max1.size()<<endl;
    for(int i=0; i<max1.size(); i++)
    {
        cout<<max1.top()<<" ";
        max1.pop();
    }
    cout<<endl;
    min.push(1);
    min.push(2);
    min.push(3);
    min.push(4);
    min.push(5);
    for(int i=0; i<min.size(); i++)
    {
        cout<<min.top()<<" ";
        min.pop();
    }
    cout<<"is empty ->"<<min.empty()<<endl;
    return 0;
}