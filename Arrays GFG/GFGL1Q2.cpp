#include<iostream>

using namespace std;

int main(){
    int size_of_input {};
    cout<<"Enter size of imput array"<<endl;
    cin>>size_of_input;
    int array[size_of_input];
    cout<<"Please give elements of array"<<endl;
    for(int i {}; i < size_of_input; i++){
        cin>>array[i];
    }
    for(int i {};i < size_of_input-1; i++){
        if(array[i]<array[i+1]){
            int temp {array[i]};
            array[i]= array[i+1];
            array[i+1]= temp;
        }
    }
    cout<<"Maximum number is "<<array[0]<<endl;
    cout<<"Minimum number is "<<array[size_of_input-1]<<endl;
    return 0;
}