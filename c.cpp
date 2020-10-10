class Solution {
public:
    int partition(int l,int r,vector<int>& nums)
    {
        int i=l;
        for(int j=l;j<r;j++)
        {
            if(nums[j]<nums[r])
                swap(nums[i++],nums[j]);
        }

        swap(nums[i],nums[r]);
        return i;
    }
    void quickSort(int l,int r,vector<int>& nums)
    {
        if(l>=r)
            return;
        int pivot=l+(rand()%(r-l+1));
        swap(nums[pivot],nums[r]);
        pivot=partition(l,r,nums);
        quickSort(l,pivot-1,nums);
        quickSort(pivot+1,r,nums);
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(0,nums.size()-1,nums);
        return nums;
    }
};
