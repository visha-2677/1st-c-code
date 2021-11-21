#include<stdio.h>
int func(int array[]){
    for(int i=0;i<3;i++){
        printf("the element %d of number %d\n",i,array[i]);
    }
   // array[0]=4477; 
   // chang array value to in function call by refernce
    return 0;
}
int func1(int* ptr){
    for(int i=0;i<3;i++){
        printf("the element %d of number %d\n",i,*(ptr+i));
    }
    *(ptr+2)=35546;
}
int main(){
    int a[]={1,2,3};
    for(int j=0;j<3;j++){
    printf("the element %d  number %d\n",j,a[j]);
    }
  //  func(a);
    func1(a);
    func1(a);
    //printf("the 0th element number %d\n",a[0]);
    return 0;
}