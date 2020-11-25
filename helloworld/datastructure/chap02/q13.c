#include <stdio.h>

int dbym[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

typedef struct{
    int y;
    int m;
    int d;
} Date;

Date DateOf(int y, int m, int d);
Date After(Date x, int n);
Date Before(Date x, int n);
int dnum(Date x);
void yunyear(Date x);

int main(){
    int a, b, c;
    printf("Enter the Date(YYYY MM DD): ");
    scanf("%d %d %d", &a, &b, &c);
    
    Date date = DateOf(a, b, c);
    /*
    printf("Enter the After-Date: ");
    scanf("%d", &a);

    Date adate = After(date, a);

    printf("Enter the Before-Date: ");
    scanf("%d", &a);

    Date bdate = Before(date, a);
    */

   printf("Year: %d Month: %d Date: %d", date.y, date.m, date.d);
   return 0;
}

Date DateOf(int y, int m, int d){
    Date date = {y, m, d};
    return date;
}

Date After(Date x, int n){
    

}

Date Before(Date x, int n){

}

int dnum(Date x){
    int dnum = 0;
    for (int i = 1; i < x.m; i++){
        dnum += dbym[i];
    }
    dnum += x.d;
    return dnum;
}

void yunyear(Date x){
    int a = x.y;
    //if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        
}