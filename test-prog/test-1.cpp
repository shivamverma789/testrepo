#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6};
    int temp =arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }
    }
    cout<<temp;
}