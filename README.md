# code vuln checker

this checks if your c program has any unwanted functions that might cause memory leak or buffer overflow
if it does detect a function thats bad it will tell you ofc.

## usage

1. replace ur "your_code" variable with ur c code

2. ```c
   char your_code[] = "replace_here";
   ```
after compile the code: gcc protect.c -o anti_vuln
