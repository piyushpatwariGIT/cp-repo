#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> p(n);
    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(v.begin(), v.end());
    sort(p.begin(), p.end());
    bool flag=1;
    for(int i=0; i<n; i++){
        if(v[i]<=p[i]){
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
