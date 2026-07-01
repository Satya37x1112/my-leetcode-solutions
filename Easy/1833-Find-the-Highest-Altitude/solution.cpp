class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector <int> result = {0};
        for(int i = 0; i < gain.size();i++) // O(N)
        {
            result.push_back(result[i] + gain[i]);
        }
        sort(result.begin(),result.end()); // O(Log(N))
        return(result[result.size() - 1]);//O(N * Log(N))
    }
};