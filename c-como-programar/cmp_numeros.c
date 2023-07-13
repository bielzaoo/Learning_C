#include <stdio.h>

int main(){
    int num1, num2;

    printf("Insria um núuemro: \n");
    scanf("%d",&num1);

    printf("Insria um núuemro: \n");
    scanf("%d",&num2);

    if (num1 > num2) {
        printf("%d é maior\n", num1);
    }
    if  (num2 > num1){
        printf("%d é maior\n", num2);
    }

    return 0;
}
