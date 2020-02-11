# Challenge 3 - Infix and Postfix

There are two main ways to notate mathematical expressions. Infix notation and Postfix notation. Infix is difficult for computers to read and Postfix is difficult for humans to read. Your task is to create two functions, one to convert Infix to Postfix and another to convert Postfix to Infix.

Infix notation:

`(5 * 3) + 1`

Postfix notation:

`5 3 * 1 +`

Some helpful articles:

https://en.wikipedia.org/wiki/Infix_notation

https://en.wikipedia.org/wiki/Reverse_Polish_notation

A handy online converter for checking your code:

https://www.mathblog.dk/tools/infix-postfix-converter/

## Examples

`infix_to_postfix("(17 / 2) + (3 * 9)"): 17 2 / 3 9 * +`

`postfix_to_infix("7 9 + 12 + 4.3 2 ^ + 4 *"): (7 + 9 + 12 + (4.3 ^ 2)) * 4`
