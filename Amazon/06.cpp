class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
        if(k>=n)
        {
            ans.push_back(*max_element(arr,arr+n));
            return ans;
        }
        
        int nge[n];
        stack <int> st;
        for(int i=n-1; i>=0; i--)
        {
            while(!st.empty() && arr[st.top()]<=arr[i])
            st.pop();
            if(st.empty())
            nge[i]=n;
            else
            {
                nge[i]=st.top();
            }
            st.push(i);
        }
        
        int j=0;
        for(int i=0; i<=n-k; i++)
        {
            if(nge[i]>i+k-1)
            ans.push_back(arr[i]);
            else
            {
               if(j<i)
                j=i; 
                while(nge[j]<=i+k-1)
                j=nge[j];
                ans.push_back(arr[j]);
            }
        }
        return ans;
        
    }
};
