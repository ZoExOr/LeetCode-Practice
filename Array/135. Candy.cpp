class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();  // 孩子总数
        int ret = 1;             // 至少分发1个糖果
        int inc = 1, dec = 0, pre = 1;  // 初始化：递增序列长度1，递减序列长度0，pre为前一个孩子的糖果数量

        for (int i = 1; i < n; i++) {  // 从第二个孩子开始遍历
            if (ratings[i] >= ratings[i - 1]) {  // 如果当前孩子的评分大于或等于前一个孩子
                dec = 0;  // 递减序列长度重置为0
                pre = (ratings[i] == ratings[i - 1]) ? 1 : pre + 1;  // 如果评分相同，则糖果数为1；如果评分更高，则糖果数递增
                ret += pre;  // 更新总糖果数
                inc = pre;   // 记录递增序列的长度
            } else {  // 如果当前孩子的评分小于前一个孩子的评分
                dec++;  // 递减序列长度增加
                if (dec == inc) {  // 如果递减序列的长度等于递增序列的长度，说明需要额外补偿
                    dec++;
                }
                ret += dec;  // 更新总糖果数
                pre = 1;     // 当前孩子的糖果数为1
            }
        }
        return ret;  // 返回最少需要分发的糖果总数
    }
};
