class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int f0 = 0, f1 = INT_MIN;
        for (int p: prices) {
            int new_f0 = max(f0, f1 + p);
            f1 = max(f1, f0 - p);
            f0 = new_f0;
        }
        return f0;
    }
};
