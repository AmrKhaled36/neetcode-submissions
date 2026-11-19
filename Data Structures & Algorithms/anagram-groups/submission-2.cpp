class Solution {
public:
    bool isAnagram(string s1, string s2){
        // map<char,int> mp;
        // if (s1.size() != s2.size()){
        //     return false;
        // }
        // int size = s1.size();

        // for(int i = 0; i<size; i++){
        //     mp[s1[i]]++;
        //     mp[s2[i]]--;
        // }

        // for(auto &i : mp){
        //     if(i.second != 0){
        //         return false;
        //     }
        // }

        // return true;

        sort(s1.begin(), s1.end());;
        sort(s2.begin(), s2.end());;
        return s1 == s2;

    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for(int i = 0; i<strs.size(); i++){
            
            string temp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(temp);
        }

        for(auto  & i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
