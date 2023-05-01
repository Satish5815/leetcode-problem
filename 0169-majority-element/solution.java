class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer,Integer> map=new HashMap<>();
        int count=0;
        for(int i=0;i<nums.length;i++){
            if(map.containsKey(nums[i])){
              count=map.get(nums[i]);
              map.put(nums[i],count+1);
            }else{
                map.put(nums[i],1);
            }
        }
        int maxFreq=0;
        int maxFreqNum=-1;
        for(Map.Entry<Integer,Integer> entry:map.entrySet()){
            if(entry.getValue()>maxFreq){
                maxFreq=entry.getValue();
                maxFreqNum=entry.getKey();
            }
        }
        return maxFreqNum;
    }
}
