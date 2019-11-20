#include <bits/stdc++.h>

using namespace std;

int dfa = 0;

void state0(char c)
{
    if(c == 'a')
    {
        cout << "state1->";
        dfa = 1;
    }
    else if (c == 'b')
    {
        cout << "state4->";
        dfa = 4;
    }
    else {
        cout << "invalid input\n";
        dfa = -1;
    }
}

void state1(char c)
{
    if(c == 'a')
    {
        cout << " state1-> ";
        dfa = 1;
    }
    else if(c == 'b')
    {
        cout << " state2-> ";
        dfa = 2;
    }
    else{
        cout << "invalid input\n";
        dfa = 1;
    }
}

void state2(char c)
{
    if(c == 'a')
    {
        cout << " state1-> ";
        dfa = 1;
    }
    else if(c == 'b')
    {
        cout << " state2-> ";
        dfa = 2;
    }
    else{
        cout << "invalid input\n";
        dfa = 1;
    }
}

void state3(char c)
{
    if(c == 'b')
    {
        cout << " state3-> ";
        dfa = 3;
    }
    else if(c == 'a')
    {
        cout << " state4> ";
        dfa = 4;
    }
    else{
        cout << "invalid input\n";
        dfa = 1;
    }
}

void state4(char c)
{
    if(c == 'b')
    {
        cout << " state3-> ";
        dfa = 3;
    }
    else if(c == 'a')
    {
        cout << " state4-> ";
        dfa = 4;
    }
    else{
        cout << "invalid input\n";
        dfa = 1;
    }
}

bool isAccepted(string s)
{
    cout << "state0-> ";
    for(int i=0 ; s[i]!='\0' ; i++)
    {
        if(dfa == 0) state0(s[i]);
        else if(dfa == 1) state1(s[i]);
        else if(dfa == 2) state2(s[i]);
        else if(dfa == 3) state3(s[i]);
        else if(dfa == 4) state4(s[i]);
        else if(dfa == -1) return false;
    }
    if(dfa == 2 or dfa == 4)
        return true;
    return false;
}

int main()
{
    string s;
    cin >> s;
    if(isAccepted(s))
        cout << "\nyes\n";
    else cout << "no\n";
    return 0;
}