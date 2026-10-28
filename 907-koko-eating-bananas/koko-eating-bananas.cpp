class Solution {
public:
    long long time_to_eat(vector<int>&piles,int n,int m)
    {
        long long bananas_count = 0;
        for(int i = 0; i < piles.size(); i++)
        {
            bananas_count += ceil (double(piles[i]) / double(m));
        }
        return bananas_count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max_ele = *max_element(piles.begin(),piles.end());
        int low = 1 , high = max_ele;
        int no_of_bananas = max_ele;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(time_to_eat(piles,n,mid) <= h)
            {
                no_of_bananas = mid;
                high = mid -1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return no_of_bananas;
    }
};