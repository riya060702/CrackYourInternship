class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int p=0;                      //pointer
        int n=nums.size();
        for(int i=0;i<n;i++)                        //loop
        {
            if(nums[p]!=nums[i])                   //checking if not similar
            {
                p++;
                nums[p]=nums[i];    //copying backward 
                
            }
        }
                                      
        return p+1;
    }
};