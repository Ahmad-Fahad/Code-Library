#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< int > v;
    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );
    v.push_back( 4 );

    for(int i=0; i<v.size(); i++)
        cout << v[i] << endl;

    v[2] = v[3];
    cout<<v[2]<<endl;
    cout<<"Size = "<<v.size()<<endl;

    v.push_back(5);

    for(int i=0; i<v.size(); i++)
        cout << v[i] << endl;

    cout<<"Size = "<<v.size()<<endl;

    return 0;
}

