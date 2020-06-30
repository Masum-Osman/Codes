#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    int firstLetter;

    cin >> input;

    firstLetter = int(input[0]);

    if(firstLetter >= 97 && firstLetter <= 122)
    {
        input[0] = input[0] - 32;
    }

    cout << input;
}
