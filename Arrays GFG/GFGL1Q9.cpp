#include<iostream>
#include<vector>

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
    int count_negative {}, count_positive{};
    vector<int> negative_numbers;
    vector<int> positive_numbers;
    for(int i {};i<size_array;++i){
        if(array[i]<0){
            count_negative++;
            negative_numbers.push_back(array[i]);
        }
        else {
            count_positive++;
            positive_numbers.push_back(array[i]);
        }
    }
    for(auto var:negative_numbers){
        cout<<var<<" ";
    }
    for(auto var:positive_numbers){
        cout<<var<<" ";
    }
    cout<<endl;
    return 0;
}
