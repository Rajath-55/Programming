name = input("Enter file:")
if len(name) < 1 : name = "mbox-short.txt"
handle = open(name)
words = dict()
for line in handle:
    r = line.split()
    for word in r:
        if r[0]=='From':
            words[r[1]] = words.get(r[1], 0) +1
        else:
            continue
wordcount = -1;
val= None
for k,v in words.items():
    if v>wordcount :
        wordcount = v
        val = k
    
print(val, wordcount-30)