#include <bits/stdc++.h>

using namespace std;

int dfa = 0;

void start(char c)
{
	if (c=='a' or c=='b')
	{
		dfa = 1;
		cout << " state1 -> ";
	}
	else dfa = -1;
}

void state1(char c)
{
	if(c=='a' or c=='b')
	{
		cout << " state0 -> ";
		dfa = 0;
	}
	else dfa = -1;
}

bool isAccepted(string s)
{	
	cout << " state0 -> ";
	for(int i=0 ; s[i]!='\0' ; i++)
	{
		if(dfa == 0)
			start(s[i]);
		else if(dfa==1)
			state1(s[i]);
		else if(dfa == -1){
			cout << "Invalid input\n";
			return false;
			break;
		}
	}
	if(dfa == 0)
		return true;
	return false;
}

int main()
{
	string s;
	cin >> s;
	if(isAccepted(s))
		cout << " yes\n";
	else cout << " no\n";
	return 0;
}
