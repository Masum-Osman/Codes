#include<bits/stdc++.h>

using namespace std;

int main()
{
	stack <int> s;

    int k, val;
    scanf("%d", &k);

    while (k--) {
        scanf("%d", &val);
        s.push(val);
    }

    while(!s.empty()){
        int value = s.top();

        cout<<value<<endl;
        s.pop();
    }
}
