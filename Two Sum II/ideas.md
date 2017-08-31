If you conduct an o(n^2) algorithm, which is a double loop through the array, you will get a TLE from leetCode.
A beautiful algorithm will be to search from the beginning and the end.
If the sum of the two numbers is not the target, you just simply move forward the first index or do the opposite to the second index.
Thus, the algorithm will have an o(n) complexity.