#include<bits/stdc++.h>

using namespace std;
int main()
{
    int N;

    cin >> N;

    int arr[N];

    for (int i = 0; i<N; i++) cin >> arr[i];

    int mn;

    for(int i = 0; i<N; i++){
        int minIdx = i;
        int minVal = arr[i];

        for(int j = i+1; j<N; j++){
                if(arr[j] < minVal){
                       minVal = arr[j];
                       minIdx = j;
                }
        }

        swap(arr[i], arr[minIdx]);
    }

    for(int i = 0; i<N; i++){
            cout << arr[i] <<" ";
        }
}
