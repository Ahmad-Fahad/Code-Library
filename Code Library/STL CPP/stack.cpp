#include<bits/stdc++.h>
using namespace std;
int main() {
        cout<<"stack "<<endl;
    stack <int> st;
    st.push(100);
    st.push(200);
    st.push(300);

    while( !st.empty() ) {
        cout << st.top() << endl; // printing the top
        st.pop(); // removing that one
    }

    return 0;
}
