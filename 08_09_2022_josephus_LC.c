/*
https://practice.geeksforgeeks.org/problems/josephus-problem/1?category%5B%5D=Recursion&category%5B%5D=Recursion&page=1&query=category%5B%5DRecursionpage1category%5B%5DRecursion
*/

if(n==1)
         return 1;
       return ((josephus(n-1, k)+k-1)%n+1);
