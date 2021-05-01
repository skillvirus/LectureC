#include <stdio.h>

int main()
{
    int i, j;
    
    printf("크기 비교용 변수 첫번째 : ");
    scanf("%d", &i);
    printf("크기 비교용 변수 두번째 : ");
    scanf("%d", &j);
    
    if(i > j)
    {
        printf("%d 는 %d 보다 큽니다. \n", i, j);
    }
        
    if(i < j)
    {
        printf("%d 는 %d 보다 작습니다. \n", i, j);
    }
    
    if (i == j)
    {
        printf("%d 와 %d는 같습니다. \n", i, j);
    }
    
    if (i >= j)
    {
        printf("%d는 %d보다 크거나 같습니다. \n", i, j);
    }
    
    if (i <= j)
    {
        printf("%d는 %d보다 작거나 같습니다. \n", i, j);
    }
    
    if (i != j)  //i 와 j 가 다르면
    {
        printf("%d 는 %d 와(과) 다릅니다 \n", i, j);
    }
    
    return 0;
}