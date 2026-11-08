class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1 = s.size();
        int size2 = t.size();
        map<char, int> mp;
        if(size1 != size2) return false;

        for(int i = 0; i<size1; i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }

        for(auto &c : mp){
            if(c.second != 0) return false;
        }
        return true;
        
    }
};
