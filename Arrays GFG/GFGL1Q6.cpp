#include<iostream>

using namespace std;

int main(){
    int size_array {},value {};
    cout<<"Please give size of array"<<endl; 
    cin>>size_array;
    int array[size_array] ;
    cout<<"Please give elements of array:"<<endl;
    for(int i {};i<size_array;++i){
        cin>>array[i];
    }
    cout<<"Please give value to find its occurance:"<<endl;
    cin>>value;
    int count {};
    for(int i {};i<size_array;++i){
        if(value==array[i]){
            count++;
        }
    }
    cout<<"The "<<value<<" has occured "<<count<<" times."<<endl;
    return 0;

}