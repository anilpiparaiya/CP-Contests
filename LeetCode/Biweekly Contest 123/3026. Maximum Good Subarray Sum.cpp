class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int, vector<int>> mp;
        vector<long long> prefix(nums.size());
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        long long maxAns = LONG_MIN;
        bool curr = false;
        long long ans;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i] - k) != mp.end()) {
                curr = true;
                for (auto x : mp[nums[i] - k]) {
                    if (x == 0)
                        ans = prefix[i];
                    else
                        ans = prefix[i] - prefix[x - 1];
                    maxAns = max(maxAns, ans);
                }
            }
            if (mp.find(nums[i] + k) != mp.end()) {
                curr = true;
                for (auto x : mp[nums[i] + k]) {
                    if (x == 0)
                        ans = prefix[i];
                    else
                        ans = prefix[i] - prefix[x - 1];
                    maxAns = max(maxAns, ans);
                }
            }
            mp[nums[i]].push_back(i);
        }
        return curr ? maxAns : 0;
    }
};