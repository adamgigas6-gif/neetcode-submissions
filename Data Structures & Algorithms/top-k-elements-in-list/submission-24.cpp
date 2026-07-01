class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count; //gives us each unique number for the value, and sets freq to the key
        for(int n : nums){
            count[n]++;
        }
        for( const auto&s : count){
            std::cout<< s.first << endl;
        }
        vector<pair<int, int>> freq(count.begin(), count.end()); //converting from unordered map to array of pairs
        sort(freq.begin(), freq.end(), [](const auto& a, const auto& b){
            return (a.second > b.second);//higher freq comes earlier in vector
        
        });
        for(const auto &f : freq){
            std::cout << f.second << endl;
        }
        vector <int> result;
        for(int i = 0; i < k; i++){
            result.push_back(freq[i].first);
        }
        return result;
        }
    };


