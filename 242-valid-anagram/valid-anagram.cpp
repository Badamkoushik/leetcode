class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>first;
        map<char,int>second;
        for(auto i : s)
        {
            first[i]++;
        }
        for(auto j : t)
        {
            second[j]++;
        }
        if(first == second) return true; 
        return false;
    }
};