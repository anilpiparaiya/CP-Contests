class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        int n = nums.size();
        vector<int> adj[n];
        
        for (int i = 0; i < n - 1; i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int> v;
        
        for (int i = 0; i < n; i++) {
            long long temp = (long long)nums[i] ^ k;
            if (temp > nums[i]) {
                v.push_back(i);
            }
        }
        
        int s = v.size();
        
        if (s % 2 == 0) {
            long long res = 0;
            
            for (int i = 0; i < n; i++) {
                res += nums[i];
            }
            
            for (int i = 0; i < v.size(); i++) {
                res -= nums[v[i]];
                long long add = (long long)nums[v[i]] ^ k;
                res += add;
            }
            
            return res;
        } else {
            long long res = 0;
            
            for (int i = 0; i < n; i++) {
                res += (long long)nums[i];
            }
            
            long long h = res;
            
            for (int i = 0; i < v.size(); i++) {
                res -= nums[v[i]];
                long long add = (long long)nums[v[i]] ^ k;
                res += add;
            }
            
            for (int i = 0; i < s; i++) {
                long long add = (long long)nums[v[i]] ^ k;
                long long curr = res - add + nums[v[i]];
                h = max(h, curr);
            }
            
            vector<int> vis(n, 0);
            long long sum = 0;
            
            for (int i = 0; i < s; i++) {
                vis[v[i]] = 1;
            }
            
            for (int i = 0; i < n; i++) {
                if (vis[i] == 0) {
                    long long add = (long long)nums[i] ^ k;
                    long long curr = res - nums[i] + add;
                    h = max(h, curr);
                }
            }
            
            return h;
        }
    }
};
