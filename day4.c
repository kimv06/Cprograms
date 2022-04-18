#include <stdio.h>
struct st
{
    int index;
    int key;
    float fl;
    char ch;

};

struct st func(int* arr,int size,int k)
{
    struct st bag1;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == k)
        {
            bag1.key = k;
            bag1.index = i;
            bag1.fl = 0.01;
            bag1.ch = 'a';
            break;
        }
    }
    return bag1;
}
int main()
{
    struct st bag;
    int arr[] = {1,2,3,4,5};
    int k = 2;
    bag = func(arr,5,k);
    printf("The value of key is %d\n",bag.key);
    printf("The value of index is %d\n",bag.index);
    printf("The value of fl is %f\n",bag.fl);
    printf("The value of ch is %c\n",bag.ch);

    return 0;
}