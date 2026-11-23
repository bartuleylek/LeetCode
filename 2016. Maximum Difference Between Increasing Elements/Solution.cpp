// Linear Scan Pattern
class Solution {
public:
    int maximumDifference(vector<int>& nums) {

        int minNum = nums[0];
        int maxDiff = -1;
        for(int j =1;j<nums.size();j++)
        {
            if(nums[j] > minNum) // Only consider increasing elements because we want a positive difference
            {
                maxDiff = max(maxDiff, nums[j] - minNum);
            }
            minNum = min(minNum,nums[j]);

        }
        return maxDiff;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)