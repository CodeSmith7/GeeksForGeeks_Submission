//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string getCrazy (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << getCrazy (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


string getCrazy (string S)
{
        bool flag = true;
        for (int i = 1;i < S.size();i++) {
            if (islower(S[0])) {
                if (flag) {
                    S[i] = toupper(S[i]);
                } else {
                    S[i] = tolower(S[i]);
                }
                flag = !flag;
            } else {
                if (flag) {
                    S[i] = tolower(S[i]);
                } else {
                    S[i] = toupper(S[i]);
                }
                flag = !flag;
                
            }
        }
      
        return S;
}