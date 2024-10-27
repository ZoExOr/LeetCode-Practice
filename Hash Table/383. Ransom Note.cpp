class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>s(26,0);

        for(int i = 0; i < magazine.size(); i++){
            s[magazine[i] - 'a']++;
        }

        for(int j = 0; j < ransomNote.size(); j++){
            s[ransomNote[j] - 'a']--;
            if(s[ransomNote[j] - 'a'] < 0) return false;
        }

        return true;

    }
};
