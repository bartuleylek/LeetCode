// Linear Scan Pattern

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool decreasing = false;
        bool increasing = false;
        for(int i = 1; i < nums.size();i++)
        {
            if(nums[i] < nums[i-1])
            {
                decreasing = true;
            }
            if(nums[i] > nums[i-1])
            {
                increasing = true;
            }
            if(decreasing && increasing)
            {
                return false;
            }
        }
        return true;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)