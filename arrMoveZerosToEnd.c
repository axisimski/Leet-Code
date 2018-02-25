//2/25/18
//Move zeros to back of array


#include<stdio.h>

int main(){
	

	int nums[10]={1,0,3,4,0,0,7,8,9,0};
	int numsSize=10;
	
    int i=0;
	int counter=0;
	int tmp=0;
    
    
    for(i=0;i<numsSize;i++){
        
             
        if(nums[i]!=0){
            
            nums[i-counter]=nums[i];            
        }        
           
       else if(nums[i]==0){
          
            counter++;
            
        }        
        
    }
    
    int k;
    for(k=0;k<counter;k++){
    	
    	nums[numsSize-k-1]=0;
    	
	}     
    
    
    
    int j=0;
    
   	while(j<10){
		
		printf("%d\n", nums[j]);
		j++;
	}
	
    
}

	
