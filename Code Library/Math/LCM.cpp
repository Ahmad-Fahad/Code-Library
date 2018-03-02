#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,d,number1,number2;
    cin>>a>>b;
    number1 = a;
    number2 = b;
    while(a != 0)
    {
        d = a;
        a = b % a;
        b = d;
    }

    long long int lcm = (number1 * number2) / b;
    cout<<lcm<<endl;
    return 0;
}

