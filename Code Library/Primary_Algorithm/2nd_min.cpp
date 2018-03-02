#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;

    int value = 0;

    for(int i=0; i<5; i++)
    {
        scanf("%d",&value);

        v.push_back(value);
    }

    int min = v[0];

    int length = v.size();

    int last_min = 100000;


    for(int i=0; i<length; i++)
    {
        if(min > v[i])
        {
            last_min = min;

            min = v[i];
        }
        else if(last_min > v[i] && v[i] != min)
        {
            last_min = v[i];

        }
    }
    cout<<min<<endl<<last_min<<endl;


    return 0;
}
