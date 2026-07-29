#include <bits/stdc++.h>
using namespace std;

void work() {
	int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(n==1){
         cout<<"Yes"<<endl;
         return;
    }
    int maxi=INT_MIN;
    int mini=INT_MAX;
    bool flag=0;
    for(int i=0; i<n/2; i++){
        int diff = abs(a[i] - a[n - 1 - i]);

        if (diff == 0) {
            continue;
        } 
        else if (diff == 2) {
            flag = 1;
            int smaller = min(a[i], a[n - 1 - i]);
            int larger = max(a[i], a[n - 1 - i]);

            maxi = max(maxi, smaller);     
            mini = min(mini, larger - 1);  
        } 
        else {
            cout << "No" << endl;
            return;
        }
    }
    if((flag==0) || maxi<=mini)
    cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return;

}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while (T--) work();

	return 0;
}