class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_map<char, int> last_seen;
        
        int max_len = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); right++) {
            char current_char = s[right];
            if (last_seen.count(current_char) && last_seen[current_char] >= left) {
                left = last_seen[current_char] + 1;
            }
            last_seen[current_char] = right;
            max_len = std::max(max_len, right - left + 1);
        }
        
        return max_len;
    }
};