class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
         int l[n],r[n];
       // vector<int>l(n,1);
        //vector<int>r(n,1);
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            l[i]=r[i]=1;
        }
        for(int i=0;i<n-1;i++)
        {
            if(ratings[i+1]>ratings[i])
            {
                l[i+1]=l[i]+1;
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                r[i]=r[i+1]+1;
            }
        }
        for(int i=0;i<n;i++)
        {
         sum+=max(l[i],r[i]);
            
        }
        return sum;
        
        
                                    
       
        
    }
    
    
};