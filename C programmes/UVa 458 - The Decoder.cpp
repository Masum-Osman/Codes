#include<bits/stdc++.h>

using namespace std;

int main ()
{
    string strInput;

    while (getline(cin, strInput)){

        for(int i=0;i<strInput.size();i++)
        {
            int asciivalues = strInput[i];
            char asciiValuesDecoded = asciivalues - 7;

            cout << asciiValuesDecoded ;
        }

        printf("\n");

    }
}
