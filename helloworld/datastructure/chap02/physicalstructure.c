#include <stdio.h>
#include <stdlib.h>
#define VMAX 21

typedef struct {
    char name[20];
    int height;
    double vision;
} PhysCheck;

double ave_height(const PhysCheck dat[], int n){
    int i;
    double sum = 0;
    for (i = 0; i < n; i++)
        sum += dat[i].height;
    return sum /n;
}

void dist_vision(const PhysCheck dat[], int n, int dist[]){
    int i;
    for (i = 0; i < VMAX; i++)
        dist[i] = 0;
    for (i = 0; i < n; i++)
        if(dat[i].vision >= 0.0 && dat[i].vision <= VMAX / 10)
            dist[(int)(dat[i].vision * 10)]++;
}

int main(){
    int nx, i;
    PhysCheck *x;
    printf("Number of Student: ");
    scanf("%d", &nx);
    x = (PhysCheck*)malloc(nx * sizeof(PhysCheck));
    for (i = 0; i < nx; i++){
        printf("Name, Height, Vision: ");
        scanf("%s %d %lf", &x[i].name, &x[i].height, &x[i].vision);
        while (getchar() != '\n')
            continue;
    }
    int vdist[VMAX];
    puts("Result");
    puts("--------------");
    for (i = 0; i < nx; i++)
        printf("%-18s%4d%5.1f\n", x[i].name, x[i].height, x[i].vision);
    printf("\nAverage Height: %5.1f cm\n", ave_height(x, nx));
    dist_vision(x, nx, vdist);
    printf("\nVision Distribution\n");
    for (i = 0; i < VMAX; i++)
        printf("%3.1f ~ : %2d\n", i/10.0, vdist[i]);

    free(x);

    return 0;

}
