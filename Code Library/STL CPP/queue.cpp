#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Queue : "<<endl;

    queue<int> q;

    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);
    q.push(500);

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}
