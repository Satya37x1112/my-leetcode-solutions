class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        unordered_map <int,int> mpp;
        for(int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        for(auto& j : mpp)
        {
            if(j.second > nums.size()/3)
            {
                result.push_back(j.first);
            }
        }
        return result;
    }
};