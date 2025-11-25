/*
### 故事背景

你是個室內設計師，想要用正方形磁磚鋪滿一個長方形的房間，且不想要切割磁磚。為了讓磁磚最大化，你需要找出長和寬的最大公因數 (GCD)。這也是著名的歐幾里得演算法 (Euclidean Algorithm) 的應用！

### 歐幾里得演算法 (Euclidean Algorithm)

這是一個用於計算兩個整數最大公因數的高效算法。其核心思想基於以下遞迴關係：

$$
\text{gcd}(a, b) = \begin{cases} 
      a & \text{if } b = 0 \\
      \text{gcd}(b, a \% b) & \text{if } b > 0 
\end{cases}
$$

**運作範例**：計算 `gcd(48, 18)`

1. `48 % 18 = 12` $\rightarrow$ 轉換為求 `gcd(18, 12)`
2. `18 % 12 = 6` $\rightarrow$ 轉換為求 `gcd(12, 6)`
3. `12 % 6 = 0` $\rightarrow$ 轉換為求 `gcd(6, 0)`
4. 當第二個數為 0 時，第一個數 `6` 即為結果。
### 題目說明

讀取兩個整數 `a` 和 `b`，計算並印出它們的最大公因數。

**要求：**

1. **必須**實作並使用遞迴函數：
    - `int gcd(int a, int b)`：回傳 `a` 和 `b` 的最大公因數。
2. **限制：** 本題**嚴格禁止使用任何迴圈** (for, while, do-while)，違者不予計分。助教將會檢查關鍵字。

### 輸入格式

一行包含兩個整數：`a b` (a, b > 0)

### 輸出格式

一行：`a` 和 `b` 的最大公因數
*/
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}
