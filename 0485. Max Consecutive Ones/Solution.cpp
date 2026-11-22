// Linear Scan Pattern

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxNum = 0;
        int currentNum = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1)
            {
                currentNum++;
                if(currentNum >= maxNum)
                {
                    maxNum = currentNum;
                }
            }
            else{
                currentNum = 0;
            }
        }
        return maxNum;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)