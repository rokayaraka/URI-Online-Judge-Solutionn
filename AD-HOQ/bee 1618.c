#include<stdio.h>
 int main()
 {
     int t;
     scanf("%d", &t);
     int ax,bx,cx,dx,ay,by,cy,dy,rx,ry;
     while(t--)
     {
        scanf("%d %d %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy,&rx, &ry);
        if(rx>=ax && rx<=bx && rx>=dx && rx<=cx && ry>=ay && ry>=by && ry<=cy && ry<=dy)
            printf("1\n");
        else
            printf("0\n");
     }
 }
