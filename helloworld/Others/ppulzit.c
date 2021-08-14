s(n) { return n ? n % 10 + s(n / 10) : n; }
(*solution)(int) = s;
main() { printf("%d", solution(1923)); }