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
     while (t--) {
         int n,k;
         cin >> n >> k;
         for(int i=1;i<=k;i++){
             cout<<i<<" ";
         }
         for(int i=n;i>k;i--){
             cout<<i<<" ";
         }
         cout<<ln;
 
    }
    return 0;
}