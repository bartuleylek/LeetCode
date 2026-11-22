
// Linear Scan Pattern

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()>=3)
        {
            int i = 0;
            int n = arr.size();

            while(i+1 < n && arr[i] < arr[i+1])
            {
                i++;
            }

            if(i == 0 || i == n-1) // Peak can't be first or last element because a valid mountain must have both an increasing and decreasing part
            {
                return false;
            }

            while(i+1 < n && arr[i] > arr[i+1])
            {
                i++;
            }

            return (i == n-1);
        }
        return false;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)