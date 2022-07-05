class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest= 0;
        
        unordered_set<int> s(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int len=0;
            int curr=nums[i];
            if(s.find(nums[i]-1)!=s.end()) ;
            else
                 
                 
            while(s.find(curr)!=s.end())
            {
                len++;
                curr++;
            
            longest=max(longest,len);
            }
        }
        
        return longest;
    }
};