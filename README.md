# C Notes

* [Hello world](#hello-world)
* [Variables](#variables)
* [Printing](#printing)
* [Loops](#loops)

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

