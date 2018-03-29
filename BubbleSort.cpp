#include<iostream>
#include "TemplateCollection.cpp"
using namespace std;
int main(){
    int temp = 0;
    int array[] ={32,-76,35,0,1,2,9};
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 0; i< size;i++){
        for(int j = 0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                swappy(&array[j],&array[j+1]);
            }

        }
    }
    for(int i:array){
        cout<<i<<endl;
    }

}
