#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    bool flag=0;
    for(int i=0; i<n-1; i++){
        int mini=i;
        for(int j=i+1; j<i+k+1; j++){
            if(j>n-1) break;
            if((mini!=i && arr[mini]>=arr[j]) || (arr[mini]>arr[j])){
                mini=j;
                flag=1;
            }  
        }
        if(flag==1){
            swap(arr[mini],arr[i]);
            break;
        }
}
for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}