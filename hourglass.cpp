#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr)
{
int r,c,result,sum;
result=INT_MIN;
for(r=0;r<=3;r++)
{
  for(c=0;c<=3;c++)   //only till 3 
  {
    sum= arr[r][c]+arr[r][c+1]+arr[r][c+2]+arr[r+1][c+1]+arr[r+2][c]+
                                                            arr[r+2][c+1]+arr[r+2][c+2];  //all 7 parts of hourglass
    result=std::max(result,sum);
  }
 
}
 return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
