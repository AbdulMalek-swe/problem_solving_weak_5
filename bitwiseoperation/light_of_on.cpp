#include <bits/stdc++.h>
using namespace std;
#define ln endl
#define FASTIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
    int kth_value_on_off(int n,int k){
         return (n>>k)&1;
    }
    void check_every_bit(int n){
      for(int k=30;k>=0;k--){
        cout<< kth_value_on_off(n,k)<<" " ;
      }
    }
int turn_on_kth_bit(int n,int k){
  return (n|(1<<k));
}
int turn_of_kth_bit(int n,int k){
  return (n&(~(1<<k)));
}
int toggle(int n,int k){
  return (n^(1<<k));
}
int main()
{
    FASTIO;
     int n,k;
     cin >> n>>k;
    cout << kth_value_on_off(n,k) << ln;
     check_every_bit(n);
     cout<<ln;
     cout<<turn_on_kth_bit(n,k);
     cout<<"\n";
     cout<<turn_of_kth_bit(n,k);
      cout<<"\n";
     cout<<toggle(n,k);
    return 0;
}