class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>result;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto k : mp)
        {
            if(k.second == 1)result.push_back(k.first);
        }
        return result;
    }
};