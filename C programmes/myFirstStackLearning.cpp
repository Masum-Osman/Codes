#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack <int> s;

    int k,l,m;

    scanf("%d%d%d", &k,&l,&m);

    s.push(k);
    s.push(l);
    s.push(m);

    while(!s.empty()){
        int value = s.top();

        cout<<value<<endl;
        s.pop();
    }
}
