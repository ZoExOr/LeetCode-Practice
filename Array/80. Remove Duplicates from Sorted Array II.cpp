class Solution {
public:
    int removeHelper(vector<int>&nums, int k){
        int len = 0;
        for(auto num : nums)
            if(len < k || nums[len-k] != num)
                nums[len++] = num;

        return len;
    }

    int removeDuplicates(vector<int>& nums) {
        return removeHelper(nums, 2);
        
    }
};
