#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int x, y, p;
        cin >> x >> y >> p;
        int count1 = 0;
        
        if (x * y >= p)
            cout << count1 << endl;
        else
        {
            while(x*y<p){
                if((x+1)*y>x*(y+1)) x++;
                else y++;
                count1++;
            }
           
            

            cout <<count1<< endl;
        }
    }
    return 0;
}