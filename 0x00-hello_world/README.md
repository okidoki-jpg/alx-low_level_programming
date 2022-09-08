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


