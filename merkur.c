#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare_int(const void *pa, const void *pb){
    int paa,pbb;
    paa=*(int*)pa;
    pbb=*(int*)pb;
    return paa-pbb;
}
int main (void){
    int scan;
    int a=0;
    int numbers[100000];
    int N = 0;
    printf("Delky nosniku:\n");
    while((scan=scanf("%d",&numbers[a])) != EOF){
        if(scan!=1 || numbers[a]<1 || a>9999){
            printf("Nespravny vstup.\n");
            return 1;
        }
        a = a+1;
        N = N+1;
    }
    if(numbers[2]==0){
        printf("Nespravny vstup.\n");
        return 1;
    }
    qsort(numbers, N , sizeof(int), compare_int);
    const int n=N+1;
    int sorted[n];
    int times[n];
    int count=1;
    int s=0;
    for(int h=0;h<n;h++){
        sorted[h]=0;
        times[h]=0;
    }
    for(int h=0;h<n;h++){
        if(h==0){
            sorted[s]=numbers[h];
            times[s]=count;
        }
        else if(numbers[h]==numbers[h-1]){
            times[s]+=1;
        }
        else{
            s++;
            sorted[s]=numbers[h];
            times[s]=count;
        }
    }
    int finalcount=0;
    for(int k=0;k<n;k++){
        for(int l=times[k];l>=1;l--){
            if(l==3){
                finalcount = finalcount +1;

            }
            else if(l==2){
                int m=1;
                while(sorted[k+m]!=0){
                    if(sorted[k]*2>sorted[k+m]  && sorted[k]+sorted[k+m]>sorted[k]){
                        finalcount= finalcount +1;
                    }
                    m++;
                }
            }
            else if(l==1){
                int m=1;
                while(sorted[k+m]!=0){
                    if(times[k+m]>1){
                        if(sorted[k]+sorted[k+m]>sorted[k+m] && sorted[k+m]+sorted[k+m]>sorted[k]){
                            finalcount=finalcount+1;
                        }
                    }
                    m++;
                }
                m=1;
                while(sorted[k+m+1]!=0){
                    int n=1;
                    while(sorted[k+m+n]!=0){
                        if(sorted[k]+sorted[k+m]>sorted[k+m+n] && sorted[k+m]+sorted[k+m+n]>sorted[k] && sorted[k]+sorted[k+m+n]>sorted[k+m]){
                            finalcount=finalcount+1;
                        }
                        n++;
                    }
                    m++;
                }
            }
        }
    }
    printf("Trojuhelniku: %d\n",finalcount);
    return 0;
}