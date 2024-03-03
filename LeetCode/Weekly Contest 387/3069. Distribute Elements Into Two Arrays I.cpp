class Solution {
public:
    vector<int> resultArray(vector<int>& nums) { 
        vector<int> f,s,res; 
        f.push_back(nums[0]); 
        s.push_back(nums[1]); 
        for(int i=2;i<nums.size();i++){ 
            if(f.back()>s.back()){ 
                f.push_back(nums[i]); 
            }else{ 
                s.push_back(nums[i]); 
                } 
        } 
        for(auto it:f)res.push_back(it); 
        for(auto it:s)res.push_back(it); 
        return res; 
    }

};
