# C_practice

# install vs code 

 install mingw and gcc, gccg++ (gnu gcc) compiler checkbox
 copy path of bin in installed gw
 paste in environtmental variables,system variables,path, edit, new, paste the path

install c intelligence extention

write the code in vs code but run in cmd
open the path through cmd  


C:\Users\yuvraj singh\Documents\C_practice>gcc -o m.exe basics_1.c

C:\Users\yuvraj singh\Documents\C_practice>m.exe
Hello World
C:\Users\yuvraj singh\Documents\C_practice>

# boilerplate code

## #include<stdio.h>

include:- tells the compiler to inlcude the contents of a specofied file before compilation

<stdio..h>

standard input output header file. it contains declaration for function like printf(for output) and scanf(for input) which are essentials.

## !! note 

The first code which will run will always be in the main fucntion 

```c
int main(
    // ...our code goes here;
)
/*
breakdown ⬇️

the int keyword indicates that the fucntion main will return an integer or a simple number. if code runs, it returns 0, greater number or -1 means program failed / error.
*/
```
