#include<bits/stdc++.h>

using namespace std;
int main()
{
    string language;
    int count = 0;

    do
    {
        getline (cin, language);

         if(language == "HELLO"){
            count++;
            cout << "Case " << count << ": ENGLISH" << endl;
         }

         else if(language == "HOLA") {
            count++;
            cout << "Case " << count << ": SPANISH" << endl;
         }

        else if(language == "HALLO"){
            count++;
            cout << "Case " << count << ": GERMAN" << endl;
        }

        else if(language == "BONJOUR") {
            count++;
            cout << "Case " << count << ": FRENCH" << endl;
        }

        else if(language == "CIAO") {
            count++;
            cout << "Case " << count << ": ITALIAN" << endl;
        }

        else if(language == "ZDRAVSTVUJTE") {
            count++;
            cout << "Case " << count << ": RUSSIAN" << endl;
        }

        else if(language == "#")
        break;

        else{
            count++;
            cout << "Case " << count << ": UNKNOWN" << endl;
        }

    } while(language!="#");


}
