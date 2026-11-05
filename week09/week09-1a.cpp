//week09-1a.cpp 學習計畫Matrix 第2題
//LeetCode 1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N=mat.size();//矩陣的大小NxN
        int ans=0;
        //迴圈,把矩陣的對角線加起來 方法1
        for(int i=0;i<N;i++){//左上、右下對角線
            ans+=mat[i][i];
        }
        for(int i=0;i<N;i++){//左下、右上對角線
            ans+=mat[N-1-i][i];
        }
        if(N%2==1)ans-=mat[N/2][N/2];//扣掉中間重疊
        return ans;
    }
};
