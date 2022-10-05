#include <iostream>
#include <string>
using namespace std;
int main(){
    int array[8]={4,3,2,7,8,2,3,1};
    int newarray[8];
    int a=8,b=0;
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(array[i]==array[j]){
                newarray[b]=array[i];
                b++;
            }
        }
    }
    for(int i=0;i<b;++i){
        cout<<newarray[i]<<" ";
    }
}