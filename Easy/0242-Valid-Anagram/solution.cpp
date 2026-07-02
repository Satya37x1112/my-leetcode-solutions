class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        {
            return false;
        }
        sort(s.begin(),s.end()); // O(log(N))
        sort(t.begin(),t.end());//O(log(N))
        return ((s == t) ? true : false);
    }
};