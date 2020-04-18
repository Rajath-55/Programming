largest = None
smallest = None
while True:
    num = input("Enter a number: ")
    if num == "done" :
        #print(num)
        break
    try:
        
        n = float(num)
    except:
        print("Invalid input")
    
    if smallest is None :
                smallest = n
    else:
       if(smallest>n):
                smallest =n
    if largest is None :
              largest = n;
    else :
        if(largest<n):
               largest = n;
large = int(largest)
small = int(smallest)
print("Maximum is", large)
print("Minimum is", small)