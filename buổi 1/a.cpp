#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	int a[n];
    	for (int i = 0; i < n; i++) {
    		cin >> a[i];
		}
		int d = -1;
		for (int i = 0; i < n; i++) {
			int max = a[i];
			for (int j = i + 1; j < n; j++) {
				if(max < a[j]) max = a[j];
			}
			if(d < (max - a[i]) && (max - a[i]) != 0) d = max - a[i];
		}
		cout << d << endl;
	}
    return 0;
}
