# Questions Week 1

1. Linux command to move to another directory
  
   `cd dir_name`
   `cd ..`

2. Linux command to open a file in nano

   `emacs file_name`

3. Linux command to compile a c file

   `gcc -o helloWorld helloWorld.c`

4. Linux command to run a compiled c file

   `./helloWorld`

5. Print "Hello World" in Java / Now perform the same Operation in C.

| Java							   | C						     |
| ---------------------------------------------------------|-------------------------------------------------|
| `public class HelloWorld {                              `| `#include <stdio.h>			    `|
| `    public static void main(String[] args) {		  `| `						    `|
| ` 							  `| `int main() {				    `|
| `        System.out.println("Hello, World");            `| `    printf("Hello, World! \n");		    `|
| `    }						  `| `                                              `|
| `}							  `| `    return 0;                                 `|
| `                                                       `| `}                                             `|

6. Assign the variable "var" the value of 1 in Java, then comment the code / Now perform the same Operation in C.

| Java                                                     | C                                               |
| ---------------------------------------------------------|-------------------------------------------------|
| `public class VarClass {                                `| `void main() {                                 `|      
| `    public static void main(String[] args) {           `| `    /* Integer var assigned value 1*/         `|
| `        /* Integer var assigned value 1*/              `| `    int var = 1;                              `|
| `        int var = 1;					  `| `}   			                    `|
| `    }                                                  `| `                                              `|
| `}                                                      `| `                                              `|
| `                                                       `| `                                              `|

7. Using an if statement in Java print "ON" if an integer var is equal to 1 or "OFF" if var is anything else/ Now perform the same operation in C.

| Java                                                     | C                                               |
| ---------------------------------------------------------|-------------------------------------------------|
| `public class IfClass {                                 `| `#include <stdio.h>                            `|      
| `    public static void main(String[] args) {           `| `                                              `|
| `        int var = 1;                                   `| `void main() {                                 `|
| `        		                                  `| `    int var = 1;                              `|      
| `        if( var == 1) {                                `| `                                              `|
| `            System.out.println("ON");                  `| `    if( var == 1) {                           `|
| `        }else {                                        `| `        printf("ON");                         `|
| `            System.out.println("OFF");                 `| `	  else {				    `|
| `        }                                              `| `        printf("OFF");                        `|
| `    }                                                  `| `    }                                         `|
| `}                                                      `| `}                                             `|

8. List out the different types of loop control for C.

   - `while (condition) {statement}`
   - `do {statement} while (condition)`
   - `for (int i = 0; i > 10; i++) {statement}
