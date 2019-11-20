#include <bits/stdc++.h>

using namespace std;

int dfa = 0;

void start(char c)
{
    if(c == 'a')
    {
        cout << " state1-> ";
        dfa = 1;
    }
    else if (c == 'b')
    {
        dfa = 0;
        cout << " state0-> ";
    }
    else dfa = -1; // invalid
}

void state1(char c)
{
    if(c == 'a')
    {
        cout <<" state1-> ";
        dfa = 1;
    }
    else if (c == 'b')
    {
        cout << " state2-> ";
        dfa = 2;
    }
    else dfa = -1;
}

void state2(char c)
{
    if(c == 'a' or 'b')
    {
        cout << " state2-> ";
        dfa = 2;
    }
    else{
        dfa = -1;
        cout << "\ninvalid input\n";
    }
}

bool isAccepted(string s)
{
    cout << "state0-> ";
    for(int i=0 ; s[i]!='\0' ; i++)
    {
        if(dfa == 0) start(s[i]);
        else if (dfa == 1) state1(s[i]);
        else if (dfa == 2) state2(s[i]);
        else {cout << "Invalid input\n"; return false;}
    }
    if(dfa == 2) return true;
    return false;
}

int main()
{
    string s;
    cin >> s;
    if(isAccepted(s))
        cout << "yes\n";
    else cout << "no\n";
    return 0;
}