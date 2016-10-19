#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if (nums.size() == 0) {
            return 0;
        }
        
        int i=0, j=1;
        
        while (j < nums.size()) {
            if (nums[i] == nums[j]) {
                j++;
            } else {
                nums[++i] = nums[j++];
            }
        }
        
        return i+1;
    }
};

int main(){

	Solution s; 
	
	int myints[] = {1, 1, 1, 2, 3, 3};
	vector<int> v (myints, myints + sizeof(myints) / sizeof(int) );

	int length = s.removeDuplicates(v);
	cout<<"length = "<<length<<endl;

	return 0;
}
