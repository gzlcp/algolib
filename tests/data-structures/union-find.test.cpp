#define PROBLEM \
    "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A"
#include "../../data-structures/union-find.cpp"

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    UnionFind union_find(n);

    for (int i = 0; i < q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0)
            union_find.unite(x, y);
        else
            cout << (union_find.same(x, y) ? 1 : 0) << endl;
    }
}
