class Solution {
public:
    void merge(vector<int> &nums,int s,int mid,int e){
        int len1=mid-s+1;
        int len2=e-mid;
        int *first=new int[len1];
        int *second=new int[len2];
        for(int i=0;i<len1;i++){
            first[i]=nums[i+s];
        }
        for(int j=0;j<len2;j++){
            second[j]=nums[mid+1+j];
        }
        int originalIndex=s;
        int index1=0;
        int index2=0;
        while(index1<len1 && index2<len2){
            if(first[index1]<second[index2]){
                nums[originalIndex]=first[index1];
                originalIndex++;
                index1++;
            }else{
                nums[originalIndex]=second[index2];
                originalIndex++;
                index2++;
            }
        }
        while(index1<len1){
            nums[originalIndex]=first[index1];
            originalIndex++;
            index1++;
        }
        while(index2<len2){
            nums[originalIndex]=second[index2];
            originalIndex++;
            index2++;
        }
        delete []first;
        delete []second;
    }
    void mergeSort(vector<int>& nums,int s,int e){
        if(s>=e) return;
        int mid=s+(e-s)/2;
        mergeSort(nums,s,mid);
        mergeSort(nums,mid+1,e);
        merge(nums,s,mid,e);
    }
    vector<int> sortArray(vector<int>& nums) {
       int size=nums.size()-1;
       mergeSort(nums,0,size);
        return nums;
    }
};
