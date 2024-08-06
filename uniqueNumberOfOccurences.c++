class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        unordered_set<int> set;

        for(int i=0; i<arr.size(); i++){
            map[arr[i]]++;
        }

        for(auto pair : map){
            if(set.find(pair.second) != set.end()){
                return false;
            }
            set.insert(pair.second);
        }

        return true;
    }
};