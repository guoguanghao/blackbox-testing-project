#include "binary_search.c"
#include <stdlib.h>
#include <time.h>
int main(void){
    int count =0;
    srand(time(NULL));
    for (int i = 0; i < 21; i++){
        for (int j=i+1; j < 21;j++){
            count++;
            unsigned char NewArray[21]={0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,10};//The last one is key
            unsigned char* NewArrayP =& NewArray[0];
            // *NewArrayP++=*DefaultP++;
            NewArray[i]=rand() % 40+1;
            NewArray[j]=rand() % 40+1;
            printf("The input array ");
            for (int m=0;m<20;m++){
                printf("%d ",NewArray[m]);
            }
            unsigned char key= NewArray[20];
            printf(" key = %d\n",key);
            sorting(NewArrayP,20);
            int result=BinarySearch(NewArrayP,key,20);
            //printf("%d",result);
            if (result==-1){
                printf("The element is not in the array\n");
            }else{
                printf("The element is present at index " "%d\n",result);
            }
            int flag = oracle(NewArrayP,20 , key, result);
            if (flag == -1)
            printf("sort fail"  "%d\n", count);
            else if (flag == -2)
            printf("search fail" "%d\n", count);
            else
            printf("pass\n");
            printf("\n");
            
        }
    }
    
printf("%d ",count);   
}