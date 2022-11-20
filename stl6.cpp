#include<iostream>
#include<queue>
using namespace std;
//stl6
int main()
{
    queue<string> q;
    q.push("karan");
    q.push("kumar");
    q.push("mishar");
    cout<<"size before pop "<<q.size()<<endl;
    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"after pop first element "<<q.size()<<endl;
    cout<<"size "<<q.size()<<endl;


    return 0;
}