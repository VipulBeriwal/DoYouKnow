'''
[<start> : <end> : <sign = direction, magnitude = steps>]
Rules -
RULE1-
  if start point is not mentioned,
    if stride > 0
      default start is 0 
    else:
      start point is last character of string that is -1. start is -1

RULE2-
  Negative stride means that move backwards from that index/position by n steps if provided otherwise 1
  
RULE3-
  If moving backward, the string ends, iterator will stop.
  If moving forwards. the string ends, iterator will stop.
  
RULE4-
  If moving backward, and end > start, it will not print it.
  if moving forward, end <start, it will not print it
  
'''

ss = "vipul beriwal"

print(ss[4]) 
print(ss[-3]) 
print(ss[6:11]) 
print(ss[:5]) 
print(ss[7:]) 
print(ss[-4:-1]) 
print(ss[6:11:1]) 
print(ss[0:12:2]) 
print(ss[0:12:4]) 
print(ss[::4]) 
print(ss[::-1])
print(ss[::-2]) 
print(ss[6:1:-3])
print(ss[-4:-1:-1]) 
print(ss[-4:-5:-1]) 
print(ss[::1])
print(ss[1:0:1])
print(ss[0::-1])
