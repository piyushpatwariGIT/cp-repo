#include <bits/stdc++.h>
using namespace std;

void work() {
	int n, k;
    cin >> n >> k; // k i no of pairs.
    if(n>1 && k==n-1){
        cout<<-1<<'\n';
        return;
    }
    k=n-k; //now k is the no of blocks.
    int c0=(n+1)/2, c1=n/2;

    for(int i=1; i<=k; ++i){
        if(i&1){
            if(i+2 > k){
                while(c0--) cout<<0;
            }
            else{
                c0--;
                cout<<0;
            }
        }
        else{
            if(i+2 > k){    
                while(c1--) cout<<1;
            }
            else{
                c1--;
                cout<<1;
            }
        }
    }
    cout<<'\n';
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while (T--) work();

	return 0;
}

