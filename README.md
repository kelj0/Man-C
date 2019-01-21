# C Notes

[Hello_world](#hello-world)
[Printing](#printing)
[Loops](#loops)

---

##### Hello world<a name="hello-world"></a>
```c
#include<stdio.h> //Include standard input/output library

int main(){
    printf("Hello, world\n");
    return 0;
}
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
#include <stdio.h>

int main(){
    int count = 0;
    while(count<10){
        printf("Counting up to 10 -> %d",count);
        count++;        
    }
    return 0;
}

```




