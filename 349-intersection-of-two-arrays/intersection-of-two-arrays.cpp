class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        vector<int>finalResult;
        set<int>s;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m = nums1.size(),n = nums2.size();
        int i = 0, j = 0;
        while(i < m && j < n)
        {
            if(nums1[i] == nums2[j])
            {
                result.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j])
            {
                i++;
            }
            else{
                j++;
            }
        }
        for(int i : result)
        {
            s.insert(i);
        }
        for(int i : s)
        {
            finalResult.push_back(i);
        }
        return finalResult;
    }
};