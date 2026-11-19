class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int size = nums.size();
        unordered_map<int, int> mp;

        for(int i =0; i<size; i++){
            mp[nums[i]] += 1;
        }
        
        priority_queue<pair<int, pair<int,int>>> sorted;
        for(auto & i : mp){
            sorted.push({i.second, {i.first, i.second}});
        }
        vector<int> ans;
        while(k > 0){
            ans.push_back(sorted.top().second.first);
            sorted.pop();
            k--;
        }
        return ans;
    }
};
