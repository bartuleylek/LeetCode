// Linear Scan Pattern

class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int output = 0;

        for(int i =0;i<nums.size();i++)
        {

            int num = nums[i];
            int count = 0;

            while(num > 0){
                num/=10;
                count++;
            }
            if(count%2==0)
                output++;
        }
        return output;
    }
};
// Time Complexity: O(n) because even though there is a nested loop, the inner loop runs at most 6 times as the problem states that numbers have at most 6 digits since nums[i] <= 10^5
// So, while loop runs at most 6 times for each number, therefore (6n) = O(n), making the overall time complexity O(n).
// Space Complexity: O(1)