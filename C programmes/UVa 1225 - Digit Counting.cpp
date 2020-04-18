#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, input;
    int Z= 0, O=0, Tw=0, Th=0, Fo=0, Fi=0, Si=0, Se=0, Ei=0, Ni = 0;

    cin >> T;

    while(T--)
    {
        cin >> input;

        for ( int i = 1; i <input+1; i++)
        {
            if (i == 0) {
              Z++;
            }
            else if (i == 1) {
                O++;
            }
            else if (i == 2) {
                Tw++;
            }

            else if (i == 3) {
                Th++;
            }
            else if (i == 4) {
                Fo++;
            }

            else if (i == 5) {
                Fi++;
            }

            else if (i == 6) {
                Si++;
            }

            else if (i == 7) {
                Se++;
            }

            else if (i == 8) {
                Ei++;
            }

            else {
                Ni++;
            }
        }

        cout << endl;

        cout << Z <<" "<< O <<" "<< Tw <<" "<< Th <<" "<< Fo <<" "<< Fi <<" "<< Si <<" "<< Se <<" "<< Ei <<" "<< Ni << endl;
    }
}

/*
if (i == 0) {
              Z++;
            }
            else if (i == 1) {
                O++;
            }
            else if (i == 2) {
                Tw++;
            }

            else if (i == 3) {
                Th++;
            }
            else if (i == 4) {
                Fo++;
            }

            else if (i == 5) {
                Fi++;
            }

            else if (i == 6) {
                Si++;
            }

            else if (i == 7) {
                Se++;
            }

            else if (i == 8) {
                Ei++;
            }

            else if (i == 9) {
                Ni++;
            }
*/
