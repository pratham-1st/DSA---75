class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_len = s.length();
        int t_len = t.length();
        int s_pointer = 0, t_pointer = 0;

        while(s_pointer < s_len && t_pointer < t_len){
            if(s[s_pointer] == t[t_pointer]){
                s_pointer++;
            }
            t_pointer++;
        }

        return s_pointer == s_len;
    }
};