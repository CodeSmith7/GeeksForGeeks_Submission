//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class mark {
    public :
    int phy = 0;
    int chem = 0;
    int math =0;
    
    mark(int phy,int chem,int math) {
        this->phy = phy;
        this->chem = chem;
        this->math = math;
    }
};
class Solution{
    public:
    static bool compare(mark &a,mark &b) {
        if (a.phy != b.phy) {
            return a.phy < b.phy;
        } else if (a.chem != b.chem) {
            return a.chem > b.chem;
        } else {
            return a.math<b.math;
        }
    }
    void customSort (int phy[], int chem[], int math[], int N)
    {
        // your code here
        vector<mark> ans;
        for (int i = 0; i < N;i++ ) {
            mark m = {phy[i],chem[i],math[i]};
            ans.push_back(m);
        }
        
        sort(ans.begin(),ans.end(),compare);
        
        for(int i = 0;i < N;i++) {
            phy[i] = ans[i].phy;
            chem[i] = ans[i].chem;
            math[i] = ans[i].math;
        }
    } 
};

//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int phy[n];
		int chem[n];
		int math[n];
		for (int i = 0; i < n; ++i)
			cin >> phy[i] >> chem[i] >> math[i];
        Solution ob;
		ob.customSort (phy, chem, math, n);
		for (int i = 0; i < n; ++i)
			cout << phy[i] << " " << chem[i] << " " << math[i] << endl; 
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends