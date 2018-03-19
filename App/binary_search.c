#include <stdio.h>
void sorting(unsigned char* array,int r)
{
        for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < (r - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < r;k++){
        printf("%d ",array[k]);
    }
    //return array[r];
}
int BinarySearch(unsigned char* array,unsigned char key,int r){
    // for (int k = 0; k < r;k++){
    //      printf("%d ",array[k]);
    //  }
    int l=0;
    int x =(l+r)/2;
    while(r>=l){
        if(array[x]==key){
            return x;
        }
        if (key<array[x]){
            r=x-1;
        }
        else{
            l=x+1;
        }
        x=(l+r)/2;
         //printf("%d\n",x);
    }
    return -1;
};
int oracle(unsigned char* b, int num, unsigned char key, int result)
{
	int i;
	int flag = -1;
	for (i = 0; i < num - 1; i++)
	{
		if (b[i] > b[i + 1])
			return -1; // sort fail;
	}
	for (i = 0; i < num; i++)
	{
		if (b[i] == key)
			flag = 1;
	}
	if (result == -1 && flag == -1)
		return 1; //pass
	else if (result != -1 && flag == 1 && key == b[result])
		return 1;//pass
	else
		return -2; //search fail
}



