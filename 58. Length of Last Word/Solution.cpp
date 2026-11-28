// Linear Scan Pattern

class Solution {
public:
    int lengthOfLastWord(string s) {
        int lenLast = 0;
        for(int i= s.length()-1; i>= 0; i--)
        {
            if(s[i] == ' ')
            {
                if(lenLast > 0)
                {
                    break;
                }
            }
            else{
                lenLast++;
            }
        }
        return lenLast;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)