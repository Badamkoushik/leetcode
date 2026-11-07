class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>result;
        int low = 0, high = 0;
        int i = 0;
        int n = nums.size();
        if(n == 0)
        {
            return result;
        }
        while(i < n - 1)
        {
            long long diff = (long long)nums[i + 1] - nums[i];
            if(diff == 1 || diff == -1)
            {
                high += 1;
            }
            else{
                if(low == high)
                {
                    result.push_back(to_string(nums[low]));
                }
                else{
                    result.push_back(to_string(nums[low]) + "->" + to_string(nums[high]));
                }
                low = high + 1;
                high = low;
            }
            i++;
        }
        if(low == high)
        {
            result.push_back(to_string(nums[low]));
        }
        else{
            result.push_back(to_string(nums[low]) + "->" + to_string(nums[high]));
        }
        return result;
    }
};