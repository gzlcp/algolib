---
title: Union-Find Tree（素集合データ構造）
documentation_of: //data-structures/union-find.cpp
---

## 説明

集合 $S = \\{0, \ldots, n - 1\\}$ の分割 $\\{P_0, \ldots, P_{k - 1}\\}$ を管理するデータ構造．

$k = n$，$P_i = \\{i\\}$ として初期化され，以下の操作が可能である．

* `unite(x, y)` : $x \in P_i$，$y \in P_j$ として，$P_i$ と $P_j$ を併合し `true` を返す．（$P_i = P_j$ の場合，何もせず `false` を返す．）
* `find(x)` : $x \in P_i$ として，$P_i$ の代表元を返す．（$P_i$ の代表元は，`unite` 操作を挟むと変わりうる．）
* `same(x, y)` : $x \in P_i$，$y \in P_j$ として，$P_i = P_j$ かどうかを返す．
* `size(x)` : $x \in P_i$ として，$\|P_i\|$ を返す．

## 計算量

* $\textrm{amortized}~O(\alpha(n))$（$\alpha$ は逆アッカーマン関数）

## 参考文献

* [素集合データ構造 - Wikipedia](https://w.wiki/4SK8)
* [UnionFindTree に関する知見の諸々 - noshi91のメモ](https://noshi91.hatenablog.com/entry/2018/05/30/191943)
* [Union Find の計算量 - 37zigenのHP](https://37zigen.com/union-find-complexity-1/)
* [アッカーマン関数 - Wikipeida](https://w.wiki/456T)
