#include <stdio.h>

//void foo(int *a){
// *a = *a + 100;
//}
//int main(){
//  int a =12;
//  int *b = &a;
//  foo(b);
//  printf("%d",*b);
//  return 0;
//}

//int main(){
//    int a = 25;
//    void *ptr = &a;
//    printf("%d",*(int *)ptr);
//
//    return 0;
//}


//int main(){
//    int a[] = {10,9};
//    printf("%d",*(a+1));
//    
//    return 0;
//}



int foo(int *x){
    return (*x);
}
int main(){
  int a =12;
  int *b = &a;
  printf("%d",foo(b));
  return 0;
}
