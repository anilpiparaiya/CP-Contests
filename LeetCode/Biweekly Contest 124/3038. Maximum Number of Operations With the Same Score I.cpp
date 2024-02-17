class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return 0;
        int res = 1, m = nums[0] + nums[1];
        queue<int>q;
        for(int i=2; i<n; i++){
            q.push(nums[i]);
        }
        
        while(q.size()>1){
            int temp1 = q.front();
            q.pop();
            int temp2 = q.front();
            q.pop();
            if(temp1+temp2 == m) res++;
            else{
                return res;
            }
        }
        
        return res;
    }
};
