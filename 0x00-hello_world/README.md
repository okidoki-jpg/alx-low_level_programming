0-preprocessor:
    run $CFILE through a preprocessor
    andbsave the result as "c"

1-compiler:
    compile $CFILE without linking and
    return a ".o" file

2-assembler:
    compile $CFILE with the same output
    filename as the .c file and a .s
    file extension

3-name:
    compile $CFILE into an executable
    named cisfun

4-puts.c:
    write a C program that uses puts to
    print a string to the standard
    output

5-printf.c:
    write a C program that uses printf
    to print a string to the standard 
    output

6-size.c:
    write a C program that prints the
    size of various data types on
    the standard output

100-intel:
    write a script that generates the
    assembly code (Intel syntax) of
    $CFILE and save it in an output 
    file with a .s extension

101-quote.c:
    write a C program that prints a 
    string without the use of printf
    or puts
