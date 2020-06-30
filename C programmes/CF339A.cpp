#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    int sModified[100];
    cin>>s;
    int count = 0;

    s.erase(remove(s.begin(), s.end(), '+'), s.end());

    for(int i = 0; i<s.length(); i++)
    {
        sModified[i]=s[i]-'0';
    }

    sort(sModified, sModified+s.length());

    for(int i = 0; i < s.length(); i++)
    {
        cout<<sModified[i];
	    if(i==s.length()-1){
	        break;
	    }
	    cout<<"+";
    }
}
