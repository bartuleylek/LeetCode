
// Linear Scan Pattern

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for(int i=0;i<nums.size();i++)
        {
            total+=nums[i];
        }

        int leftSum = 0;
        int rightSum = 0;
        for(int i=0;i<nums.size();i++)
        {
            rightSum = total - leftSum - nums[i];
            if(rightSum == leftSum)
            {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)