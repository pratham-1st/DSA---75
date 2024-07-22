class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int len1 = word1.size();
        int len2 = word2.size();
        int i = 0, j = 0;

        while(i<len1 || j<len2){
            if(i<len1){
                merged += word1[i];
                i++;
            }

            if(j<len2){
                merged += word2[j];
                j++;
            }
        }

        return merged;
    }
};