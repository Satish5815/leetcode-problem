class Solution {
public:
    int countPrimes(int n) {
      vector<bool> v(n,false);
      int count=0;
      if(n<=2) return 0;
      for(int i=2;i*i<n;i++){
          if(v[i]==false){
              for(int j=i*i;j<n;j+=i) v[j]=true;
          }
      }  
      for(int i=2;i<n;i++)
      if(v[i]==false)   count++;
      return count;
    }
};
