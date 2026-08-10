class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int k = 0;
        while(k < nums.size())
        {
            int n = nums.size();
            
            int leftsum = 0;
            int rightsum = 0;

            for(int i = 0; i < k; i++)
            {
                leftsum += nums[i];
            }
            for(int j = k + 1; j < n; j++)
            {
                rightsum += nums[j];
            }
            if(leftsum == rightsum)
            {
                return k;
            }
            else
            {
                k++;
            }
           
        }
      return -1;   
    }
};