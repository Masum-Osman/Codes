#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack <int> s;

    int k;

    for(int i = 0; i < 5; i++){
        scanf("%d", &k);
        s.push(k);
    }


    while(!s.empty()){
        int value = s.top();

        cout<<value<<endl;
        s.pop();
    }
}
