///week05-3b.cpp 學習計畫 Built-in Functions 第1題
///LeetCode 58. Length of Last Word最後那個字,有幾個字母
///其實前面要寫 #include <stringstream>不過LeetCode幫你偷偷寫好了
class Solution {
public:
    int lengthOfLastWord(string s) {
        ///要用 stringstream 之前,要先#include <stringstream>
        stringstream ss(s);///week05 string字串stream串流(cin也是stream)
        ///week04 C++的圓括號,是丟進去的物件初始化的參數
        string ans;///Week02 C++字串的宣告
        while(ss>>ans){///今天week05-1.cpp有用到 很像cin的iostream
            ///什麼都不做
        }
        return ans.length();///Week01 Week02字串的長度
    }
};
