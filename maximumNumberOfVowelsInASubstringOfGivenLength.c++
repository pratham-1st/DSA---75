class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int max_count, current_count = 0;

        for(int i=0; i<k; i++){
            if(vowels.count(s[i])){
                ++current_count;
            }
        }     

        max_count = current_count;

        for(int i=k; i<s.size(); ++i){
            if(vowels.count(s[i])){
                ++current_count;
            }
            if(vowels.count(s[i-k])){
                --current_count;
            }

            max_count = max(max_count, current_count);
        }

        return max_count;
    }
};
