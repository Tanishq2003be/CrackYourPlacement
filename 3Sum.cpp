class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>temp;
        set<vector<int>>st;
sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
           
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {st.insert({nums[i],nums[j],nums[k]});
                j++;
                k--;
                }else if(nums[i]+nums[j]+nums[k]<0)
                j++;
                else
                k--;
            }
        }

for(auto i:st)
temp.push_back(i);


        return temp;
    }
};