class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map <int,int> mpp;
        for(int i : nums)
        {
            mpp[i]++;
        }
        for(auto j : mpp)
        {
            if(j.second == 1)
            {
                return j.first;
            }
        }
        return 0;
    }
};