/*
## 題目 1：高塔建築師 (The Tower Architect) - 20分

### 故事背景

你的數學老師不僅想知道 5 個人排隊有幾種排法（階乘），還想知道如果是堆積木，第 1 層 1 個、第 2 層 2 個...第 5 層 5 個，總共需要幾個積木（連加）。請寫一個程式同時計算這兩個數值！

### 題目說明

讀取一個整數 `n`，計算並印出：

1. **階乘 (Factorial)**：$n! = 1 times 2 times 3 dots times n$
2. **連加 (Sum)**：$Sum(n) = 1 + 2 + dots + n$

**要求：**

1. **必須**實作並使用以下兩個遞迴函數：
    - `long long factorial(int n)`：計算階乘。
    - `long long sum(int n)`：計算連加。
2. **限制：** 本題**嚴格禁止使用任何迴圈** (for, while, do-while)，違者不予計分。助教將會檢查關鍵字。
*/
#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
long long sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    cout << sum(n) << endl;    
    return 0;
}
