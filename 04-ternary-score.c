// 三項演算子で、03-if-score.c と同じ点数の決め方を1行で書く
#include <stdio.h>

int main(void)
{
    int score = 75;
    int point = (score >= 60) ? 10 : 0;

    printf("%s\n", (point >= 10) ? "合格" : "不合格");
    return 0;
}
