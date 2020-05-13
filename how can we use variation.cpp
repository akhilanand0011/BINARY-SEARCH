https://leetcode.com/explore/learn/card/binary-search/126/template-ii/948/
think with this example 1231
//main problem is with first and last element [l,r)

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            int mid=l+(r-l+1)/2; //kabhi bhi first wala element pd nae jyaga 
            if(nums[mid]>nums[mid-1]) l=mid; //kabhi bhi first wala element pad nae jyaga is lia mid-1 use kia 
            else r=mid-1;  
        }
        return l;answer tabhi ayaga jb left==right hoga
    }
};


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[mid+1]) r=mid;
            else l=mid+1;
        }
        return l;
    }
};


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      
        if(nums.size()==1) return 0;
        if(nums[0]>nums[1]) return 0;
        else if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            cout<<mid<<endl;
            if(mid==0) l=mid+1;
            else if(mid!=0 and nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1])return mid;
            else if(mid!=0 and nums[mid]>nums[mid-1]) l=mid+1;
            else r=mid-1;
            cout<<l<<" "<<r<<endl;
        }
        return 0;
    }
};
