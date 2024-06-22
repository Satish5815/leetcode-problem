class Solution {
public:
    int minimumOperations(vector<int>& nums) {
           int total_operations = 0;
    
    for (int num : nums) {
        int remainder = num % 3;
        
        if (remainder == 1) {
            total_operations += 1;  
        } else if (remainder == 2) {
            total_operations += 1;  
        }
    }
    
    return total_operations; 
    }
};
