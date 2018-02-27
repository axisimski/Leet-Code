//2/25/18
//Delete element of an array 

#include<stdio.h>

int main(){
	

	int arr[10]={1,2,3,4, 6, 9, 12, 14, 19};
	
	int testArr[18]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	
	int newArray[8];
	
	int i=0;
		
	
	while(i<10){
		
		printf("%d\n", arr[i]);
		i++;
	}
	
	
	int j=0;
	int l=0;
	for(i=0;i<18;i++){
		
		if(arr[j]==testArr[i]){
			j++;
		}
		
		else {
			
			newArray[l]=testArr[i];
			l++;
			
		}
	
		
	}
 
 
 
 
 
 
	
		int n=0;
	while(n<8){
		
		printf("New arr element %d\n", newArray[n]);
		n++;
	}
	
	
 	
	
}
