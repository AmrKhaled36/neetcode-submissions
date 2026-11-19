class Solution {
public:
    unordered_map<int, string> mp;
    string encode(vector<string>& strs) {
        string s = "";
        for(int i = 0; i<strs.size(); i++){
            mp[i] = strs[i];
            s += (char) i;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        for(auto &i : s){
            ans.push_back(mp[(int) i]);
        }
        return ans;
    }
};
