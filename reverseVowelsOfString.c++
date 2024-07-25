class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        int left = 0;
        int right = s.length() - 1;

        while(left<right) {
            
            while(left<right && vowels.find(s[left]) == vowels.end()){
                left++;
            }

            while(left<right && vowels.find(s[right]) == vowels.end()){
                right--;
            }

            if(left<right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};