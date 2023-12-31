//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
       int fcount = 0;
       int count = 1;
       int ansIndex = 0;
       for (int i = 1;i<size;i++) {
           if (a[i] == a[ansIndex]) {
               count++;
           } else {
               count--;
           }
           if (count < 0) {
               count = 1;
               ansIndex = i;
           }
       }
       // ansIndex main majority element ki index aa jayegi 
       
       for(int i = 0;i < size; i++) {
           
           if (a[i]==a[ansIndex]) {
             fcount++;  
           }
       }
       //checking it full filling the criteria of majority element 
       if (fcount <= size/2) {
           return -1;
       }
       
       return a[ansIndex];
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends