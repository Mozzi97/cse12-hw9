#include <stdio.h>
#include <stdlib.h>
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



//int foo(int *x){
//    return (*x);
//}
//int main(){
//  int a =12;
//  int *b = &a;
//  printf("%d",foo(b));
//  return 0;
//}

//int main(){
//	int* x = malloc(5*sizeof(int));
//	int y[5]={5,5,5,5,5};
//
//	*x=y;
//	int i;
//	for(i=0;i<5;++i){
//		printf("%d",*(x+1));
//	}
//	free(x);
//
//	return 0;
//}

//int main(){
//	int* x = malloc(5*sizeof(int));
//
//	int i;
//	for(i=0;i<5;++i){
//		x[i]=5;
//	}
//	for(i=0;i<5;++i){
//		printf("%d",*(x+1));
//	}
//	free(x);
//
//	return 0;
//}

//int* foo(){
//	int *x = malloc(3*sizeof(int));
//	return x;
//}
//int main(){
//	int* y =foo();
//	int i;
//	for(i=0;i>3;++i){
//		printf("%d",*(y+i));
//	}
//	free(y);
//	return 0;
//}


int* foo(){
	int *x = malloc(1*sizeof(int));
	*x=5;
	free(x);
	return x;
}
int main(){
	int* y =foo();
	printf("%d",*y);
	return 0;
}
