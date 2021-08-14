t;
long long r;
s(int *a, int *b) {
  t = *a;
  *a = *b;
  *b = t;
}
long long solution(int a, int b) {
  a > b ? s(&a, &b) : 0;
  for (; a <= b; r += a++)
    ;
  return r;
}

main() { printf("%lld", solution(5, 3)); }