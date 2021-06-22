#include<iostream>

using namespace std;

int main(){
    int size_array {};
    cout<<"Please give size of array"<<endl; 
    cin>>size_array;
    int array[size_array] ;
    cout<<"Please give elements of array:"<<endl;
    for(int i {};i<size_array;++i){
        cin>>array[i];
    }
    int count0 {},count1{},count2{};
    for(int i {};i<size_array;++i){
        if(0==array[i]){
            count0++;
        }
        else if(1==array[i]){
            count1++;
        }
        else if(2==array[i]){
            count2++;
        }
    }
    int array_output[size_array];
    for(int i {};i<count0;++i){
        array_output[i]=0;
    }
    for(int i {count0};i<count0+count1;++i){
        array_output[i]=1;
    }
    for(int i {count0+count1};i<size_array;++i){
        array_output[i]=2;
    }
    for(int i {};i<size_array;++i){
        cout<<array_output[i]<<" ";
    }
    cout<<endl;
    return 0;
}