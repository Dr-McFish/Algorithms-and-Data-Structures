# SequenceRecursionRelation

### Generalized algorithm for finding the nth term of first or second order recursion relation defined sequence in O(n) time

## Story/Background

I once made an algorithm to find the nth fibonacci number in O(n) by recursion. (This is significant because the naive way of doing it by recursion involves calling the function twice inside itself, resulting in a lot of unnecessary calculations that are repeated, and the resulting time is actually O(2^n)! It is noticeably slow, taking 1-2 minutes to calculate the 40 fibonacci number.) I achieved this by saving the result of the last function inside a static/global variable, so that it is not calculated agin, much like a human might calculate fibonacci numbers. However this is quite boring, because there are probably faster ways of calculating fibonacci numbers.

In school I learned about sequences and I was inspired to generalize this algorithm to any sequence defined by a second order recurrence relation, by having an input of a function be another function via a function pointer.

## C and C++

The minor difference between C and C++ versions is that the C++ is slightly more seamless, the functions work by reference, instead of by pointer, so the caller doest have to bother putting the `&` operator. Also, in C++ the caller can can use a lambda expression to use as the function for recursion series instead of defining a whole new function elsewhere first. I have NOT made this object oriented with a class though.