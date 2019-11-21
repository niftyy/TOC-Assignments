#include <bits/stdc++.h>

using namespace std;

int dfa = 0;

void state0(char c)
{
    if (c == '1')
    {
        cout << "state0->";
        dfa = 0;
    }
    else if (c == '0')
    {
        cout << "state1->";
        dfa = 1;
    }
    else
    {
        cout << "invalid input\n";
        dfa = -1;
    }
}

void state1(char c)
{
    if (c == '0')
    {
        cout << " state1-> ";
        dfa = 1;
    }
    else if (c == '1')
    {
        cout << " state2-> ";
        dfa = 2;
    }
    else
    {
        cout << "invalid input\n";
        dfa = -1;
    }
}

void state2(char c)
{
    if (c == '0')
    {
        cout << " state1-> ";
        dfa = 1;
    }
    else if (c == '1')
    {
        cout << " state0-> ";
        dfa = 0;
    }
    else
    {
        cout << "invalid input\n";
        dfa = -1;
    }
}

bool isAccepted(string s)
{
    cout << "state0-> ";
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (dfa == 0)
            state0(s[i]);
        else if (dfa == 1)
            state1(s[i]);
        else if (dfa == 2)
            state2(s[i]);
        else if (dfa == -1)
            return false;
    }
    if (dfa == 2)
    {
       // cout << "Accepted\n";
        return true;
    }
    return false;
}

int main()
{
    string s;
    cin >> s;
    if (isAccepted(s))
        cout << "Accepted\n";
    else
        cout << "Not Accepted\n";
    return 0;
}