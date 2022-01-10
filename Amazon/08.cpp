class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // your code here
        return 1+m/2;
        /* m/2 is done to count the number of 2's in m
     1 is added for case where there is no 2.
     Further, to add 1 "2", 2 "1s" will be deleted, we can add atmost m/2 2s.
     So, 1 case when 1 "2" is added, 1 case when 2 "2s" are added....1 case when m/2 "2s" are added.
     Thus making m/2 more cases.
     eg: if n=4 ans will be 3.
     {1,1,1,1} set having no 2.
     {1,1,2} ans {2,2} (n/2) sets containing 2. */
    }
};
