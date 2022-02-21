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
  bundledCode: "#line 1 \"number/euclidean_gcd.cpp\"\ntemplate <typename Int>\nInt\
    \ euclidean_gcd(Int x, Int y) {\n    if (y == 0) return a;\n    return euclidean_gcd<Int>(y,\
    \ x % y);\n}\n"
  code: "template <typename Int>\nInt euclidean_gcd(Int x, Int y) {\n    if (y ==\
    \ 0) return a;\n    return euclidean_gcd<Int>(y, x % y);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: number/euclidean_gcd.cpp
  requiredBy: []
  timestamp: '2022-02-22 03:17:31+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: number/euclidean_gcd.cpp
layout: document
title: "\u30E6\u30FC\u30AF\u30EA\u30C3\u30C9\u306E\u4E92\u9664\u6CD5"
---

## 説明

ユークリッドの互除法によって，二つの数の最大公約数を計算する．

* `euclidean_gcd(x, y)` : $x$ と $y$ の最大公約数を計算する．

## 計算量

* `euclidean_gcd(x, y)`  : $O(\log x + \log y)$
