#include <iostream>

using namespace std;

int dfa = 0;

void start(char s)
{
    if(s == 'a'){
        dfa += 1;
        cout << "state1 -> ";
    } else if(s == 'b'){
        dfa += 2;
        cout << "state2 -> ";
    } else if(s == 'c'){
        dfa += 5;
        cout << "state5 -> "; 
    } else dfa = -1;
}

void state1(char s){
    if (s == 'a')
    {
        dfa += 1;
        cout << "state2 -> ";
    }
    else if (s == 'b')
    {
        dfa += 2;
        cout << "state3 -> ";
    }
    else if (s == 'c')
    {
        dfa += 5;
        cout << "state5 -> ";
    }
    else
        dfa = -1;
}

void state2(char s){
    if (s == 'a')
    {
        dfa += 1;
        cout << "state3 -> ";
    }
    else if (s == 'b')
    {
        dfa += 2;
        cout << "state4 -> ";
    }
    else if (s == 'c')
    {
        dfa += 5;
        cout << "state5 -> ";
    }
    else
        dfa = -1;
}

void state3(char s){
    if (s == 'a')
    {
        dfa += 1;
        cout << "state4 -> ";
    }
    else if (s == 'b')
    {
        dfa += 2;
        cout << "state5 -> ";
    }
    else if (s == 'c')
    {
        dfa += 5;
        cout << "state5 -> ";
    }
    else
        dfa = -1;
}

void state4(char s){
    if (s == 'a')
    {
        dfa += 1;
        cout << "state5 -> ";
    }
    else if (s == 'b')
    {
        dfa += 2;
        cout << "state5 -> ";
    }
    else if (s == 'c')
    {
        dfa += 5;
        cout << "state5 -> ";
    }
    else
        dfa = -1;
}

void state5(char s){
    if (s == 'a')
    {
        dfa += 1;
        cout << "state5 -> ";
    }
    else if (s == 'b')
    {
        dfa += 2;
        cout << "state5 -> ";
    }
    else if (s == 'c')
    {
        dfa += 5;
        cout << "state5 -> ";
    }
    else
        dfa = -1;
}

bool isAccepted(string s)
{
    for(int i=0 ; i<s.length() ; i++)
    {
        if(dfa == 0){
            start(s[i]);
        } else if(dfa == 1)
            state1(s[i]);
        else if(dfa == 2)
            state2(s[i]);
        else if(dfa == 3)
            state3(s[i]);
        else if(dfa == 4)
            state4(s[i]);
        else if(dfa >= 5)
            state5(s[i]);
        else return false;
    }
    return dfa >= 5;
}

int main()
{
    // a -> 5
    // b -> 10
    // c -> 25
    string s;
    cin >> s;
    if(isAccepted(s)) cout << "Accepted\n";
    else cout << "Not Accepted\n";
    return 0;
}