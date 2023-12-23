//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int l = 0; 
        int h = n-1;
        int m = -1;
        while (l <= h ) {
            int m = l + (h-l)/2;
            if (k == arr[m]) {
                return m;
            } else if ( k < arr[m]) {
                h = m-1;
            } else {
                l = m + 1;
            }
        }
        return m;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends