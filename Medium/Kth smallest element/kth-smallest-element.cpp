//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int partition (int arr[],int pivot,int l,int h ,int k) {
        int i = l; 
        int j = l;
        while(i <= h) {
            if (arr[i] <= pivot) {
                swap(arr[i],arr[j]);
                i++;j++;
            } else {
                i++;
            }
        }
        return j-1;
    }
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int pivot = arr[r];
        int pi = partition(arr,pivot,l,r,k);
        if (k-1 > pi) {
            return kthSmallest(arr,pi+1,r,k);
        } else if (k-1 < pi) {
            return kthSmallest(arr,l,pi-1,k);
        } else {
            return pivot;
        }
        return pivot;
     }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends