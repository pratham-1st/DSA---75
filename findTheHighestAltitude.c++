class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt=0, i=0;

        while(i<gain.size()){

            if(i+1 < gain.size()){
            gain[i+1] = gain[i+1] + gain[i];
            }
             
            max_alt = max(max_alt, gain[i]);

            i++;
        }   

        return max_alt;
    }
};