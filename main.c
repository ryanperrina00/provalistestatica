#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXPILA 5

int push(int testa, int pila[]){
    int n;
    if(testa==MAXPILA) return 3;
    else{
        printf("Inserisci valore\n");
        scanf("&d",&n);
        fflush(stdin);
        testa++;
        pila[testa]=n;

    }
}
int pop(int testa, int pila[]){
    if(testa==0) return 9;
    else{
            printf("%d\n",pila[testa]);
            testa--;
    }
    return 0;
    }
int clear(int testa,int pila[]){
for(int k=0;k<testa;k++){
    pila[k]=0;
    printf("pila azzerata");
}
return 0;
}
bool isempty(int testa){
    return (testa==-1);
}
int main(){
    int pila[MAXPILA],count,testa=0,scelta;
    printf("questa e' il menu di scelta\n");
    while(scelta!=5){
    printf("1)inserisci valore\n");
    printf("2)estrai ultimo valore\n");
    printf("3)visualizza lo stato della pila\n");
    printf("4)azzera la pila\n");
    printf("5)per uscire\n");
    scanf("%d",&scelta);
    fflush(stdin);
    count=testa;
    switch(scelta){
        case 1:push(testa,pila);
            break;
        case 2: pop(testa,pila);
            break;
        case 3: isempty(testa);
            break;
        case 4:getchar(); clear(count,pila);
            break;
        case 5: exit(1);
            break;}}
            return 0;}



