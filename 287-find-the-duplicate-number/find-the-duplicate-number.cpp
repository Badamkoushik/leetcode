class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        int result = nums[0];
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
            if(freq[nums[i]] > 1)
            {
                result = nums[i];
            }
        }
        return result;
    }
};