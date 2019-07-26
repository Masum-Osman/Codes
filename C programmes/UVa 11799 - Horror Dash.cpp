#include<bits/stdc++.h>

using namespace std;
int main()
{

    int T;
    int N;
    int temp;

    cin >> T;

    for (int j = 1; j <= T; j++) {

        cin >> N;
        int time = 0;

        for(int i = 0; i < N; i++)
        {
            cin >> temp;

            if(temp > time)
            {
                time = temp;
            }
        }

        cout << "Case " << j <<": " << time <<endl;
        //cout << "Case " << i + 1 << ": " << result << endl;
    }

}

/*
    vector<int> g;
    int T;
    int input;

    cin >> T;

    while(T--) {
        int size;
        cin >> T;

        for (int i = 0;i < size ;i++){
        cin >> input;
        g.push_back(input);
    }

    sort(g.begin(), g.end());

    cout << g.back() << endl;
    }





    /*for (int i = 0; i < 5; i++) {
		cout << g[i] << " ";
	}*/



    /*
    int arr[5];

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }


    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);

    cout << "Array after sorting : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    int l = arr[n - 1];

    cout << "\n" ;

    cout << l << "";

    return 0;
    */

