int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *r=(int*)malloc(2*sizeof(int));
    int i,j=0;
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
      {
         if(*(nums+i)+ *(nums+j)==target)
          { r[0]=i;
            r[1]=j;
           *returnSize=2;
           return r;
          }
      }
    }
  return returnSize;
}