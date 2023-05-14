class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
       List<Integer> list1=new ArrayList<>();
       List<Integer> list2=new ArrayList<>();
       for(int x:nums1){
           list1.add(x);
       }
       for(int i=0;i<nums2.length;i++){
           if(list1.contains(nums2[i])){
               list2.add(nums2[i]);
               list1.remove(list1.indexOf(nums2[i]));
           }
       }
       int[] ans=new int[list2.size()];
       for(int i=0;i<list2.size();i++){
           ans[i]=list2.get(i);
       }
      return ans;
    }
}
