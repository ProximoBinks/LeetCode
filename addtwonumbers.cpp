#include <iostream>
#include <string>
using namespace std;

int main(){
    int a[3]={2,4,3};
    int b[3]={5,6,4};
    int c[3];

    for(int i=0;i<3;++i){
        c[i]=a[2-i]+b[2-i];
    }
    
    for(int i=0;i<3;++i){
        cout<<c[i]<<" ";
    }
    cout<<endl;
}