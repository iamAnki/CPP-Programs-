class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())
            return findMedianSortedArrays(nums2,nums1);
        int x = nums1.size(),y = nums2.size();
        int px,py,lx,ly,rx,ry,left=0,right=x;
        while(left<=right)
        {
            px = (left+right)/2;
            py = (x+y+1)/2 - px;
            
            lx = (px==0)?INT_MIN:nums1[px-1];
            rx = (px==x)?INT_MAX:nums1[px];
            ly = (py==0)?INT_MIN:nums2[py-1];
            ry = (py==y)?INT_MAX:nums2[py];
            //cout<<"lx "<<lx<<" rx "<<rx<<" ly "<<ly<<" ry "<<ry<<endl;
            //cout<<"px "<<px<<" py "<<py<<endl;
            if(lx<=ry && ly<=rx)
            {
                if((x+y)%2==0)
                {
                    return (double)(max(lx,ly)+min(rx,ry))/2;
                }
                else 
                    return max(lx,ly);
            }
            else if(lx>ry)
            {
                right = px-1;
            }
            else if(ly>rx)
            {
                left = px+1;
            }
        }
        return 0;
    }
};
