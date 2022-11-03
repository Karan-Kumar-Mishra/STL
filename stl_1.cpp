#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    cout<<"capacity=> "<<v1.capacity()<<endl;
    cout<<"size => "<<v1.size()<<endl;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    cout<<endl;
    for(int x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"capacity=> "<<v1.capacity()<<endl;
    cout<<"size => "<<v1.size()<<endl;

    cout<<"element at 2nd index =>"<<v1.at(2)<<endl;
    cout<<"front =>"<<v1.front()<<endl;
    cout<<"back =>"<<v1.back()<<endl;
    cout<<endl;
    cout<<"befor pop "<<endl;
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    v1.pop_back();

    cout<<endl<<"after pop "<<endl;
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;
    cout<<"find 3 => "<<binary_search(v1.begin(),v1.end(),3)<<endl;
    cout<<"lower bound => "<<lower_bound(v1.begin(),v1.end(),3)-v1.begin()<<endl;
    cout<<"upper bound => "<<upper_bound(v1.begin(),v1.end(),4)-v1.begin()<<endl;
    cout<<endl;
    string abcd="abcd";
    cout<<"before reverse => " <<abcd<<endl;
    reverse(abcd.begin(),abcd.end());
    cout<<endl<<"after reverse =>"<<abcd<<endl;
    cout<<"befor rotate =>"<<endl;
    for(int x:v1)
    {
        cout<<x<<" ";
    }
    rotate(v1.begin(),v1.begin()+1,v1.end());
    cout<<endl<<"after rotate =>"<<endl;
    for(int x:v1)
    {
        cout<<x<<" ";
    }

    return 0;
}
