#include <bits/stdc++.h>

using namespace std;

int dfa = 0;

void start(char c)
{
    if (c == '0')
        {
            dfa = 0;cout<<"state0->";
        }
    else if (c = '1')
       { dfa = 1;cout<<"state1->";}
    else
        dfa = -1;
}

void state1(char c)
{
    if (c == '0')
        {dfa = 0;cout<<"state0->";}
    else if (c == '1')
        {dfa = 2;cout<<"state2->";}
    else
        dfa = -1;
}

void state2(char c)
{
    if (c == '0')
        {dfa = 3;cout<<"state3->";}
    else if (c == '1')
        {dfa = 2;cout<<"state2->";}
    else
        dfa = -1;
}

void state3(char c)
{
    if (c == '0' or c == '1')
        {dfa = 3;cout<<"state3->";}
    else
        dfa = -1;
}

bool isAccepted(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        switch (dfa)
        {
        case 0:
           // cout << "state0 -> ";
            start(s[i]);
            break;
        case 1:
           // cout << "state1 -> ";
            state1(s[i]);
            break;
        case 2:
            //cout << "state2 -> ";
            state2(s[i]);
            break;
        case 3:
            //cout << "state3 -> ";
            state3(s[i]);
            break;
        default:
            cout << "invalid input ->";
            return false;
        }
    }
    return (dfa == 0 || dfa == 1 || dfa == 2);
}

int main()
{
    string s;
    cin >> s;
    cout<<"state0->";
    if (isAccepted(s))
        cout << "Accepted\n";
    else
        cout << "Not Accepted\n";
    return 0;
}