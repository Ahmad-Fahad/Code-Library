#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,d;
    cin>>a>>b;
    while(a != 0)
    {
        d = a;
        a = b % a;
        b = d;
    }
    cout<<b<<endl;
    return 0;
}
