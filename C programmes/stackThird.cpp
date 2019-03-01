#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack <int> s;

    int k;

    for(int i = 0; i < 1; i++){
        scanf("%d", &k);
        s.push(k);
    }


        if(s.top() == 70){
            s.pop();
        }

        if(s.empty()){
            cout<<"Empty"<<endl;
        }

    while(!s.empty()){
        int value = s.top();

        cout<<value<<endl;
        s.pop();
    }
}
