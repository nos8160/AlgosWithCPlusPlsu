#include<iostream>
using namespace std;
int main(){
    int array[4] = {1,14,2,3};
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 1;i<size;i++){
        for(int j =i;j>=0;j--){
            if(array[j]<array[j-1]){
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
    for(int i = 0;i<size;i++){
        cout<<array[i]<<" ";

    }
    cout<<endl;
}
