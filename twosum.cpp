#include <iostream>
#include <string>
using namespace std;

int main(){
    int target=13;
    int a=4;
    int nums[4]={2,7,11,15};
    int b[2];
    for(int i=0;i<a;++i){
        for(int j=i;j<a;++j){
            if(nums[i]+nums[j]==target){
                b[0]=i;
                b[1]=j;
                i=a;
            }
        }
    }
    cout<<b[0]<<" "<<b[1]<<endl;
}