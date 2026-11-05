//week09-1b.cpp 學習計畫Matrix 第2題
//LeetCode 1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N=mat.size();//矩陣的大小NxN
        int ans=0;
        //迴圈,把矩陣的對角線加起來 方法1
        for(int i=0;i<N;i++){//左上、右下對角線
            for(int j=0;j<N;j++){
                if(i==j||i+j==N-1)ans+=mat[i][j];
            }
        }
        return ans;
    }
};
