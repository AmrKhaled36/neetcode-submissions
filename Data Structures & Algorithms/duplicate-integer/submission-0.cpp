class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        int size = nums.size();
        for(int i = 0; i<size; i++){
            if(s.find(nums[i]) != s.end()) return true;
            s.insert(nums[i]);
        }
        return false;
    }
};