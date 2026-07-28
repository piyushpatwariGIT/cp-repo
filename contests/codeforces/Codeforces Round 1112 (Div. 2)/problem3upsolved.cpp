#include <bits/stdc++.h>
using namespace std;

void work() {
	int n;
    cin>>n;
    vector<vector<int>> cond;
    for(int i=0; i<n; i++){
        vector<int> temp(4);
        cin>>temp[0]>>temp[1]>>temp[2]>>temp[3];
        cond.push_back(temp);
    }
    int m=n;
    while(m>0){
        int curr_value=1;
        int length=1;
        while(curr_value<=n && length<=m && (n-curr_value+1)>=m-length+1){
            int leftrank=length;
            int rightrank=m-length+1;
            int li=cond[curr_value-1][0];
            int ri=cond[curr_value-1][1];
            int ui=cond[curr_value-1][2];
            int vi=cond[curr_value-1][3];
            if((leftrank<li || leftrank>ri) && (rightrank<ui || rightrank>vi)){
                length++;
                curr_value++;
            }
            else{
                curr_value++;
            }
        }
        
        if(length-1==m) break;
        m--;
    }
    cout<<m<<'\n';
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while (T--) work();

	return 0;
}