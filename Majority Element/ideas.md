According to the discussion board, this is actually called "Moore's vote algorithm".  
You definitely can use a map to solve these problems, and also takes o(n) complexity, but using this algorithm really saves space.  
The trick is that the frequency is above n/2, so when we cancel out every pairs of different values, we only get the majority element.