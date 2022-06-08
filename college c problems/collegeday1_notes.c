//Introduction to C programs:
//There are 5 generations of pragramming languages:
    //1st generation: machine language-binary(0 and 1)
    //2nd generation: assembly language programming-interpreter
    //3rd generation: high level programming language-C,C++,java
    //4th generation:statement-like languages-python(user friendly)
    //5th generation:graphical interfaces used for coding-operating system


#include <stdio.h> //calls the input-output package just as the import line in java


//int main()//syntax of method(function) - return_type function_name()
//{
    //return 0;//since the return type is int so the returning value should be a integer e.g. return 1234 would also work
    
    //int a,b;
    //a=10;
    //b=20;
    //int sum=a+b;
    //printf("The sum of %d and %d is %d",a,b,sum);
    //return 0;
//}


int sumof(int a,int b){
    int sum= a+b;
    return sum;
}
int main(){
    int a,b;
    a=10;
    b=20;
    int sum= sumof(a,b);
    printf("%d",sum);
    return 0;
}

//garbage value is one which has no use.
//-single line comment syntax
/* 
multiline comment syntax
*/