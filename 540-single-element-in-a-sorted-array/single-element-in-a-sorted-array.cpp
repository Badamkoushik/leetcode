class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int samp;
        for(auto k : mp)
        {
            if(k.second == 1)
            {
                samp = k.first;
            }
        }
        return samp;
    }
};