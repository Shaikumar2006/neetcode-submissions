class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int min = 1, max = *max_element(piles.begin(), piles.end()), mid = 0, ans = -1;
        while(min <= max)
        {
            mid = min + (max - min) / 2;
            int sum = 0;
            for(int i = 0; i < piles.size(); i++)
            {
                sum += (piles[i] + mid - 1) / mid;
            }
            if(sum > h)
            {
                min = mid + 1;
            }
            else
            {
                ans = mid;
                max = mid - 1;
            }
        }
        return ans;
    }
};
