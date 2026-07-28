#include<bits/stdc++.h>
using namespace std;
string const1(int n, int k){
    string s(n, '0');
    for(int i=(k/2)+1; i<k/2+1+(k-k/2)+1; i++){
        s[i]='1';
    }
    for(int i=k/2+1+(k-k/2)+2; i<n; i=i+2){
        s[i]='1';
    }
    return s;
}

string const2(int n, int k){
    string s(n, '0');
    for(int i=1; i<k/2+2; i++){
        s[i]='1';
    }
    for(int i=k/2+3; i<n; i=i+2){
        s[i]='1';
    }
    return s;
}

int main(){
    int t;
    cin>>t;
    for(int m=0; m<t; m++){
        int n,k;
        cin>>n>>k;
        string s1=const1(n,k);
        int sum=0;
        if(n-k==1){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0; i<n; i++){
            sum+=s1[i]-'0';
        }
        if((n%2==0 && sum==n/2) || (n%2!=0 && (sum==n/2) || sum==n/2+1)){
            cout<<s1<<endl;
            continue;
        }
        string s2=const2(n,k);
        sum=0;
        for(int i=0; i<n; i++){
            sum+=s2[i]-'0';
        }
        if((n%2==0 && sum==n/2) || (n%2!=0 && (sum==n/2+1) || sum==n/2)){
            cout<<s2<<endl;
            continue;
        }
        cout<<-1<<endl;
    }
    return 0;
}