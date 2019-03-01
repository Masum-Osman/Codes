#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector < int > v;

    int n, input;
    cin >> n;

    for(int j = 0; j < n; j++)
    {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	return 0;
}
