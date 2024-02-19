//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    static bool cmp(pair<int,int> p1,pair<int,int> p2) {
        if (p1.second == p2.second) {
            return p1.first < p2.first;
        }
        return p1.second < p2.second;
    }
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        // Your code goes her
        vector<pair<int,int>> v;
        vector<int> ans;

        for(auto y : arr) {
            v.push_back( {y, abs(y-x)} );
        }

        sort(v.begin(),v.end(),cmp);

        for (auto x : v) {
            if (ans.size() != k) {
                ans.push_back(x.first);
            }
        }
        sort (ans.begin(),ans.end());

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
		int n,x,k;
		cin>>n>>x>>k; 
		vector <int> array(n);
		for (int i = 0; i < n; ++i)
			cin>>array[i];
        
        Solution obj;
		vector <int> result = obj.Kclosest(array, n, x, k); 
		for (int i = 0; i < result.size(); ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}

	return 0; 
} 




// } Driver Code Ends