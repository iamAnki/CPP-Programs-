#include <iostream>
using namespace std;

int main()
{
    
    int mat1[2][2] = {{2,4} ,{3,4}};
    int mat2[2][2] = {{1,2} ,{1,3}};

    int res[2][2];
    
    int i, j ,k ;
    int x1 = 2 ; int y1 = 2 ; int x2 = 2; int y2 = 2;

    for(i =0 ; i < x1 ; ++i){
        for(j = 0 ; j < y2 ; ++j){
            res[i][j] = 0;
        }
    } ;
    for(i = 0 ; i < x1 ; ++i){
        for(j = 0 ; j < y2 ; ++j){
            for(k = 0 ; k < y1 ; ++k){
                res[i][j] += mat1[i][k] * mat2[k][j] ;
            }
        }
    } ;
 for(i = 0; i < x1; ++i){
    for(j = 0; j < y2; ++j)
    {
        cout << " " << res[i][j] ;
        if(j == y2-1)
            cout << endl;
    }
 };
    return 0;
}
