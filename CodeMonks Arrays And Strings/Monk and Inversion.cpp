#include<iostream>

using namespace std;

int main(){
    int test {};
    cin>>test;
    while(test--){
        int n {};
        cin>>n;
        int matrix[n][n] ;
        for(int i {};i<n;++i){
            for(int j {};j<n;++j){
                cin>>matrix[i][j];
            }
        }
        int count{},highest{};
        for(int i {};i<n;++i){
            for(int j{};j<n;++j){
                highest=matrix[i][j];
                for(int k{i};k<n;k++){
                    for(int l{j};l<n;++l){
                    if(highest>matrix[k][l]){
                        count++;
                    }
                    }
                }

            }
        }
        cout<<count<<endl;
    }
    return 0;
}