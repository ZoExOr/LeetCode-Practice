class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        int rightmost = 0;
        for(int i = 0; i < size; i++){
            if(i <= rightmost){
                rightmost = max(nums[i] + i, rightmost);
                if(rightmost >= size - 1) return true;
            }   
        }
        return false;
    }
};
