---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data-structures/union-find.cpp
    title: "Union-Find Tree\uFF08\u7D20\u96C6\u5408\u30C7\u30FC\u30BF\u69CB\u9020\uFF09"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A
  bundledCode: "#line 1 \"tests/data-structures/union-find.test.cpp\"\n#define PROBLEM\
    \ \\\n    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A\"\
    \n#line 1 \"data-structures/union-find.cpp\"\n#include <vector>\n\nstruct UnionFind\
    \ {\n    int n;\n    std::vector<int> par;\n\n    UnionFind(int n) : n(n), par(n,\
    \ -1) {}\n\n    int find(int x) { return (par[x] < 0) ? x : (par[x] = find(par[x]));\
    \ }\n\n    bool same(int x, int y) { return (find(x) == find(y)); }\n\n    int\
    \ size(int x) { return -par[find(x)]; }\n\n    bool unite(int x, int y) {\n  \
    \      if (find(x) == find(y)) return false;\n\n        if (size(x) < size(y))\
    \ std::swap(x, y);\n        par[find(x)] += par[find(y)];\n        par[find(y)]\
    \ = find(x);\n        return true;\n    }\n};\n#line 4 \"tests/data-structures/union-find.test.cpp\"\
    \n\n#include <iostream>\n#include <string>\nusing namespace std;\n\nint main()\
    \ {\n    int n, q;\n    cin >> n >> q;\n\n    UnionFind union_find(n);\n\n   \
    \ for (int i = 0; i < q; i++) {\n        int com, x, y;\n        cin >> com >>\
    \ x >> y;\n        if (com == 0)\n            union_find.unite(x, y);\n      \
    \  else\n            cout << (union_find.same(x, y) ? 1 : 0) << endl;\n    }\n\
    }\n"
  code: "#define PROBLEM \\\n    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A\"\
    \n#include \"../../data-structures/union-find.cpp\"\n\n#include <iostream>\n#include\
    \ <string>\nusing namespace std;\n\nint main() {\n    int n, q;\n    cin >> n\
    \ >> q;\n\n    UnionFind union_find(n);\n\n    for (int i = 0; i < q; i++) {\n\
    \        int com, x, y;\n        cin >> com >> x >> y;\n        if (com == 0)\n\
    \            union_find.unite(x, y);\n        else\n            cout << (union_find.same(x,\
    \ y) ? 1 : 0) << endl;\n    }\n}\n"
  dependsOn:
  - data-structures/union-find.cpp
  isVerificationFile: true
  path: tests/data-structures/union-find.test.cpp
  requiredBy: []
  timestamp: '2022-02-24 00:00:51+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: tests/data-structures/union-find.test.cpp
layout: document
redirect_from:
- /verify/tests/data-structures/union-find.test.cpp
- /verify/tests/data-structures/union-find.test.cpp.html
title: tests/data-structures/union-find.test.cpp
---
