class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>>pq;
        
        for(auto num: nums) pq.push(num);
        int res = 0;
        
        while(pq.size()>=2 && pq.top()<k){
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            
            long long temp = 2*min(x,y) + max(x, y);
            pq.push(min(1LL*k, temp));
            res++;
        }
        return res;
    }
};
