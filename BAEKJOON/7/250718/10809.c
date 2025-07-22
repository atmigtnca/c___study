#include<stdio.h>

int main(void){
    int arr[26], k=0;
    char dkf[26], eksdj[100] = {'\0'};

    for (int i = 0; i < 26; i++) arr[i] = -1;
    for (char i = 'a'; i <= 'z'; i++, k++) dkf[k] = i;
  
    scanf("%s", eksdj);

    for (int i = 0;; i++){
        for (int j = 0; j < 26; j++){
            if (eksdj[i] == '\0') goto jump;
            else if (eksdj[i] == dkf[j]){
                arr[j] = i;
                dkf[j] = ' ';
            }
        }
    }

    jump:
    
    for (int i = 0; i < 26; i++) printf("%d ", arr[i]);
    return 0;
}