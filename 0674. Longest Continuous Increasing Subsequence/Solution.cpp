// Linear Scan Pattern

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxSub = 1;
        int currentSub = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums.size()==0)
            {
                return 0;
            }

            if(nums[i] > nums[i-1])
            {
                currentSub++;
                maxSub = max(maxSub, currentSub);
            }
            else{
                currentSub = 1;
            }
        }
        return maxSub;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)