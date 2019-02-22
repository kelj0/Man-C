# C Notes

* [Hello world](#hello-world)
* [Variables](#variables)
* [Printing](#printing)
* [Loops](#loops)
* [Symbolic constants](#symbolic-constants)
---

##### Hello world<a name="hello-world"></a>
```c
#include<stdio.h> //Include standard input/output library

int main(){
    printf("Hello, world\n");
    return 0;
}
```

#####  Variables<a name="variables"></a>
```c
int a = 20;
int b = 10;
printf("a == %d , b == %d\n", a,b)
// a == 20 , b == 10
```

##### Printing<a name="printing"></a>
```c
#include <stdio.h>

int main(){
    printf("Hey");
    //Hey

    int a = 10;
    double b = 5.2;    
    printf("a == %d\nb == %d");
    /*
      a == 10
      b == 5.2
    */


    return 0;
}
```

##### Loops<a name="loops"></a>
```c

// while
int count = 0;
while(count<10){
    printf("Counting up to 10 -> %d",count);
    count++;
}

//for
for(int i = 1; i<11;++i){
    printf("counting to 10 -> %d" % i)
}
```

##### Symbolic constants<a name="symbolic-constatns"></a>
```c
//its a bad practice to bury "magic numbers" in a program etc
#include <stdio.h>

#define LOWER 0
#define UPPER 10
#define STEP 1

int main(){
    for(int i = LOWER;i<UPPER;i+=STEP){
        printf("i is %d\n", i);
    }
}
// as you can see we here use define
// A #define line defines a symbolic name or symbolic constant to be a particular string of chars
// #define name replacement list
 
```


