//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        int sum  = 0;
        int ans = 0;
        
        unordered_map<int,int> mp;
        
        mp[0] = 1;
        
        for (int i = 0; i < N;i++) {
            sum += Arr[i];
            
            if (mp.find(sum - k) != mp.end()) {
                ans += mp[sum - k];
            } 
            
            mp[sum]++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends