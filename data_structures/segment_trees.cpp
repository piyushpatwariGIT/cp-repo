#include<bits/stdc++.h>
using namespace std;
int a[1000005], seg[4*1000005];

void build(int node, int low, int high){
    if(low==high){
        seg[node]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*node+1, low, mid);
    build(2*node+2, mid+1, high);
    seg[node]=max(seg[2*node+1], seg[2*node+2]);
}

int query(int node, int low, int high, int l, int r){
    if(high<l || low>r) return INT_MIN;
    if((low>=l && high<=r)) return seg[node];

    int mid=(low+high)/2;
    int left=query(2*node+1,low,mid,l,r);
    int right=query(2*node+2, mid+1, high, l, r);
    return max(left, right);
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    build(0, 0, n-1);

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<query(0, 0, n-1, l, r)<<endl;
    }
    return 0;

}