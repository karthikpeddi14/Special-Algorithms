class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int number;
        int count = 0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(count==0) 
            {
                number = nums[i];
                count++;
            }
            else
            {
                if(nums[i]==number) count++;
                else count--;
            }

        }
        int count2 = 0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(number == nums[i]) count2++;
        }
        if(count2>nums.size()/2) return number;
        return -1;
        
    } 
};
