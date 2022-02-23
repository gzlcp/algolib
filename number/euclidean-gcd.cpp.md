---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"number/euclidean-gcd.cpp\"\ntemplate <typename Int>\nInt\
    \ euclidean_gcd(Int x, Int y) {\n    if (y == 0) return a;\n    return euclidean_gcd<Int>(y,\
    \ x % y);\n}\n"
  code: "template <typename Int>\nInt euclidean_gcd(Int x, Int y) {\n    if (y ==\
    \ 0) return a;\n    return euclidean_gcd<Int>(y, x % y);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: number/euclidean-gcd.cpp
  requiredBy: []
  timestamp: '2022-02-23 20:17:06+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: number/euclidean-gcd.cpp
layout: document
title: "Euclidean Algorithm\uFF08\u30E6\u30FC\u30AF\u30EA\u30C3\u30C9\u306E\u4E92\u9664\
  \u6CD5\uFF09"
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
