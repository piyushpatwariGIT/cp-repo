#include<bits/stdc++.h>
using namespace std;
int main(){
    int X,Y;
    cin>>X>>Y;
    if(X<=Y)
        cout<<"UNLOCKED"<<endl;
    else
    cout<<X-Y<<endl;
}