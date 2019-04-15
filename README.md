# C Notes [work in progress]

* [Hello world](#hello-world)
* [Variables](#variables)
* [Operators](#operators)
* [Conditional Expressions](#conditional)
* [Printing](#printing)
* [Loops](#loops)
* [Arrays](#arrays)
* [Functions](#functions)
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
// unsigned >= 0 

// int 
int a = 20;
int b = 10;
printf("a == %d , b == %d\n", a,b)
// a == 20 , b == 10

// char
char s = 's';

// string is char array with \0 on end
char str[] = {'t','e','s','t','\0'}; // \0 is needed if we want to print it as string
prinf("%s", str);
//  test

//enum
enum boolean {NO, YES};
// the first name in enum has value 0, the next 1 and so on, unless explicit values are specified
enum months {JAN = 1, FEB, MAR, APR, MAY, JUN,
             JUL, AUG, SEP, OCT, NOV, DEC};
             /* FEB=2, MAR=3... */

// Declarations
int a,b,c;
// same as
int a;
int b;
int c;

/* const -> can be applied to the declaration of any variable to 
            specify that its value will not be changed */
const int a = 10;

```

##### Operators<a name="operators"></a>
```c

/*
    // +
     1+1 = 2
    // -
     1-1 = 0
    // /
     3/2 = 1
    // *
     3*2 = 6
    // %
     5%3 = 2
    // <
     1<2 = true
    // >
     1>2 = false
    // <=
     2<=2 = true
    // >=
     2<=3 = true
    // ==
     2==3 = false
    // !=
     2!=3 = true
    // &&
     true && false = false
     true && true = true
    // ||
     true || false = true
     true || true = true
     false || false = false
    // bitwise operators
    // &
     1&2 = 0
     |01|
     |10|
      00
    // |
     1|2 = 3
     |01|
     |10|
      11
    // ^
     2^3 = 1    5^1 = 4
     |11|       |101|
     |10|       |001|
      01         100
    // ~
     ~2 = 1     ~4 = 3
     |10|       |100|
      01         011
    // >>
     2<<1 = 4
     |0010|
      0100
     4<<1 = 8
     |0100|
      1000
    // <<
     2>>1 = 1
     |10|
      01
*/
```

##### Conditional Expressions<a name="conditional"></a>
```c

// lets say you want to assign a to z if a is bigger than b
if(a > b){
    z = a;
}
else {
    z = b;
}

// if its one line in if you can remove '{' , '}'
if(a < b)
    z = a;
else
    z = b;

// or you can use ternary operator
z = (a>b)? a : b;
//  works like this
// expr1 ? expr2 : expr3
// expr1 is evaluated first, if it is non-zero(true), then expr2 is evaluated, otherwise expr3 is evaluated
// parentheses are not necessary arount the expr1 since precedence of ?: is very low, just above asssignment

// else if
if(a<b)
    // a is < b
else if(a==b)
    // a is == b
else
    // a is > b


// switch
switch(expression){
    case const-expr: statements break;
    case const-expr: statements break;
    default: statements
}
// default is executed if none of the other cases are satisfied, default is optional
//simple example
int c = getchar();
switch(c){
    case 'y': 
        install(); // if you inputed y , install X
        break;
    case 'n':
        quit();   // if you inputed n, we exit
        break;
    default:
        call_menu(); // if you inputed something else, we will ask you again
        break;
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

/*
FORMAT: 
printf("%[flags][width][.precision][length]specifier",X);

/============================\
|         Specifiers         |
\============================/

c - Character
d - Signed decimal integer
i - Signed decimal integer
e - Scientific notation (mantissa/exponent) using e character
E - Scientific notation (mantissa/exponent) using E character
f - Decimal floating point
g - Uses the shorter of %e or %f 	
G - Uses the shorter of %E or %f
o - Signed octal
s - String of characters
u - Unsigned decimal integer 	
x - Unsigned hexadecimal integer	
X - Unsigned hexadecimal integer (capital letters) 	
p - Pointer address
n - Nothing printed
% - Character

/============================\
|            Flags           |
\============================/
- - Left-justify within the given field width; 
    Right justification is the default
    Examples:
     printf("<%-5d>",1); // <     1>
     printf("<%-5d>",1); // <1     >
     printf("<%d>",1);   // <1>

+ - Forces to precede the result with a plus or minus 
   sign (+ or -) even for positive numbers. By default, 
   only negative numbers are preceded with a -ve sign.

(space) - If no sign is going to be written, a blank 
          space is inserted before the value.
# - Used with o, x or X specifiers the value is preceded 
   with 0, 0x or 0X respectively for values different than 
   zero. Used with e, E and f, it forces the written output 
   to contain a decimal point even if no digits would follow. 
   By default, if no digits follow, no decimal point is written. 
   Used with g or G the result is the same as with e or E but 
   trailing zeros are not removed.
   Example:
     printf ("%d %#x %#o",100, 100, 100); // 100 0x64 0144 

0 - Left-pads the number with zeroes (0) instead of spaces, 
   where padding is specified (see width sub-specifier).
   Example:
     printf("Preceding with zeros: %07d \n", 1977); // 0001977



/============================\
|    Length & Description    |
\============================/
h The argument is interpreted as a short int or unsigned 
  short int (only applies to integer specifiers: i, d, o, u, x and X).

l The argument is interpreted as a long int or unsigned long 
  int for integer specifiers (i, d, o, u, x and X), and as a 
  wide character or wide character string for specifiers c and s.

L The argument is interpreted as a long double 
  (only applies to floating point specifiers: e, E, f, g and G).

.2f - prints 2 nums after decimal point

*/
```

##### Loops<a name="loops"></a>
```c
// while
int count = 0;
while(count<10){
    printf("Counting up to 10 -> %d",count);
    count++;
}

// using while loop to count chars in input
int nc;
while(getchar() != EOF)
    ++nc;
printf("%d\n",nc);

//for
for(int i = 1; i<11;++i){
    printf("counting to 10 -> %d" % i)
}
//using for loop to count chars in input
int nc;
for (nc = 0; gechar() != EOF; ++nc)
    ; // we need to add empty body in cause we do all calculations in for (isolated ; is called null sattement)
printf("%d\n", nc);

// the "infinite" for loop, presumably to be broken by other means such as a break or return
for(;;){
    // ..
}
```

##### Arrays<a name="arrays"></a>
```c
int arr[3] = [1,2,3]
for(int i = 0;i<3;++i)
    printf("arr[%d] == %d\n",i,arr[i]);
//arr[0] == 1
//arr[1] == 2
//arr[2] == 3

// Initialize array with etc zeroes
int arr[5] = {0};
for(unsigned i = 0 ; i<5;++i)
    printf("arr[%d] == %d\n",i,arr[i]);
//arr[0] == 0
//arr[1] == 0
//arr[2] == 0
//arr[3] == 0
//arr[4] == 0

```

##### Functions<a name="functions"></a>
```c
/*
return-type function-name(parametar declarations, if any){
    declarations
    statements
    (return if not void)
}
*/


int power(int m, int n); // this is a function declaration 
// power takes 2 parametars (2 ints) and returns int

int power(int m, int n){        // + 
    int p = 1;                  // | this is a function definition
    for(int i = 1;i <= n; ++i)  // |
        p = p * m;              // |
    return p;                   // |
}                               // +

// we can also return nothing (void)
void printHello(){
    printf("Hello from function :)"); 
}

// we can call it later in program like this
int Two_to_the_power_of_three = power(2,3);
printf("%d\n",Two_to_the_power_of_three); // outputs 8

// we can also call it inline with other functions (if it returns a value)
printf("%d\n",power(2,3)); // outputs 8
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
    while((c = getchar()) != EOF) // we can store value in c while checking
        putchar(c);
    return 0;
}

```




