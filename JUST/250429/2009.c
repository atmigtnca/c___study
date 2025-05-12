#include<stdio.h>

int main(){
    int shortcut;
    printf("단축키를 입력하시오: ");
    scanf("%d", &shortcut);

   switch(shortcut){
        case 1:
            printf("아들 : ");
            break;

        case 2:
            printf("two");
            break;

         case 3:
            printf("three");
            break;
         case 4:
            printf("four");
            break;
    default:
        printf("해당 단축키가 없습니다.\n");
        break;

    
   }
   return 0;
    
}