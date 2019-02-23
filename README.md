# C Notes

* [Hello world](#hello-world)
* [Variables](#variables)
* [Printing](#printing)
* [Loops](#loops)
* [Symbolic constants](#symbolic-constants)
* [CharacterIO](#charIO)
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

##### CharacterIO<a name="charIO"></a>
```c
// standard library provides several functions for reading or writing one char at a time
c = getchar(); // reads next input character from a text stream and returns that as value
putchar(c); // prints char eatch time its called


// Example of program that echoes what you input
#include <stdio.h>

int main(){
    int c;
    c = getchar();
    while(c != EOF){ // EOF marks 'end of file'
        putchar(c);
        c = getchar();
    }
    return 0;
}
// now you might ask why we used int and not char ?
/* *quoted from The C programming language*
The problem is distinguishing the end of input from valid data. The solution is that getchar
returns a distinctive value when there is no more input, a value that cannot be confused with
any real character. This value is called EOF , for ``end of file''. We must declare c to be a type
big enough to hold any value that getchar returns. We can't use char since c must be big
enough to hold EOF in addition to any possible char. Therefore we use int.
*/

// We can also write our echo program this way
#include <stdio.h>
int main(){
    int c;
    while((c = getchar()) != EOF) // we can store value in c in while check
        putchar(c);
    return 0;
}

```

