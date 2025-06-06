class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        map<char, int> mp;

        int n = s.size(), l = 0, r = 0;
        int ans = 0, cnt = 0;

        while (r < n) {
            if (mp.find(s[r]) == mp.end() || mp[s[r]] < l) {
                cnt++;
                ans = max(ans, cnt);
            } else {

                l = mp[s[r]] + 1;

                cnt = r - l + 1;
            }

            mp[s[r]] = r;
            
            r++;
        }

        return ans;
    }
};