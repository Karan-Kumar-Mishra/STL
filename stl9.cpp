#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
//stl  9 deque data structure
int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    d.push_back(50);
    cout<<"first element =>"<<d.at(0)<<endl;
    cout<<"front element =>"<<d.front()<<endl;
    cout<<"back element =>"<<d.back()<<endl;
    cout<<"is empty ->"<<d.empty()<<endl;
    cout<<"size -> "<<d.size()<<endl;
    cout<<"before erase element "<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.erase(d.begin(),d.begin()+d.size());

    cout<<"after erase all element "<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}