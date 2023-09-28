class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxarea=0;
        
        int area=0;
        while(l<r)
        {
            if(height[l]<height[r])
            {
                area=height[l]*(r-l);
                l++;
            }
            else
            {
                area=height[r]*(r-l);
                r--;
            }
            maxarea=max(maxarea,area);

        }
        return maxarea;
    }
};
