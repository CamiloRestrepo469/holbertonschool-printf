# printf
Holberton School project
Camilo Restrepo and Andres Rivera

# _printf() in the C Programming Language
This project is about recreating the C library function printf. The function printf sends formatted output to `stdout` (standard output stream) by formatting the argument(s) passed in and converting the arguments(s) into a character string. This version will be used as `_printf`.

## Environment
Our printf has been tested on Ubuntu 20.04
Tests done in Ubuntu 20.04  on [SSH](ssh ae08fe735b1e@ae08fe735b1e.e3e4a3cb.hbtn-cod.io)

## Repository Breakdown
Once cloned over, the repository will contain the following files:

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
|      main.h   | header file with prototypes           |



### Format tags
Format tags implemented in _printf

| **specifier** | **output**                            |
|---------------|---------------------------------------|
| c             | characters                            |
| s             | string of characters                  |
| d or i        | int to signed decimal                 |

## How to Use
There are two ways to use the _printf function in your code.
First step is to clone the repository into your directory
```
$ git clone https://github.com/CamiloRestrepo469/holbertonschool-printf.git
```
Once that is done, you can create a static library or use the gcc -Wall


### Compile without a static library for _printf
Make sure the _printf directory is in the same directory as your `YOUR-FILE.c` file and then run the following command:
```
gcc -Wall -Werror -Wextra -pedantic -I $PWD/printf printf/*.c <YOUR-FILE>.c
```
The `-I` flag allows you to include the directory of the header file `main.h`. `$PWD/printf` takes the absolute path of the _print directory while `printf/*.c` compiles all your `.c` files in _printf

## Use in code
### How to use _printf in your code
Please see the following example when _printf is implemented in your code:

```
#include <main.h>

int main(void)
{
  int _printf(const char *format, ...);
  return (0):
 }
```
This is an an example output:
```
$ Let's try to print a simple sentence.
```
## Notes
This _printf function currently does not support special flags [+ , - , `, \0 , #], field, width or precision.

## Known Bugs
There are no known bugs at the time.

### Authors

*Camilo Restrepo* - [Github](https://github.com/CamiloRestrepo469/) 
||*Andres Rivera* - [Github](https://github.com/andresrivera/) 

