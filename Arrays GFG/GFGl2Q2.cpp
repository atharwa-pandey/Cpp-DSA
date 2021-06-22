#include<iostream>

using namespace std;
void bubble_sort(int arr[],int size_of_input);

int main(){
    int n;
    cout<<"Please give value of n:"<<endl;
    cin>>n;
    int array[n-1];
    cout<<"Please give n-1 elements:"<<endl;
    for(int i {};i<n-1;++i){
        cin>>array[i];
    }
    int missing_number {};
    bubble_sort(array,n-1);
    for(int i {1};i<n;i++){
        if(array[i-1]!=i){
            missing_number =i;
            break;
        }
    }
    cout<<"Missing number is "<<missing_number<<endl;
    return 0;
}
void bubble_sort(int array[],int size_of_input){
    int count {};
     for(int i {};i < size_of_input-1; i++){
        if(array[i]>array[i+1]){
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

// Method 1: This method uses the technique of the summation formula. 

// Approach: The length of the array is n-1. So the sum of all n elements, i.e sum of numbers from 1 to n can be calculated using the formula n*(n+1)/2. Now find the sum of all the elements in the array and subtract it from the sum of first n natural numbers, it will be the value of the missing element.
// Algorithm: 
// Calculate the sum of first n natural numbers as sumtotal= n*(n+1)/2
// Create a variable sum to store the sum of array elements.
// Traverse the array from start to end.
// Update the value of sum as sum = sum + array[i]
// Print the missing number as sumtotal – sum