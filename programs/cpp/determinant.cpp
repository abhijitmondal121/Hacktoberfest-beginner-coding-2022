#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void print_matrix( vector<vector<int>> vi ) {
    for ( int i = 0; i < vi.size(); i++ ) {
        for ( int j = 0; j < vi[i].size(); j++ ) {
            cout << vi[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> minor(vector<vector<int>> arr, int row, int col) {
    vector<vector<int>> mino;

    for(int i = 0; i<arr.size(); i++){
        vector<int> row_vec;
        if (i!=row){
            for(int j = 0; j<arr.size(); j++){
                if(j!=col){
                    row_vec.push_back(arr[i][j]);
                }
            }
            mino.push_back(row_vec);
        }        
    }
    return mino;
}


int determinant(vector<vector<int>> arr, int n){
    int sum = 0;
    //print_matrix(arr);
    if (n==2){
        return arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
    }
    else {
        for(int i = 0; i<n; i++){
            vector<vector<int>> newarr = minor(arr, i, 0);
            sum += arr[i][0]*pow(-1,i)*determinant(newarr, n-1);
            //cout<<"INTERMEDIATE VALUE OF SUM:   "<<sum<<" term--- "<<arr[i][0]<<endl;
        }
        return sum;   
    }
}

int main(){
    int n;
    cout<<"Enter the dimension of the square matrix"<<endl;
    cin>>n;


    vector<vector<int>> arr; // = {{1,5,6,4,3},{9,7,6,5,4},{7,6,0,9,7},{6,5,4,9,6},{2,9,0,5,4}};
    printf("Enter the elements\n");
    for(int i = 0; i<n; i++){
        vector<int> row_vec;
        for(int j = 0; j<n; j++){
            int temp;
            cin>>temp;
            row_vec.push_back(temp);
        }
        arr.push_back(row_vec);
    }
    printf("The matrix you entered is: \n");
    print_matrix(arr);
    int det = determinant(arr,n);
    cout<<"The determinant of the given matrix is "<<det<<endl;
    return 0;
}
