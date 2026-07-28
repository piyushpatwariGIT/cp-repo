#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        int mini=INT_MAX;
        for(int i=0; i<n; i=i+2){
            mini=min(mini,a[i]);
        }
        int maxi=INT_MIN;
        for(int i=1; i<n; i=i+2){
            maxi=max(maxi,a[i]);
        }
        if(mini-maxi>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}