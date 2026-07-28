#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ind=0;
   
    int size=arr.size();
    while(ind<size-1){
        if(size>1 && (arr[ind]==arr[ind+1])){
            arr.erase(arr.begin()+ind);
            size--;
        }
        else{
            ind++;
        }
    }
    cout<<size<<endl;
    return 0;
}
