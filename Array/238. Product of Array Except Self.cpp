class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prev = 1, back = 1, n = nums.size();
        vector<int>answer(n, 1);

        for(int i = 0; i < n; i++){
            answer[i] = prev;
            prev *= nums[i];
        }

        for(int i = n - 1; i >= 0; i--){
            answer[i] *= back;
            back *= nums[i];
        }

        return answer;
    }
};
