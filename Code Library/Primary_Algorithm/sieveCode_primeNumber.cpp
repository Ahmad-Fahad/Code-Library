#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int number = 0;

    cout<<"Enter the Range number : "<<endl;

    cin>>number;

    cout<<"Prime Numbers are : "<<endl;

    int mark[number];

    for(int i=0; i<number; i++)
    {
        mark[i] = 0;
    }

    /*
    * omitting even values [not always necessary]
    *
    */
    for(int i=4; i<=number; i += 2)
    {
        mark[i] = 1;
    }

    long long int prime[number], limit = sqrt(number) + 1;

    int k = 1;

    prime[0] = 2;

    /*
    * check only odd numbers
    * cut the multiple of it
    *
    *
    */

    for(int i=3; i<=number; i += 2)
    {
        if(!mark[i])
        {
            prime[k] = i;

            k++;
        }
        if(i <= limit)
        {
            for(int j=i*i; j<=number; j += 2*i)
            {
                mark[j] = 1;
            }
        }
    }

    for(int i=0; i<k; i++)
    {
        cout<<prime[i]<<endl;
    }

    return 0;

}
