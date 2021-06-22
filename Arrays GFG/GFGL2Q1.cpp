#include<iostream>
using namespace std;
void cyclic(int array[], int size_of_input);

int main(){
    int size_of_input {};
    cout<<"Enter size of imput array"<<endl;
    cin>>size_of_input;
    int array[size_of_input];
    cout<<"Please give elements of array"<<endl;
    for(int i {}; i < size_of_input; i++){
        cin>>array[i];
    }
    cyclic(array,size_of_input);
    for(int i {};i<size_of_input;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}
void cyclic(int array[], int size_of_input){
    int temp {array[size_of_input-1]};
    for(int i {};i<size_of_input;i++){
        array[size_of_input-1-i]=array[size_of_input-i-2];
    }
    array[0]=temp;
}