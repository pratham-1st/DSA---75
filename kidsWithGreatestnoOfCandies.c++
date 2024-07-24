class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maxCandies = candies[0];
        for(int i=0; i<=candies.size()-1; i++){
            if(candies[i]>=maxCandies){
                maxCandies = candies[i];
            }
        }

        vector<bool> result;

        for(int candy : candies){
            result.push_back(candy + extraCandies >= maxCandies);
        }

        return result;
    }
};