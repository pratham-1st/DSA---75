class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int space = 0, i=0;
        int size = flowerbed.size();

      for(i=0; i<size; i++){
        if(flowerbed[i] == 0){

            bool prev = (i==0) || (flowerbed[i-1] == 0);
            bool next = (i==(size-1)) || (flowerbed[i+1] == 0);

            if(prev && next){
                flowerbed[i] = 1;
                space++;
            }

        }
      }
      return space >= n;
    }
};