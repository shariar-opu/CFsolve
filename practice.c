#include<stdio.h>
int main(){
    // int arr[5][5];
    // //input
    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; j < 5; j++){
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // //output
    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; j < 5; j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    char ch[10];
    for(int i = 0; i < 5; i++){
        scanf("%c", &ch[i]);
    }

    for(int i = 0; i < 10; i++){
        if(ch[i] == '\0'){
            break;
        }
        printf("%c\n", ch[i]);
    }

}