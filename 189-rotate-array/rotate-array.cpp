class Solution {
public:
    void reverse_arr(vector<int>&nums,int start, int end)
    {
        while(start < end)
        {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse_arr(nums,n - k,n - 1);
        reverse_arr(nums,0, n - k - 1);
        reverse_arr(nums,0 , n - 1);
    
    }
};