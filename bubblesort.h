#include<stdio.h>
#include<string.h>
void bubblesort(int *array,int len){
    for(int i = 0;i<len;i++){
        for(int j = 0;j<len-i;j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}
void bubblesort_str(char **array,int len){
    for(int i = 0;i<len;i++){
        for(int j = 0;j<len-i;j++){
            if(strcmp(array[j],array[j+1])>0){
                char temp[101];
                strcpy(temp, array[j]);
                strcpy(array[j], array[j+1]);
                strcpy(array[j+1], temp);
            }
        }
    }
}
