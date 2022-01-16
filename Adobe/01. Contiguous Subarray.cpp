

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int l,r;
        l=0;
        long long int sum=0;
        vector<int> ans;
        for(r=0;r<n;r++)
        {
            sum+=arr[r];
            while(sum>s)
            {
                sum=sum-arr[l];
                l++;
            }
            if(sum==s)
            {
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
            }
        }
        ans.push_back(-1);
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
