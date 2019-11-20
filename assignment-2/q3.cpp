#include <bits/stdc++.h>

using namespace std;

int dfa = 0;

void start(char c)
{
    if(c == '1')
        dfa = 1;
    else dfa = -1;
}

void state1(char c)
{
    if(c == '0')
        dfa = 2;
    else if(c == '1')
        dfa = 1;
    else dfa = -1;
}

void state2(char c)
{
    if(c == '0')
        dfa = 2;
    else if(c == '1')
        dfa = 1;
    else dfa = -1;
}

bool isAccepted(string s)
{
    for(int i=0 ; i<s.length() ; i++)
    {
        switch (dfa)
        {
            case 0:
                cout << "start -> ";
                start(s[i]);
                break;
            case 1:
                cout << "state1 -> ";
                state1(s[i]);
                break;
            case 2:
                cout << "state2 -> ";
                state2(s[i]);
                break;
            default:
                return false;
        }
    }
    return (dfa == 2);
}

int main()
{
    string s;
    cin >> s;
    if(isAccepted(s))
        cout << "Accepted\n";
    else cout << "Not Accepted\n";
    return 0;
}