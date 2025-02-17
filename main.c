#include<stdio.h>
int main(void){
    int valor,a,b,i,j;
    scanf("%d",&valor);
    if((valor<=0)||(valor>10)){
        system("exit");
    }
      else{
    printf("x ");
    for(i=1;i<=valor;i++){
          if(i==valor){
        printf("%d",i);
    }
        else{
    printf("%d ",i);
        }
    }
    printf("\n");
    for(j=1;j<=10;j++){
        if(j==valor){
        printf("%d ",j);
        }
        else{
        printf("%d ",j);
        }
        for(a=1;a<valor+1;a++){
        if(a==valor){
            b=j*a;
            if(b==valor){
        printf("%d",b);
            }
            else{
        printf("%d",b);
        }
        }
        else{
            b=a*j;
            printf("%d ",b);
        }
    }
printf("\n");
    }
    }
  return(0);
}