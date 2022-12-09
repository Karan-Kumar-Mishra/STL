#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
//stl  8 list data structure
int main()
{
    list<int> l;
    list<int> n(5,100);
    cout<<"printing "<<endl;
    for(int i:n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(1);
    l.push_back(2);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after eraseing the data"<<endl;
    cout<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list "<<l.size()<<endl;

    return 0;
}