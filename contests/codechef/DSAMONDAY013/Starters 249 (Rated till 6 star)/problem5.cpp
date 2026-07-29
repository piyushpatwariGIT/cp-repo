// #include <bits/stdc++.h>
// using namespace std;

// void work() {
// 	int n;
//     cin>>n;
//     vector<int> a(n);
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }

//     bool flag=1;
//     unordered_set<int> st;
//     while(flag){
//         int mini=0;
//         flag=0;
//         for(int i=1; i<n-1; i++){
//             int prev=a[i-1];
//             int curr=a[i];
//             int next=a[i+1];

//             if(st.find(i)==st.end() && curr<prev && curr<next){
//                 if(mini==0) mini=i;
//                 else
//                 mini=max(a[mini],curr);
//                 flag=1;
//             }
//         }
//         if(flag==1){
//         a[mini+1]=a[mini];
//         a[mini-1]=a[mini];
//         st.insert(mini);
//         }
//     }
//     int sum=0;
//     for(int i=0; i<n; i++){
//         sum+=a[i];
//     }
//     cout<<sum<<endl;
//     return;
// }

// int main() {
// 	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// 	int T; cin >> T;
// 	while (T--) work();

// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void work()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag = 0;
    
    map<int, int> mpp;

    for (int i = 1; i < n - 1; i++)
    {
        int prev = a[i - 1];
        int curr = a[i];
        int next = a[i + 1];

        if (curr < prev && curr < next)
        {
            mpp[curr] = i;
            flag=1;
        }
    }

    for (auto it = mpp.rbegin(); it != mpp.rend(); it++)
    {
        if (flag == 0)
            break;
        else
        {
            int index = it->second;
            a[index - 1] = a[index];
            a[index + 1] = a[index];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
        work();

    return 0;
}