class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> result;
        long long int n = nums.size();
        k = k % n;
        for(long long int j = n - k; j < n; j++)
        {
            result.push_back(nums[j]);
        }
        for(long long int i = 0; i < n - k; i++)
        {
            result.push_back(nums[i]);
        }
        for(long long int i = 0; i < n; i++)
        {
            nums[i] = result[i];
        }
    }
};