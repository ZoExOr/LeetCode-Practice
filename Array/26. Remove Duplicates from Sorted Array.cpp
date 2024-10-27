class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size(), left = 0;

        for(int right = 0; right < size; right++){
            if(nums[left] != nums[right]){
                left++;
                nums[left] = nums[right];
            }
        }
        
        return left + 1;
    }
};
