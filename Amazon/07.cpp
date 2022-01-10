class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    string ans = "";
		    int hash[26];
		    for(int i=0; i<26; i++)
		    hash[i]=0;
		    int j=0;
		    for(int i=0; i<A.length(); i++)
		    {
		       hash[int(A[i]-'a')]++;
		       while(j<=i && hash[int(A[j]-'a')]>1)
		       {
		           j++;
		       }
		       if(j<=i)
		       ans+=A[j];
		       else ans+="#";
		    }
		    return ans;
		}

};
