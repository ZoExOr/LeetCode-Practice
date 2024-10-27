class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int maxPosition = 0, end = 0, count = 0;

        for(int i = 0; i < n - 1; i++){
            if(maxPosition >= i){
                maxPosition = max(maxPosition, nums[i] + i);
                if(i == end){
                    end = maxPosition;
                    count++;
                }
            }
        }

        return count;
    }
};
