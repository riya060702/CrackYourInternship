class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int n=nums.size();
        int prod1=1;
        
        sort(nums.begin(), nums.end());
        
        /* explaination
        Due to sorting the least negative numbers will be placed at starting in order [for example(-100,-97,..)} two negatives when multiplied gives a higer positive , therefore we multiply first two numbers( in case they are negative) and the last positive number to get maxprod */ 
        
        for(int i=n-1; i>=n-3 ; i--){
            prod1=prod1*nums[i];
        }
        int prod2=nums[0]*nums[1]*nums[n-1];
        
        return max(prod1,prod2);
    }
};