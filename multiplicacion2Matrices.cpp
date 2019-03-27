#include <iostream>
#define MAX 100
using namespace std;

int main(){
    
    int A[][3] = { {1,2,3},
                   {4,5,6},
                   {7,8,9}};

    int B[][3] = { {5,6,7},
                   {2,1,3},
                   {2,3,1}};
    int C[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            C[i][j] = 0;
            for(int k=0;k<3;k++){
                C[i][j] = C[i][j] + (A[i][k]*B[k][j]);
            }
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

