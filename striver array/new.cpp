#include<bits/stdc++.h>
using namespace std;
     bool check(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                cout<<nums[i]<<">"<<nums[i-1]<<" Hence continuing"<<endl; 
                continue;
            }
            else{
                cout<<nums[i]<<"not >"<<nums[i-1]<<" Hence false"<<endl;
                return false;
            }

        }
        return true;
    }
int main(){


    vector<int> xnums={3,4,5,1,2};
    check(xnums);

}