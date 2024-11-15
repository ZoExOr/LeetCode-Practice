class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, current = m + n - 1;

        while(i >= 0 && j >= 0){
            if(nums1[i] < nums2[j])  nums1[current--] = nums2[j--];
            else nums1[current--] = nums1[i--];
        }

        while(j >= 0){
            nums1[current--] = nums2[j--];
        }
        
    }
};
