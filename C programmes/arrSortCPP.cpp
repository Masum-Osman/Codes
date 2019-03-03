#include<bits/stdc++.h>

using namespace std;
int main()
{
    int N;
    cin >> N;

    int intArray[N];

    for (int i = 1; i <= N; i++){
            cin >> intArray[i];
        }

    sort(intArray, intArray + N);

    cout << "Sorted Array looks like this." << endl;
    for (int i = 0; i < N; i++)
        cout << intArray[i] << " ";

    return 0;
}
