#include <bits/stdc++.h>
using namespace std;
#define ln endl
#define FASTIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
int main()
{
    FASTIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr,arr1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
            
        }
        int zero = 0,notZero = 0;
        for(int i=0;i<n;i++){
              if(arr[i]==0) zero++;
              else  notZero++;
        }
        if(zero==0){
            cout<<0<<ln;
            
        }else{
            if(notZero>=zero-1){
              cout<<0<<ln;
            }
            int mx = *max_element(arr.begin(),arr.end());
            if(mx==1){
                cout<<2<<ln;
            }else{
                cout<<1<<ln;
            }
        }

    }
    return 0;
}