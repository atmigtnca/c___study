#include<stdio.h>
#include<string.h>

int main(void){
    int n; scanf("%d", &n);
    int age[n]; char name[n][100];

    for (int i = 0; i < n; i++){
        scanf("%d %s", &age[i], name[i]);
    }

    for (int k = 0; k < n; k++){
        for (int j = k; j < n-k; j++){
            if (age[k] > age[j]){
                int tmp = age[j];
                age[j] = age[k];
                age[k] = tmp;
                char cmp[100] = {'\0'};
                strcpy(cmp, name[j]);
                strcpy(name[j], name[k]);
                strcpy(name[k], cmp);
            }
        }
    }


    for (int i = 0; i < n; i++) printf("%d %s\n", age[i], name[i]);
    
    return 0;
}
