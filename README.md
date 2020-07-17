# Codechef-Find-the-Maximum-Value
### Problem
![](capture.png)
### Program Simulation
<pre>
  Sample Input: 1 2 1
  
  * Using StringStream to Extract the Numbers 1 by 1 *
  
  n = 0
  a[0] = 1
  a[1] = 2
  a[2] = 1
  
  n -= 2
  n = 2
  
  ok = false
  ans = 0
  
  * First Loop *
  
  if(a[0] == n) // false
  else
    ans = max(ans, a[0])
    ans = 1
   
  * Second Loop *
  
  if(a[1] == n) // true
   if(ok) // false
   else 
    ok = true
  
  * Third Loop *
  
  if(a[2] == n) // false
  else
    ans = max(ans, a[2])
    ans = 1
   
  print ans
   
  Final Output:
  1
  <hr>
  Sample Output: 3 1 2 8
   
  * Using StringStream to Extract the Numbers 1 by 1 *
   
  n = 0
  a[0] = 3
  a[1] = 1
  a[2] = 2
  a[3] = 8
  
  n -= 2
  n = 3
  
  * First Loop *
  
  if(a[1] == n) // true
    if(ok) // false
    else
      ok = true
      
  * Second Loop *
  
  if(a[1] == n) // false
  else
    ans = max(ans, a[1])
    ans = 1
    
  * Third Loop *
  
  if(a[2] == n) // false
  else
    ans = max(ans, a[2])
    ans = 2
  
  * Fourth Loop *
  
  if(a[3] == n) // false
  else
    ans = max(ans, a[3])
    ans = 8
    
  print ans
  
  Final Output:
  8
  <hr>
  Sample Input: 1 5 1 4 3 2
  
  * Using StringStream to Extract the Numbers * 
  
  n = 0
  a[0] = 1
  a[1] = 5
  a[2] = 1
  a[3] = 4
  a[4] = 3
  a[5] = 2
  
  n -= 2
  n = 5
  
  * First Loop *
  
  if(a[1] == n) // false
  else
    ans = max(ans a[0])
    ans = 1
   
  * Second Loop *
  
  if(a[1] == n) // true
    if(ok) // false
    else
      ok = true
  
  * Third Loop *
  
  if(a[2] == n) // false
  else
    ans = max(ans, a[2])
    ans = 1
    
  * Fourth Loop * 
  
  if(a[3] == n) // false
  else 
    ans = max(ans, a[3])
    ans = 4
  
  * Fifth Loop *
  
  if(a[4] == n) // false
  else
    ans = max(ans, a[4])
    ans = 4
  
  * Sixth Loop *
  
  if(a[5] == n) // false
  else 
    ans = max(ans, a[5])
    ans = 4
  
  print ans
  
  Final Output:
  4
