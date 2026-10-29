class Solution {
public:
    int total_bouques(vector<int>&bloomDay,int k,int days)
    {
        int count = 0,bouque_count = 0;
        for(int i = 0; i < bloomDay.size(); i++)
        {
            if(bloomDay[i] <= days)
            {
                count += 1;
                if(count == k)
                {
                    bouque_count += 1;
                    count = 0;
                }
            }
            else{
                count = 0;
            }
        }
        return bouque_count;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long result = (long long)k * m;
        if(bloomDay.size() < result)return -1;
        int min_days = *min_element(bloomDay.begin(),bloomDay.end());
        int max_days = *max_element(bloomDay.begin(),bloomDay.end());
        int low = min_days,high = max_days;
        int ans = max_days;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(total_bouques(bloomDay,k,mid) >= m)
            {
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};