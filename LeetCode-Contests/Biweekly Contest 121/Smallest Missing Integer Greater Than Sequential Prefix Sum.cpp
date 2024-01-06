class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if (nums.size() == 1) return nums[0] + 1;

        int sum = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }

        sort(nums.begin(), nums.end());
        unordered_set<int> numSet(nums.begin(), nums.end());

        while (numSet.find(sum) != numSet.end()) {
            ++sum;
        }

        return sum;
    }
};
