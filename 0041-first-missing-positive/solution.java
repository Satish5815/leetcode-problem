class Solution {
    public int firstMissingPositive(int[] nums) {
        Set<Integer> list=new HashSet<>();
        for(int i=0;i<nums.length;i++){
            list.add(nums[i]);
        }
        int i=1;
        while(i<=nums.length){
            if(list.contains(i)) i++;
            else {
                return i;
            }
        }
        return i;
    }
}
