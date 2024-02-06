class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xorAll = 0;
        for (int num : nums) {
            xorAll ^= num;
        }

        int targetXor = xorAll ^ k;
        int totalFlips = 0;

        // Count the number of 1s in targetXor (which are the bits that need to be flipped)
        while (targetXor > 0) {
            if ((targetXor & 1) == 1) {
                totalFlips++;
            }
            targetXor >>= 1;
        }

        return totalFlips;
    }
};
