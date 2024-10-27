class RandomizedSet {
public:
    unordered_map<int, int> hash;  //we consider hash map for O(1) time
    vector<int> nums;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (hash.find(val) != hash.end()) return false;
        else{
            nums.push_back(val);
            hash[val] = nums.size() - 1;
            return true;
        }
    }
    
    bool remove(int val) {
        if(hash.find(val) != hash.end()){
            int idx = hash[val];
            int lastElement = nums.back();

            nums[idx] = lastElement;
            hash[lastElement] = idx;

            nums.pop_back();
            hash.erase(val);

            return true;
        } else 
            return false;
    }
    
    int getRandom() {
        int size = nums.size();
        int idx = rand() % size;
        return nums[idx];
    }
};

