---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../../data-structures/union-find.cpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A\"\
    \n#include \"../../data-structures/union-find.cpp\"\n\n#include <iostream>\n#include\
    \ <string>\nusing namespace std;\n\nint main() {\n    int n, q;\n    cin >> n\
    \ >> q;\n\n    UnionFind union_find(n);\n\n    for (int i = 0; i < q; i++) {\n\
    \        int com, x, y;\n        cin >> com >> x >> y;\n        if (com == 0)\n\
    \            union_find.unite(x, y);\n        else\n            cout << (union_find.same(x,\
    \ y) ? 1 : 0) << endl;\n    }\n}"
  dependsOn: []
  isVerificationFile: true
  path: tests/union-find.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: tests/union-find.test.cpp
layout: document
redirect_from:
- /verify/tests/union-find.test.cpp
- /verify/tests/union-find.test.cpp.html
title: tests/union-find.test.cpp
---