#include <iostream>
using namespace std;

int main(){
    
    int arr1[101][101];
    int arr2[101][101];
    
    int n, m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<'\n';
    }
}