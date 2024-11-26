
#include<stdio.h>
void main(){
    int count=1;
    for (int row = 0; row < 5; row++){
        for(int col=0;col<5;col++){
            if(row==0 || row==4){
                printf("1 ");
            }
            else{
                if (col==0 || col==4)
                {
                    printf("1 ");
                }
                else{
                    printf("0 ");
                }
                
            }
        }
        printf("\n");
    }
    
}
