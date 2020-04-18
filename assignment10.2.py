name = input("Enter file:")
if len(name) < 1 : name = "mbox-short.txt"
handle = open(name)
hour = dict()
for line in handle:
    words = line.split()
    for word in words:
        if words[0]=='From':
            h = words[5].strip(':')
            he = h[:2]
            hour[he] = hour.get(he, 0) + 1
        else: continue    
           
final = list()
for v,k in hour.items():
    temp = (v,k)
    final.append(temp)
    
    
final = sorted(final)
for k,v in final:
    print(k , int(v/7))