class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (const auto&s : strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(s);

        }
        vector<vector<string>> result;
        for (auto&pair : groups){
            result.push_back(pair.second);
        }
    return result;
    }
};
