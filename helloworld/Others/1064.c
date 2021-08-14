typedef struct {
  int x, y;
} c;
c q[3];
i, n, m;
int f(void *a, void *b) {
  n = ((c *)a)->x;
  m = ((c *)b)->x;
  return n > m ? 1 : n < m ? -1 : 0;
}
double l(c a, c b) { return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)); }
main() {
  for (; i++ < 3;)
    scanf("%d%d", &(q[i - 1].x), &(q[i - 1].y));
  qsort(q, 3, sizeof(c), f);
  c d = {q[0].x + q[2].x - q[1].x, q[0].y + q[2].y - q[1].y};
  printf("%f", l(q[0], q[2]) + l(q[1], d) - 2 * l(q[1], q[0]));
}