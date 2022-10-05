#include <iostream>
#include <string>
using namespace std;

int main(){
    //int a[9]={1,1,2,3,3,4,4,8,8};
    int a[7]={3,3,7,7,10,11,11};
    int b=0,c=7;
    for(int i=0;i<c;i=i+2){
        if(a[i]!=a[i+1]){
            b=a[i];
            i=c;
        }
    }
    cout<<b<<endl;
    return 0;
}