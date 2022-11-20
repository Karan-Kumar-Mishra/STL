#include<iostream>
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
    s.insert(60);
    s.insert(70);
    s.insert(80);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl; 
    cout<<"-5 is present or not ->"<<s.count(-5)<<endl;
    set<int>::iterator itr=s.find(-5);
   
    
     cout<<"begin element ->"<<*(s.begin())<<endl;
     cout<<"end element ->"<<*(s.end())<<endl;
        return 0;
}