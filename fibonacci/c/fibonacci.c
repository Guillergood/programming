#include <stdio.h>
#include <stdlib.h>

int main(int argc , char ** argv){
    int i, n, t1 = 0, t2 = 1, nextTerm;
	//Checks the number of arguments...
    //...if it is greater than 2, aborts
	if(argc > 2){
		printf("Wrong arguments, use\n: %s <number_term> \n %s \n",argv[0],argv[0]);
        exit(-1);
	}
    //...if it is 1, the input is through the terminal
	else if(argc == 1){
		printf("Enter the number of terms: ");
		scanf("%d", &n);
	}
    //...else, it is part of the arguments
    else{
        n = atoi(argv[1]);
    }
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
	
    return 0;
}
