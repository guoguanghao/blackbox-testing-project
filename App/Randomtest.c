#include "binary_search.c"
#include <stdlib.h>
#include <time.h>
int main(void){
    int count =0;
    srand(time(NULL));
    while(count < 100)
    {
    unsigned char array[20];
    int r = sizeof (array) / sizeof (array[0]);
    for (int i = 0; i < r; i++){
        array[i] = rand() % 50+1;
    }
    for (int j=0; j < r; j++){
        printf("%d ", array[j]);
    }
    unsigned char key=rand() % 50+1;
    printf("key = %d\n",key);
    sorting(&array[0],r);
    int result=BinarySearch(&array[0],key,r);
    if (result==-1){
        printf("The element is not in the array\n");
    }else{
        printf("The element is prensent at index " "%d\n",result);
    }
    int flag = oracle(&array[0], r, key, result);
	if (flag == -1)
	printf("sort fail\n");
	else if (flag == -2)
	printf("search fail\n");
	else
	printf("pass\n");
	printf("\n");
    count++;
    }
}