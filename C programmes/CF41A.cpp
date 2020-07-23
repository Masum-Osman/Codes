#include<bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string original, translated, data;

    cin >> original;
    cin >> translated;

    reverse(original.begin(), original.end());

    if(translated == original)
    {
        cout << "YES";
    }
    else
    {
         cout << "NO";
    }
}
