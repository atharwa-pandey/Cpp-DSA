#include<iostream>

using namespace std;

int main(){
    cout<<"Enter size of array:"<<endl;
    int size_array {};
    cin>>size_array;
    cout<<"Enter the elements of array:"<<endl;
    int array[size_array];
    for(int i {}; i<size_array;++i){
        cin>>array[i];
    }
    cout<<"Enter the range in which key is checked:"<<endl;
    int k {};
    cin>>k;
    cout<<"Enter the key:"<<endl;
    int key {};
    cin>>key;
    int no_of_parts {size_array/k};
    int count {};
    for(int i {};i<no_of_parts;++i){
       for(int j {};j<k;++j){
           if(array[i*k +j]==key){
               count++;
               break;
           }
       } 
    }
    if (count == no_of_parts && k<no_of_parts){
        cout<<"Yes"<<endl;
    }
    if (count == no_of_parts && k>no_of_parts){
        cout<<"NO"<<endl;
    }
    if(count!= no_of_parts){
        cout<<"NO"<<endl;
    }
    return 0;

}