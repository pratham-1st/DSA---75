class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;

        for(int i=0; i<n; i++){
            char current_chr = chars[i];
            int count = 1;

            while(i+1 < n && chars[i+1] == current_chr){
                count++;
                i++;
            }

            chars[index++] = current_chr;

            if(count>1){
                string count_chr = to_string(count);
                for(char c : count_chr){
                    chars[index++] = c;
                }
            }
        }

        return index;
    }
};