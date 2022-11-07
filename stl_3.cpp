#include<iostream>
#include<stdio.h>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<endl<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<"-10 is erase or not "<<s.count(-10)<<endl;
    set<int>::iterator itr=s.find(50);
    for(auto it=itr; it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}