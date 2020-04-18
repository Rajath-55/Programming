# Use the file name mbox-short.txt as the file name
fname = input("Enter file name: ")
su = 0.0
count=0.0
fh = open(fname)
for line in fh:
    if not line.startswith("X-DSPAM-Confidence:") : continue
    r = line[19:]
    k =float(r)
    su= su+k
    count=count+1
    
print("Average spam confidence:", su/count)
