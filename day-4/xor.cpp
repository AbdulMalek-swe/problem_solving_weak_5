#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int> arr(n);
       int sum = 0;
       for(int i=0;i<n;i++){
         cin>>arr[i];
          sum^=arr[i];
       }
       sort(arr.begin(),arr.end());
       int ans = sum;
       for(int i=0;i<n;i++){
          int currXor=(sum^arr[i]);
       ans = min(ans,currXor);
       }
       cout<<ans<<endl;
       
    }
    return 0;
}
