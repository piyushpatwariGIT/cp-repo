#include <bits/stdc++.h>
using namespace std;

void work() {
	int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    bool flag=1;
    int count=1;
    int max_count=0;
    for(int i=0; i<n-1; i++){
        if(a[i+1]>=a[i] && flag!=0){
            flag=1;
        }
        else if(a[i+1]<a[i] && flag==1){
            flag=0;
            count=2;
        }
        else if(a[i+1]<a[i] && flag==0){
            
            count++;
        }
        else if(a[i+1]>=a[i] && flag==0){
            count=1;
            flag=1;
        }
        max_count=max(max_count,count);

    }
    if(max_count<=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while (T--) work();

	return 0;
}