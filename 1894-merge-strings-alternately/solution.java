class Solution {
    public String mergeAlternately(String word1, String word2) {
        String s="";
        int l1=word1.length();
        int l2=word2.length();
        int i=0,j=0;
        while(i<l1 || j<l2 ){
            if(i<l1){
              s=s+word1.charAt(i);
              i++;
            }
            if(j<l2){
                s=s+word2.charAt(j);
                j++;
            }
        }
        return s;
    }
}
