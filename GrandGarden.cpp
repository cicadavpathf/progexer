#include <iostream>
#include <cstdlib>

// C - Grand Garden
// 公式解説では
// 1. 高さ0がない限りすべてに水をくべる(高さ-1する)
// 2. 高さ0がある場合、高さ0の要素の左側と右側で分けて、それぞれに1.の処理から行う
// といった再帰的な処理方法が示されていた。
// 下の自分のコードは、入力を配列として持たず
// 高さ0以外かつ一つ前の要素の高さより大きい場合に、その差を回数に加える
// という方法で解決した。 ※実際のテストケース通るかは知らない
// 処理としては公式解説の再帰が、並列的に処理できる点で優れていると思う。
int main()
{
    int n = 0;
    int h = 0;
    int count = 0;
    int pre = 0;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &h);
        if(h != 0 && pre < h) count += h - pre;
        pre = h;
    }
    printf("%d", count);
}