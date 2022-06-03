class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int cnt_zero=0,cnt_one=0,cnt_two=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                cnt_zero++;
            else if(nums[i]==1)
                cnt_one++;
            else if(nums[i]==2)
                cnt_two++;          
        }
        int j=0;
        for(int i=0;i<cnt_zero;i++){
            nums[j]=0;
            j++;
        }
        for(int i=0;i<cnt_one;i++){
            nums[j]=1;
            j++;
        }
        for(int i=0;i<cnt_two;i++){
            nums[j]=2;
            j++;
        }
    }
};