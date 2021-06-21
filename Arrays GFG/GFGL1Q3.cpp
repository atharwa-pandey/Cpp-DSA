#include<iostream>

using namespace std;

int main (){
    int size_array {};
    cout<<"Enter size of array: ";
    cin>>size_array;
    cout<<"Enter elements of array: "<<endl;
    int array[size_array];
    int reverse_array[size_array];
    for(int i {};i<size_array;++i){
        cin>>array[i];
        reverse_array[size_array - 1 - i] = array[i];
    }
    cout<<"Reverse array is : "<<endl;
    for(int i {}; i< size_array;++i){
        cout<<reverse_array[i]<<" ";
    }
    cout<<endl;
    return 0;
}