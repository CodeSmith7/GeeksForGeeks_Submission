//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    // your code here
    int size1 = S1.size();
    int size2 = S2.size();
    string ans = "";
    bool flag = true;
    int i = 0, j = 0;
    while ( i < size1 && j < size2) {
        if (flag) {
             ans += S1[i++];
        } else {
            ans += S2[j++];
        }
        flag = !flag;
    }
    
    if( i < size1) ans += S1.substr(i,size1 - i);
    if (j < size2) ans += S2.substr(j,size2 - j);
    
    return ans;
    
}