#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
//stl2  map
int main()
{
    map<int,string> m;
    m[1]="karan";
    m[13]="kumar";
    m[5]="mishar";
    m.insert({5,"zack"});
    cout<<"before erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13 ->"<<m.count(13)<<endl;
    m.erase(13);
    cout<<"after erase 13 "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=m.find(5);
    for(auto i=it; i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }

    return 0;
}