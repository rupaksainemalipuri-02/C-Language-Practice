/*
1 — Weird factorial-like loop (Hard)

Define F(n) as follows: start res = 1. For i = 1 to n:

if i is prime, res = (res * i) % M

else if i is even, res = (res + i) % M

else res = (res ^ i) % M (bitwise XOR, then mod)
Output res. Use M = 1000000007.
Input: single integer n (1 ≤ n ≤ 10^6).
Output: F(n) (one integer).
Note: You may implement primality check per i using trial division (optimize by checking up to sqrt(i)).
Example:
Input: 6
Output: (compute by code)
*/

int func(int n){
  int res = 1;
  int M = 1000000007;
  if 
}
