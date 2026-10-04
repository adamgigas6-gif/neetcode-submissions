class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int lo = 1;
    int hi = *max_element (piles.begin(), piles.end()); 
    int max = hi;
    int best = 0;
    while (lo <= hi){
        int k = (lo + hi) / 2; 
        long long total = 0;
        for (int i = 0; i < piles.size(); i++){
        total += piles[i] / k + (piles[i] % k != 0); 
        }
    if (total > h){
        lo = k+1;
    }
    else if (total <= h ){
        best = k;
        hi = k-1;
    }
    }
    return best;
}
};

