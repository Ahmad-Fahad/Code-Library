#include<bits/stdc++.h>
using namespace std;

int main()
{
    string decimal;

    cin>>decimal;

    int length = decimal.length();

    string hex;

    for(int i=0; i<length; i++)
    {
        int dec = (int)decimal[i] - 48;

        int reminder = dec % 16;

        switch(reminder)
        {
        case 10:
            hex[i] = 'A';
            break;
        case 11:
            hex[i] = 'B';
            break;
        case 12:
            hex[i] = 'C';
            break;
        case 13:
            hex[i] = 'D';
            break;
        case 14:
            hex[i] = 'E';
            break;
        case 15:
            hex[i] = 'F';
            break;
        default:
            hex[i] = (char)reminder + '0';
            break;

        }
    }

    for(int i=0; i<length; i++)
    {
        cout<<hex[i];
    }
    cout<<endl;

    return 0;
}
