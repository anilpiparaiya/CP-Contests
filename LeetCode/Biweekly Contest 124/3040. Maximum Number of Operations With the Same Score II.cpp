class Solution {
public:
    int temp(int i, int j, int sum, vector<int>&a, vector<vector<int>>&dp){
        if(i>=j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int x1 = 0, x2=0, x3=0;
        
        if(i+1<=j && a[i]+a[i+1]==sum){
            x1 = 1+temp(i+2, j, sum, a, dp);
        }
        
        if(j-1>= i && a[j]+a[j-1]==sum){
            x2=1+temp(i, j-2, sum, a, dp);
        }
        
        if(a[i]+a[j]==sum){
            x3 = 1 + temp(i+1, j-1, sum, a, dp);
        }
        
        return dp[i][j] = max(x1, max(x2, x3));
    }
    int maxOperations(vector<int>& nums) {
        int n =nums.size();
        vector<int>a1;
        vector<int>a2;
        vector<int>a3;
        
        vector<vector<int>>dp1(n, vector<int>(n, -1));
        vector<vector<int>>dp2(n, vector<int>(n, -1));
        vector<vector<int>>dp3(n, vector<int>(n, -1));
        
        for(int i=0; i<n-2; i++) a2.push_back(nums[i]);
        for(int i=1; i<n-1; i++) a3.push_back(nums[i]);
        for(int i=2; i<n; i++) a1.push_back(nums[i]);
        
        int x1 = temp(2, n-1, (nums[0]+nums[1]), nums, dp1);
        int x2 = temp(0, n-3, (nums[n-1]+nums[n-2]), nums, dp2);
        int x3 = temp(1, n-2, (nums[0]+nums[n-1]), nums, dp3);
        
        
        return 1+max(x1, max(x2, x3));


        
    }
};
