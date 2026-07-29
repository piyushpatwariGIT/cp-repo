#include <bits/stdc++.h>
using namespace std;

void work() {
	int n;
    cin>>n;
    int digit1=n%10;
    n=n/10;
    int digit2=n%10;
    if(digit1!=digit2)
    cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	work();

	return 0;
}