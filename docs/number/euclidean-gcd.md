---
title: Euclidean Algorithm（ユークリッドの互除法）
documentation_of: //number/euclidean-gcd.cpp
---

## 説明

ユークリッドの互除法によって，二つの数の最大公約数を計算する．

* `euclidean_gcd(x, y)` : $x$ と $y$ の最大公約数を計算する．

## 計算量

* `euclidean_gcd(x, y)` : $O(\log x + \log y)$

## メモ

* 二つの数 $x \geq y$ について，$\frac{x}{2} > (x \bmod y)$ が成り立つ．よって，一回の再帰呼び出しで，$x + y$ の値が $k~(< \frac{3}{4})$ 倍される．

## 参考文献

* [ユークリッドの互除法 - Wikipedia](https://w.wiki/4sVj)
