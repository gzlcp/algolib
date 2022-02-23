#include <vector>

struct UnionFind {
    int n;
    std::vector<int> par;

    UnionFind(int n) : n(n), par(n, -1) {}

    int find(int x) { return (par[x] < 0) ? x : (par[x] = find(par[x])); }

    bool same(int x, int y) { return (find(x) == find(y)); }

    int size(int x) { return -par[find(x)]; }

    bool unite(int x, int y) {
        if (find(x) == find(y)) return false;

        if (size(x) < size(y)) std::swap(x, y);
        par[find(x)] += par[find(y)];
        par[find(y)] = find(x);
        return true;
    }
};
