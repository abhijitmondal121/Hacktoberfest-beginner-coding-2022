 bool find132pattern(vector<int>& nums) {
        
        stack<int> st;
        int s3 = INT_MIN;
        
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i] < s3) return true;
            while(!st.empty() and nums[i] > st.top())
            {
                s3 = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
        
    }
