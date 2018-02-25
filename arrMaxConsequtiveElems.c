//2/25/18
//Maximum number of consequitive 1's in a binary array 

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    
    int i;
    int tmp=0;
    int counter=0;
    
    for(i=0;i<numsSize;i++){
        
        tmp++;
        
        if(nums[i]!=1){
            
             tmp=0;
        }
        
        if(counter<tmp){
            counter=tmp;
        }        
         
    }
    
    return counter;
    
}
