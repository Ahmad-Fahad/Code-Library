#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
        *just like a decreasing sorted array
    */
    cout<<"Priority Queue : "<<endl;

    priority_queue< int > pq;

    pq.push(1000);
    pq.push(500);
    pq.push(100000);
    pq.push(900);
    pq.push(300);

    while( !pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}
