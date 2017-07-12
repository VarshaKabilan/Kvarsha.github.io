def isarmstrong(n):
      num = n
      string = str(n)
      no_of_digits = len(string)
      
      s = 0
      
      while n > 0:
          d = n % 10
          s += d ** no_of_digits
          n = n // 10
          print (s)
      return s == num
    
   
 

