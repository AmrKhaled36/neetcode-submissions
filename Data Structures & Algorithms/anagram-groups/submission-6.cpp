class Solution {
public:
    string sortString (string s){
        vector<int> chars (26, 0);
        int size = s.size();

        for(int i = 0; i< size; i++){
            int index = s[i] - 'a';
            chars[index] += 1;
        }
        string sorted = "";
        for(int i =0; i<chars.size(); i++){
            while(chars[i] > 0){
                sorted += (char)(i + 'a');
                chars[i]--;
            }
        }
        return sorted;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for(int i = 0; i<strs.size(); i++){
            string temp = sortString(strs[i]);
            mp[temp].push_back(strs[i]);
        }

        for(auto  & i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};

// Time Complexity: n * m (m is string length)
// Space Complexity: n * m
