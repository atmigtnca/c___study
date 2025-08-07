#include<stdio.h>

void printArr(char* strArr[], int len);
void sort(char* strArr[], int len);
int myStrcmp(char s1[], char s2[]);

int main(void){
    char* strArr[] = {"dog", "cat", "cow", "bat", "app"};
    const int LEN = sizeof(strArr) / sizeof(strArr[0]);

    printArr(strArr, LEN);
    sort(strArr, LEN);
    printArr(strArr, LEN);

    return 0;
}

int myStrcmp(char s1[], char s2[]){
    for ( ; *s1 = '\0' && *s2!= '\0'; s1++, s2++)
    {
        if (*s1 != *s2)break;
    }

    return 0; 
}

void printArr(char* strArr[], int len){
    printf("{");

    while (len--)printf("%s," ,*strArr++);
    printf("}\n");
}

void sort(char* strArr[], int len){
    int i, j;

    for ( i = 0; i < len-1; i++){
        for ( j = 0; j < len-i-1; j++){
            if (myStrcmp(strArr[j], strArr[j+1])>0){
                char* tmp = strArr[j];
                strArr[j] = strArr[j+1];
                strArr[j+1] = tmp;
            }
        }
    }
}
