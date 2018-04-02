#include<iostream>
#include "TemplateCollection.cpp"
using namespace std;
int main(){
    int array[3][3] ={{9,8,7},{6,5,4},{3,2,1}};
    int row_size = 3 , col_size = 3;
    for(int k =0;k< row_size*col_size-1;k++){
        for(int i =0;i<row_size;i++){
            for(int j =0; j<col_size;j++){
                if(j==col_size-1 && i != row_size-1){
                    if(array[i][j]>array[i+1][0]){
                        int temp = array[i+1][0];
                        array[i+1][0] = array[i][j];
                        array[i][j] = temp;
                }


            }
            else{
                if(array[i][j]>array[i][j+1]){
                    int temp = array[i][j];
                    array[i][j] = array[i][j+1];
                    array[i][j+1] = temp;
                }
            }
        }
    }
    }

    for(int i = 0;i< row_size;i++){
        for(int j = 0;j<col_size;j++){
            cout<<array[i][j]<<"  ";
        }
        cout<<endl;
    }
}
