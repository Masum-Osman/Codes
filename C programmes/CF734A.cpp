#include<bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int countA = 0, countD = 0, n;

    cin >> n;
    string text;

    cin >> text;

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == 'A')
            countA++;
        if(text[i] == 'D')
            countD++;
    }

    if(countA > countD)
        cout << "Anton";
    if(countA < countD)
        cout << "Danik";
    if(countA == countD)
        cout << "Friendship";
}
