template <typename Int>
Int euclidean_gcd(Int x, Int y) {
    if (y == 0) return a;
    return euclidean_gcd<Int>(y, x % y);
}
