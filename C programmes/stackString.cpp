#include<bits/stdc++.h>

using namespace std;

int main()
{
    std::stack<std::string> s;
    string k;

    s.push("M");
    s.push("a");
    s.push("s");
    s.push("u");
    s.push("m");

    for(int i = 0; i < 5; i++){

    }

    while(!s.empty()){
        string value = s.top();

        cout<<value<<endl;
        s.pop();
    }
}
