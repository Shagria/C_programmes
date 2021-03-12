#include<stdio.h>

int main (void) {
    int p, v, i=0,r,z,k,s,g;
    printf("Zadejte pocet poli:\n");
    if (scanf("%d",&p)!=1 || p<=0 ){
        printf("Nespravny vstup.\n");
        return 1;
    }
    printf("Zadejte velikost pole:\n");
    if (scanf("%d",&v)!=1 || v<=0 ){
        printf("Nespravny vstup.\n");
        return 1;
    }
    printf("+");
    for (i=1;i<=p;i++ ){
      for(z=0;z<v;z++)
        printf("-");
    }
    printf("+\n");
    if(p%2==0){
      for(k=0;k<p/2;k++){
        for(r=0;r<v;r++){
          printf("|");
          for(s=0;s<p/2;s++){
            for(g=0;g<v;g++){
              printf(" ");
            }
            for(g=0;g<v;g++){
              printf("X");
            }
          }
          printf("|\n");
        }
        for(r=0;r<v;r++){
          printf("|");
          for(s=0;s<p/2;s++){
            for(g=0;g<v;g++){
              printf("X");
            }
            for(g=0;g<v;g++){
              printf(" ");
            }
          }
          printf("|\n");
        }
      }
    }
    else{
      for(r=0;r<v;r++){
        printf("|");
        for(g=0;g<v;g++){
          printf(" ");
        }
        for(s=0;s<((p-1)/2);s++){
          for(g=0;g<v;g++){
            printf("X");
          }
          for(g=0;g<v;g++){
            printf(" ");
          }
        }
        printf("|\n");
      }
      for(k=0;k<((p-1)/2);k++){
        for(r=0;r<v;r++){
          printf("|");
          for(g=0;g<v;g++){
            printf("X");
          }
          for(s=0;s<((p-1)/2);s++){
            for(g=0;g<v;g++){
              printf(" ");
            }
            for(g=0;g<v;g++){
              printf("X");
            }
          }
          printf("|\n");
        }
        for(r=0;r<v;r++){
          printf("|");
          for(g=0;g<v;g++){
            printf(" ");
          }
          for(s=0;s<((p-1)/2);s++){
            for(g=0;g<v;g++){
              printf("X");
            }
            for(g=0;g<v;g++){
              printf(" ");
            }
          }
          printf("|\n");
        }
      }
    }
    printf("+");
    for (i=1;i<=p;i++ ){
      for(z=0;z<v;z++)
        printf("-");
    }
    printf("+\n");
    return 0;
}