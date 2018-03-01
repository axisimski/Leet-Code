#include<stdio.h>
#include<iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
	
    int searchInsert(vector<int>& nums, int target) {
    	       
       
        if(nums.empty()){
        	return 0;
		}
		
		int count=0;
		
		for(int i=0;i<nums.size();i++){
			
			
			if(nums.at(i)<target){
				
				count ++;
				
			}
			
			
		}		
		
		
		return count;
	}
        
   
};


int main(){
	
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(6);
	arr.push_back(7);
	arr.push_back(8);
	arr.push_back(9);
	
	Solution s;
	
	int result=s.searchInsert(arr, 4);
	
	cout<<result<<endl;
	
	return 1;
	
	
	
	
}
