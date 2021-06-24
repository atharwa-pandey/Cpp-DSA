#include<iostream>

using namespace std;

int main(){
    int test {};
    cin>>test;
    while(test--){
        int array_size {}, rotation {};
        cin>>array_size;
        cin>>rotation;
        if(rotation>array_size){
            rotation= rotation%array_size;
        }
        int array[array_size],array_copy[array_size];
        for(int i{};i<array_size;++i){
            cin>>array[i];
            array_copy[i]=array[i];
        }
        int new_array[rotation] , j{};
        for(int i {array_size-rotation};i<array_size;++i){
            new_array[j]=array[i];
            ++j;
        }
        for(int i {};i<array_size-rotation;++i){
            array[i+rotation]=array_copy[i];
        }
        for(int i{};i<rotation;++i){
            array[i]=new_array[i];
        }
        for(auto var:array){
            cout<<var<<" ";
        }
        cout<<endl;
    }
    return 0;
}