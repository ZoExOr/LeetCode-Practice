class Solution {
public:
    int hIndex(vector<int>& citations) {
       int n = citations.size();
       int l = 0, r = n;

       while(l < r){
        int mid = (l + r + 1) / 2;
        if(check(mid, citations)) l = mid;
        else r = mid - 1;
       }
       return r;
    }

private:
    bool check(int mid, vector<int>& citations){
        int count = 0;
        for(int c : citations){
            if(c >= mid) count++;
        }
        return count >= mid;   
    }
};
