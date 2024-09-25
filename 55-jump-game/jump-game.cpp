class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxPosition = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxPosition) return false; 
            maxPosition = max(maxPosition, i + nums[i]); 
        }
        return true; 
    }
};
