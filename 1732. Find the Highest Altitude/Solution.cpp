// Linear Scan Pattern
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        int currentAltitude = 0;
        for(int i=0;i<gain.size();i++)
        {
            currentAltitude += gain[i];
            highest = max(highest, currentAltitude);
        }
        return highest;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)