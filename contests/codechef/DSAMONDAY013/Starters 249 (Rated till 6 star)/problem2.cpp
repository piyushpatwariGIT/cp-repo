#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    for(int k=0; k<T; k++){
        int x,y,z;
        cin>>x>>y>>z;
        int newcoin=0;
        int newvalue=x;
        int month=0;
        if(x!=0 && y>=z){
            cout<<-1<<endl;
        }
        else{
            while(newvalue>newcoin){
                month++;
                newcoin+=z;
                newvalue+=y;
                
            }
             cout<<month<<endl;
        }
       
    }
    return 0;
}