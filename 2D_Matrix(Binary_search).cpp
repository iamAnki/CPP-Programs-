//2d mattrix
// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.

class Solution {
public:
    int binary_search(vector<int> arr,int s,int e,int v){
        if(s>e){
            return -1;
        }
        int mid=(s+e)/2,val;
        if(arr[mid] == v)return mid;
        else if(arr[mid]>v)val=binary_search(arr,s,mid-1,v);
        else val=binary_search(arr,mid+1,e,v);
        return val;          
    }
    
    int upper_search(vector<vector<int>>& arr,int s,int e,int v){
        if(s>e){
            return s;
        }
        int ind=arr[0].size()-1;
        int mid=(s+e)/2,val;
        if(arr[mid][ind] == v)return mid;
        else if(arr[mid][ind]>v)val=upper_search(arr,s,mid-1,v);
        else val=upper_search(arr,mid+1,e,v);
        return val;          
    }
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(target>matrix[matrix.size()-1][matrix[0].size()-1])return false;
        int index=upper_search(matrix,0,matrix.size(),target);
        int ans=binary_search(matrix[index],0,matrix[index].size(),target);
        return (ans!=-1)?true:false;
    }
};
