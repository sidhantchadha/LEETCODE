//============================================================================
// Name        : CanPlaceFlowers.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Can Place Flowers in C++, Ansi-style
//============================================================================

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s=flowerbed.size();
        int count=0;
        int i=0;
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(),0);
        for(int i=1;i<=s;i++) {

            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0) {
                flowerbed[i]=1;
                count++;
            }


        }
        return(count>=n?true:false);
    }
};
