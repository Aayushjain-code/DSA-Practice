# Recursions
## What is Recursion? 
The process in which a `function calls itself` directly or indirectly is called recursion and the corresponding function is called as recursive function.
```
// An example of direct recursion
void directRecFun()
{
    // Some code....

    directRecFun();

    // Some code...
}

// An example of indirect recursion
void indirectRecFun1()
{
    // Some code...

    indirectRecFun2();

    // Some code...
}
void indirectRecFun2()
{
    // Some code...

    indirectRecFun1();

    // Some code...
}
```

## Types of Recursions
### Direct Recursion: These can be further categorized into four types:
#### -Tail Recursion: If a recursive function calling itself and that recursive call is the last statement in the function then it’s known as Tail Recursion.After that call the recursive function performs nothing. The function has to process or perform any operation at the time of calling and it does nothing at returning time.
