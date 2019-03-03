#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,N,K,inVal, result;

    cin >> T;

    while(T--){
        cin >> N;
        cin >> K;

        int arr[N];

        for (int i = 0; i < N; i++){
            cin >> arr[i];
        }

        inVal = arr[K-1];

        sort(arr, arr + N);

        for (int i = 0; i < N; i++){
            {
                if (inVal == arr[i]){
                    result = i+1;
                    break;
                }
            }
        }

        cout << result;

    }
}
