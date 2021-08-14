// n,m loop time
// i,j index for loop
// a,b,x,y coordinate of departure and destination
// q,w,e C_x C_y r
// XOR
// f for result
i, j, f;
main(n, m, a, b, x, y, q, w, e) {
  for (scanf("%d", &n); i++ < n; printf("%d\n", f), f = 0)
    for (scanf("%d%d%d%d%d", &a, &b, &x, &y, &m), j = 0; j++ < m;
         scanf("%d%d%d", &q, &w, &e), f +=
                                      pow(a - q, 2) + pow(b - w, 2) < e * e ^
                                      pow(x - q, 2) + pow(y - w, 2) < e * e)
      ;
}