//
//  main.cpp
//  2d array
//
//  Created by Vishal Roy on 19/11/22.
//

#include <iostream>
#include <vector>

using namespace std;

// rotate 2d matrix by 90degree

//void rotate_matrix(vector<vector<int>> &v,int n ){
//
//    // tranpose of matrix
//
//    for( int i=0; i<n;i++ ){
//        for( int j=0; j<i;j++){
//            swap(v[i][j],v[j][i]);
//        }
//    }
//    // reverse the the every row
//
//    for( int i=0; i<n;i++){
//        reverse(v[i].begin(),v[i].end());
//    }
//}



// spiral order of matrix

//void spiral_order(vector<vector<int>> &vec){
//    int left = 0,top=0;
//
//    int right= vec[0].size()-1;
//    int bottom =vec.size()-1;
//
//    int dir =0;
//
//    cout<<" sprial matrix :"<<endl;
//    while(right>=left and top<=bottom){
//        if(dir==0){
//            for( int col =left ;right>=col;col++){
//                cout<<vec[top][col]<<" ";
//            }
//            top++;
//        }
//        else if(dir ==1){
//            for( int row =top ;bottom>=row;row++){
//                cout<<vec[row][right]<<" ";
//            }
//            right--;
//        }
//
//        else if(dir==2){
//            for( int col=right;col<=left;col--){
//                cout<<vec[bottom][col]<<" ";
//            }
//            bottom--;
//        }
//
//        else{
//            for( int row =bottom;top>=row;row++){
//                cout<<vec[row][left]<<" ";
//            }
//            left++;
//        }
//        dir =(dir+1)%4;
//    }
//}
// create matrix in spiral form

void create_matrix(vector<vector<int>> &vec, int n ){
    int left =0;
    int right= n-1;
    int top = 0;
    int bottom = n-1;
    
    int dir=0;
    
    int val =1;
    while(right>=left and top<=bottom){
        if(dir==0){
            for( int col =left ;right>=col;col++){
                vec[top][col]=val++;
            }
            top++;
        }
        else if(dir ==1){
            for( int row =top ;bottom>=row;row++){
                vec[row][right]=val++;
            }
            right--;
        }
        
        else if(dir==2){
            for( int col=right;col<=left;col--){
                vec[bottom][col]=val++;
            }
            bottom--;
        }
        
        else if (dir==3){
            for( int row =bottom;top>=row;row++){
                vec[row][left]=val++;
            }
            left++;
        }
        dir =(dir+1)%4;
    }
    
    cout<<" hello world"<<endl;
}

//    cout<<" enter the elements into array2 :"<< endl;
//    for( int i=0; i< row; i++){
//        for( int j=0; j<col;j++){
//            cin>>arr2[i][j];
//        }
//    }
//    // resultant array is mul
//    // size of ans is col of 1st matrix and row of 2nd matrix
//
//    int mul[row][col];
//
//    for( int i=0; i< row; i++){
//        for( int j=0; j<col;j++){
//            mul[i][j]=0;
//        }
//    }
//    // multiply two matrix
//
//    for( int i=0; i< row;i++){
//        for( int j=0; j<col;j++){
//            for( int k=0; k<col;k++){
//                mul[i][j]+=arr1[i][k]*arr2[k][j];
//            }
//        }
//    }
    // print resultant array
//    cout<<" elemnents of  matrix :"<<endl;
//    for( int i=0; i< row; i++){
//        for( int j=0; j<col;j++){
//            cout<< arr1[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//    // 2d vector is a data type
//
//    vector<vector<int>>V ={{1,1,3,3,3},{1,3,3,2},{3,4,1,1}};
//
//    for( int i=0;i<V.size();i++){
//        for(int j=0;j <V.size();j++){
//            cout<<V[i][j]<<" ";
//        }
//        cout<<endl;
//    }
int main(){
    int n;
    cin>> n;
    
//    vector<vector<int>> vec(n,vector<int>(n));
//
//    for( int i=0; i<n;i++){
//        for( int j=0; j<n;j++){
//            cin>>vec[i][j];
//            cin.ignore(1, ' ');
//        }
//        cout<<endl;
//    }
//    cout<<" matrix before  spiral :"<<endl;
//    for( int i=0;i<n;i++){
//        for( int j=0; j<n;j++){
//            cout<<vec[i][j]<<" ";
//
//        }
//        cout<<endl;
//    }
    vector<vector<int>> v(n,vector<int>(n));
    
    create_matrix(v,n);
    
    for( int i=0;i<n;i++){
        for( int j=0; j<n;j++){
            cout<<v[i][j]<<" ";
     }
    cout<<endl;
    }
    
    
    //rotate_matrix(vec,n);
    
//    cout<<" totated matrix is :"<<endl;
//
//    for( int i=0;i<n;i++){
//        for( int j=0; j<n;j++){
//            cout<<vec[i][j]<<" ";
//        }
//        cout<<endl;
//    }
  
    //spiral_order(vec);
        return 0;
}
