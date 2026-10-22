//week07-4better.cpp 學習計畫 Simulation 第3題 超難
//LeetCode 1275. Find Winner on a Tic Tac Toe Game 井字遊戲
class Solution {
public://大資料結構moves,裡面裝中資料結構 vector<int>move,裡面再裝小資料結構int i,j
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={0};//用C語言的陣列,模擬井字遊戲3*3共9個格子,先放0
        string result[3]={"Draw","A","B"};//結果的字母
        int who=1;//1:A 2:B
        for(vector<int>move:moves){//迴圈,逐一處理中資料結構
            int i=move[0],j=move[1];
            a[i][j]=who;//現在輪到who來下棋

            if(a[i][0]==who && a[i][1]==who &&a[i][2]==who)return result[who];
            if(a[0][j]==who && a[1][j]==who &&a[2][j]==who)return result[who];

            if(a[0][0]==who && a[1][1]==who &&a[2][2]==who)return result[who];//斜線左上右下
            if(a[2][0]==who && a[1][1]==who &&a[0][2]==who)return result[who];//斜線左下右上

            if(who==1)who=2;
            else who=1;
        }
        if(moves.size()==9) return "Draw";//最後離開迴圈,沒有人贏,就平手Draw(這是錯的!!!)
        else return "Pending";
    }
};
