#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase = 10;
    while(TestCase--)
    {
    long long int decimal = 0,binary = 0,reminder = 0,pointer = 1;
    cin>>decimal;
    while(decimal != 0)
    {
        reminder = decimal % 2;
        decimal  = decimal / 2;
        binary   = binary + (reminder * pointer);
        pointer  = pointer * 10;
    }
    cout<<binary<<endl;
    }
    return 0;
}
