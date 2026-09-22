class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> boxes;
        for(string block : strs){
            string label=block;
            sort(label.begin(),label.end());
            boxes[label].push_back(block);
        }
        vector<vector<string>> result;
        for(auto box : boxes){
            result.push_back(box.second);
        }
        return result;
    }
};
