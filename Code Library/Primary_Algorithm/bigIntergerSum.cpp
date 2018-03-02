#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    string number1, number2;
    while(1) {
        int carry = 0;
        string bigSum, dgt;
        stringstream strm;
        cin>>number1>>number2;
        int length1 = number1.length();
        int length2 = number2.length();
        if(length1 == length2) {
            for(int i=length1-1; i>=0; i--) {
                int digit1 = number1[i] - '0';
                int digit2 = number2[i] - '0';
                int sum = digit1 + digit2 + carry;
                if(sum >= 10) {
                    int r = sum % 10;
                    carry = 1;
                    strm << r;
                    strm >> dgt;
                    bigSum += dgt;
                    strm.clear();
                }
                else {
                    strm << sum;
                    strm >> dgt;
                    bigSum += dgt;
                    carry = 0;
                    strm.clear();
                }
            }
            if(carry == 1) {
                bigSum += '1';
            }
            reverse(bigSum.begin(), bigSum.end());
            cout<<bigSum<<endl;
        }
        else if(length1 > length2){

        }
        else if(length1 > length2) {

        }
    }
    return 0;
}
