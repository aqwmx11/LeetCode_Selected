This is a question reminding me of the importance of refreshing bit manipulation:)
XOR is the key for solution, note that XOR operation is commutative and associative, and A XOR B=0 iff A=B
However, using dict in Python to calculate the frequency is a very straightforward way
Another solution is to calculate 2*sum(set(nums))-sum(nums)