class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map <int,int> mpp;
        for(int num : nums)
        {
            mpp[num]++;
        }
        int middle = nums[nums.size() / 2];
        int result;
        auto res = mpp.find(middle);
        if(res != mpp.end())
        {
            result = res->second; 
        }
        if(result > 1)
        {
            return false;
        }
        return true;
    }
};