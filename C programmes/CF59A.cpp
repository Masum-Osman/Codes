#include<bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string text;
    int ascii, sLCount = 0, cLCount = 0;

    cin >> text;

    for(int i = 0; i < text.length(); i++)
    {
        ascii = int(text[i]);

        if(ascii >= 97 && ascii <= 122)
        {
            sLCount++;
        }
        else if(ascii >= 65 && ascii <= 90)
        {
            cLCount++;
        }
    }

    if(cLCount == sLCount || cLCount < sLCount)
    {
        for(int i = 0; i < text.length(); i++)
        {
            text[i] = tolower(text[i]);
        }
        cout << text;
    }
    else
    {
        for(int i = 0; i < text.length(); i++)
        {
            text[i] = toupper(text[i]);
        }
        cout << text;
    }
}
