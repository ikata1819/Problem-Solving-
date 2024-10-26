# include <stdio.h>

int  main () {
    int x,y;
    for(int i=0; i<5;i++){scanf("%d%d",&x,&y);
    if(x==0 && y==0){
        printf("Point (%d, %d) lies on the Origin",x,y);
    }
    else if(x==0 && y!=0){
        printf("Point (%d, %d) lies on Y-axis",x,y);
    }
    else if(x!=0 && y==0){
        printf("Point (%d, %d) lies on X-axis",x,y);
    }
    else {
        printf("Point (%d, %d) neither lie on X-axis nor on Y-axis",x,y);
    }
    }
    return 0;
}
