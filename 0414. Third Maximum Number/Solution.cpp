
// Linear Scan Pattern

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long maxNum = LLONG_MIN;
        long long secondMaxNum = LLONG_MIN;
        long long thirdMaxNum = LLONG_MIN;

        for(int i =0;i<nums.size();i++)
        {
            if(nums[i] == maxNum || nums[i] == secondMaxNum || nums[i] == thirdMaxNum) // Skip duplicates to ensure distinct maximums
            {
                continue;
            }

            if(nums[i] > maxNum)
            {
                thirdMaxNum = secondMaxNum;
                secondMaxNum = maxNum;
                maxNum = nums[i];
            }
            else if(nums[i] > secondMaxNum)
            {
                thirdMaxNum = secondMaxNum;
                secondMaxNum = nums[i];
            }
            else if(nums[i] > thirdMaxNum)
            {
                thirdMaxNum = nums[i];
            }
        }
        return thirdMaxNum == LLONG_MIN ? maxNum : thirdMaxNum;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)