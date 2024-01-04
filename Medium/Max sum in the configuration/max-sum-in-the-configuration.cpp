//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}

// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int A[],int N)
{
  int sum = 0;
  int s0 = 0;
  for (int i = 0;i < N;i++) {
      sum += A[i];
      s0 += A[i]*i;
  }
  int maxi = s0;
  int si = s0;
  
  for (int i = 0;i < N-1;i++) {
      int sip1 = si + sum - N * A[N-1-i];
      si = sip1;
      maxi = max(sip1,maxi);
  }
  return maxi;
}