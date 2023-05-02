class Solution {
    boolean isMatching(char a,char b){
        return ((a=='(' && b==')')||(a=='[' && b==']')||(a=='{' && b=='}'));
    }
    public boolean isValid(String s) {
      ArrayDeque<Character> ad =new ArrayDeque<>();
      Solution sb=new Solution();
      for(int i=0;i<s.length();i++){
          if(s.charAt(i)=='(' || s.charAt(i)=='[' || s.charAt(i)=='{'){
              ad.push(s.charAt(i));
          }else{
              if(ad.isEmpty()) return false;
              if(sb.isMatching(ad.peek(),s.charAt(i))==false) return false;
              else ad.pop();
          }
      }
      return ad.isEmpty();  
    }
}
