class Solution {
    public List<Integer> findDuplicates(int[] nums) {
    Map<Integer,Integer> map=new HashMap<>();
      int len=nums.length;
      int count=0;
      for(int i=0;i<len;i++){
          if(map.containsKey(nums[i])){
            count=map.get(nums[i]);
            map.put(nums[i],count+1);
          }else{
              map.put(nums[i],1);
          }
      }
      List<Integer> list=new ArrayList<>();
      for(Map.Entry<Integer,Integer> entry:map.entrySet()){
          if(entry.getValue()>1){
            list.add(entry.getKey());
          }
      }
      return list;
    }
}
