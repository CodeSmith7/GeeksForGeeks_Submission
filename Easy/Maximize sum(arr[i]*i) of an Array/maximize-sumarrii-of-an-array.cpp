//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int Maximize(int a[],int n)
    {   sort(a, a+n);
        int mod = 1000000007;
        long long sum = 0;
        for(int i=0; i<n; i++)
        {
          sum = (sum + (static_cast<long long >(a[i])*i)%mod)%mod;
        }
      return sum%mod;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends