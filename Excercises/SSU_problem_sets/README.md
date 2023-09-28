# Lychrel Numbers

This problem is taken from
[Sample Questions from the 2016 Contest](https://www.seminolestate.edu/computers/competition/samples/2016).

## Description

According to Wikipedia a [Lychrel
number](https://en.wikipedia.org/wiki/Lychrel_number) is a “...natural number
that cannot form a palindrome through the iterative process of repeatedly
reversing its digits and adding the resulting numbers. “. The term "Lychrel" is
credited to Wade VanLandingham formed as an anagram of his girlfriend’s first
name – Cheryl. The process to find non-Lychrel numbers is the following:

1. Start with an integer number > 0. Let’s call this n.
2. Add the reverse order digits of n to n.
3. Repeat the above two steps until the result is a palindrome.

**Iteration 1**: 87 + 78 = 165<br>
**Iteration 2**: 165 + 641 = 726<br>
**Iteration 3**: 726 + 627 = 1353<br>
**Iteration 4**: 1353 + 3531 = 4884<br>

The result in iteration 4 is 4884 which is a palindrome. Therefore 87 is NOT a
Lychrel number. No Lychrel numbers have been proven to exist. In fact most
numbers coalesce into a palindrome fairly quickly. However some do not. The
best known of these is the number 196. You could execute tens of thousands of
iterations starting with 196 and not calculate a palindrome. 

In this problem you must show a positive integer is NOT a Lychrel number by
determining how many iterations are required before the process creates a
palindrome. Display the number of iterations and the resulting palindrome
number. To avoid long run times, stop after a maximum of 10 iterations. If a
number has not coalesced into a palindrome after 10 iterations display the
output shown below for input value 196.

## Test Data
<table>
<tr><th>Input</th><th>Output</th></tr>
<tr>
  <td>87</td>
  <td>Not a Lychrel number after 4 iterations: 4884</td>
</tr>
<tr>
  <td>1689</td>
  <td>Not a Lychrel number after 4 iterations: 56265</td>
</tr>
<tr>
  <td>196</td>
  <td>Still a Lychrel number after 10 iterations: 18211171</td>
</tr>
<tr>
  <td>121</td>
  <td>Not a Lychrel number after 0 iterations: 121</td>
</tr>
<tr>
  <td>786</td>
  <td>Not a Lychrel number after 3 iterations: 9339</td>
</tr>
<tr>
  <td>9</td>
  <td>Not a Lychrel number after 0 iterations: 9</td>
</tr>
<tr>
  <td>99</td>
  <td>Not a Lychrel number after 0 iterations: 99</td>
</tr>
<tr>
  <td>3443</td>
  <td>Not a Lychrel number after 0 iterations: 3443</td>
</tr>
</table>

# :)