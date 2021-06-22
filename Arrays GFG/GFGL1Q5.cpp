#include<iostream>

using namespace std;
void bubble_sort(int array[],int size_of_input);

int main(){
    int size_of_input {};
    cout<<"Enter size of imput array"<<endl;
    cin>>size_of_input;
    int array[size_of_input];
    cout<<"Please give elements of array"<<endl;
    for(int i {}; i < size_of_input; i++){
        cin>>array[i];
    }
    int k {};
    cout<<"Enter the k value which is to be diplayed:";
    cin>>k;
    bubble_sort(array,size_of_input);   
    cout<<"Highest kth value is "<<array[k]<<endl;
    cout<<"Lowest kth is "<<array[size_of_input-1-k]<<endl;
    return 0;
}
void bubble_sort(int array[],int size_of_input){
    int count {};
     for(int i {};i < size_of_input-1; i++){
        if(array[i]<array[i+1]){
            int temp {array[i]};
            array[i]= array[i+1];
            array[i+1]= temp;
            count++;
        }
        if(count!=0){
            bubble_sort(array,size_of_input);
        }
    }


}