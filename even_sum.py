def even_sum(sv, ev):
    if sv >= ev:
        return -1
    elif sv % 2 == 0:
        return sum(range(sv,ev + 1, 2))
    else:
        return sum(range(sv + 1,ev + 1, 2))
  

    
  

   

