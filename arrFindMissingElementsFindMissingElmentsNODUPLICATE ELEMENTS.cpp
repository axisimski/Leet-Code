#include<stdio.h>
#include<iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    	
    	
    	
    
      vector<int> nums2;
        
        sort(nums.begin(),nums.end());
        
        if(nums.empty()){
        	return nums;
		}
        
        for(int p=0;p<nums.size()-1;p++){        	
    		 
    		if(nums.at(p)!=nums.at(p+1)){
    			nums2.push_back(nums.at(p));	
			}
    		
		}
       
        
        
        int start=nums2[0];
        int size=nums2.size()-1;
        int end=nums2[abs(size)];      
     
              
        vector<int> temp;
      

        vector<int> ret;
        
        int z=0;
        int i;
               
        
        
        
        for(i=start;i<end;i++){
            
            temp.push_back(i);
            z++;
        }

        int k;
        int l=0;
        int m=0;    
                      

        for(k=0;k<temp.size();k++ ){
            
            if (nums2.at(l)==temp.at(k)){
               
            
               	   
					   l++;				//1 2 2 3 3 4 7 8
			   
            }
            
            else{                
              
			    ret.push_back(temp.at(k));
                               
            }           
        }

        return ret;   
        
    }
};


int main(){
	
	vector<int> arr;
	arr.push_back(4);
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(7);
	arr.push_back(8);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(1);
	
	vector<int>x;
	
	Solution s;
	x= s.findDisappearedNumbers(arr);
	
	int i=0;
		
	
	while(i<8){
		
		printf("Original elements %d\n", arr[i]);
		i++;
	}
	
	cout<<"\n"<<endl;
	int n=0;
	
	while(n<2){
		
		printf("Missing elements  %d\n", x[n]);
		n++;
	}
	
	
	
	
}
