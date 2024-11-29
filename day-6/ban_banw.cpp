#include <bits/stdc++.h>
using namespace std;
#define ln endl
#define FASTIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
void solve(vector<int> arr)
{
    for(auto &x : arr){
        cout<<x<<" ";
    }
}
int main()
{
    FASTIO;
    int t;
    cin >> t;
    while (t--)
    {
         int n;
         cin >> n;

         if(n==1){
            cout<<1 <<ln;
            cout<<2<<" "<<3<<ln;
         }            
         else{
            int v = 1;
            int k = n*3; 
             
            if(n%2==0){
              cout<<n/2<<endl;
            }else{
              cout<<(n/2)+1<<ln;
            }
            while (v<=k)
            { 
              
              cout<<v<<" "<<k<<endl;
                v+=3;
                k-=3;
            }
          
             
            
         }
    }
    return 0;
}