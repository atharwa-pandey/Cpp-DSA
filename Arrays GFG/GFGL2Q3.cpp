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
    int sum{};
    cout<<"Please give the required sum:"<<endl;
    cin>>sum;
    int count {};
    for(int i {};i<size_of_input;++i){
        for(int j{};j<size_of_input;++j){
            if(i==j){
                continue;
            }
            else if(array[i]+ array[j]==sum){
                count++;
            }
        }
    }
    cout<<"Number of pairs: "<<count/2<<endl;
    return 0;
}
