#include <stdio.h>
#include <stdlib.h>
char xo[10];
int over=0;
void check(void){
    int nx=0,no=0,i;
    for(i=1;i<=3;i++){
            if(xo[i]=='X') nx++;
            if(xo[i]=='O') no++;
            if(nx==3){printf("Player X is the winner"); over++;}
            if(no==3){printf("Player O is the winner"); over++;}
    }
    nx=no=0;
    for(i=4;i<=6;i++){
            if(xo[i]=='X') nx++;
            if(xo[i]=='O') no++;
            if(nx==3){printf("Player X is the winner"); over++;}
            if(no==3){printf("Player O is the winner"); over++;}
    }
    nx=no=0;
    for(i=7;i<=9;i++){
            if(xo[i]=='X') nx++;
            if(xo[i]=='O') no++;
            if(nx==3){printf("Player X is the winner"); over++;}
            if(no==3){printf("Player O is the winner"); over++;}
    }
    nx=no=0;
    for(i=1;i<=7;i+=3){
            if(xo[i]=='X') nx++;
            if(xo[i]=='O') no++;
            if(nx==3){printf("Player X is the winner"); over++;}
            if(no==3){printf("Player O is the winner"); over++;}
    }
    nx=no=0;
    for(i=2;i<=8;i+=3){
            if(xo[i]=='X') nx++;
            if(xo[i]=='O') no++;
            if(nx==3){printf("Player X is the winner"); over++;}
            if(no==3){printf("Player O is the winner"); over++;}
    }
    nx=no=0;
    for(i=3;i<=9;i+=3){
            if(xo[i]=='X') nx++;
            if(xo[i]=='O') no++;
            if(nx==3){printf("Player X is the winner"); over++;}
            if(no==3){printf("Player O is the winner"); over++;}
    }
    nx=no=0;
    for(i=1;i<=9;i+=4){
            if(xo[i]=='X') nx++;
            if(xo[i]=='O') no++;
            if(nx==3){printf("Player X is the winner"); over++;}
            if(no==3){printf("Player O is the winner"); over++;}
    }
    nx=no=0;
    for(i=3;i<=7;i+=2){
            if(xo[i]=='X') nx++;
            if(xo[i]=='O') no++;
            if(nx==3){printf("Player X is the winner"); over++;}
            if(no==3){printf("Player O is the winner"); over++;}
    }
}

int main()
{
    int m[10],loc[10],j,i,k=1,s=0;
    for(i=1;i<=9;i++) m[i]=0;
    for(i=1;i<=9;i++) loc[i]=0;
    printf("Player X:\n");
    scanf("%d",&m[1]);
    loc[m[1]]=m[1];
    xo[m[1]]='X';
    while(1){
       for(j=1;j<=9;j++){
           while(loc[j]==j){
               printf(" %c ",xo[j]);
               if(j%3==0) printf("\n");
               else printf("|");
               j++;
           }
           if(j==10) break;
           if(j%3==0){printf("   \n"); s++;}
           if(s==0){printf("   |");}
           s=0;
       }
       check();
       if(over==1) return 0;
       k++;
       if(k==10) break;
       if(k%2==0) printf("Player O:\n");
       else printf("Player X:\n");
       scanf("%d",&m[k]);
       loc[m[k]]=m[k];
       if(k%2==0) xo[m[k]]='O';
       else xo[m[k]]='X';
    }
    printf("Draw");
}
