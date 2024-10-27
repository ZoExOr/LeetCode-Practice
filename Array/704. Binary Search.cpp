class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        return searchHelper(nums, target, left, right);
    }

private:
    int searchHelper(vector<int>&nums, int target, int left, int right){
        if (left > right) return -1;
        int mid = left + (right - left) / 2;
        if(target == nums[mid]) return mid;
        else if(target < nums[mid]) return searchHelper(nums, target, left, mid - 1);
        else return searchHelper(nums, target, mid + 1, right);
    }
};
