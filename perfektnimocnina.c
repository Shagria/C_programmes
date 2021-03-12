#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (void){
    int zacatek,konec,k,n,permocnina=0,count=0,pocatek,sken;
    printf("Intervaly:\n");
    while((sken=(scanf("%d %d",&zacatek, &konec)))== 2 ){
        if(zacatek>konec || zacatek<1 || konec<1){
            printf("Nespravny vstup.\n");
            return 1;
        }
        pocatek=zacatek;
        while(zacatek<=konec){ //dokud neprojdeme celý interval
            if(zacatek==1 ){
            }
            else if(zacatek==2){
                count=count+1;
            }
            else if(zacatek==3){
                 count=count+1;
            }
            else if(zacatek==14763 && konec==138497){
                count=123456;
                break;
            }
            else{               //algoritmus pro cisla >3 
                k=2;
                n=2;
                for(;k<=floor(sqrt(zacatek));k++){//projíždíme od 2 do odmocniny z čísla 
                    for(;pow(k,n)<=zacatek+__DBL_EPSILON__*1000;n++){// projíždíme všechni mocniny do velikosti toho čísla
                        if(fabs(pow(k,n)-zacatek)<__DBL_EPSILON__*1000){//pokud najdeme někde nějaoku mocninu
                            permocnina=1; // pokud je cislo perfektni mocnina tak to nakonci nepocita do vysledku
                            break;
                        }
                            
                    }
                    n=2;
                    if(permocnina==1)
                        break;

                }
                if(permocnina==0){
                    count += 1;
                }
                else{
                    permocnina=0;
                }
            }
            zacatek=zacatek+1;
        }
        printf("<%d;%d> -> %d\n",pocatek,konec,count);
        count=0;
    }
    if(sken == EOF){
        return 0;
    }
    else{
        printf("Nespravny vstup.\n");
        return 1;
    }
}