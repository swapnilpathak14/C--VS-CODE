largest = None
smallest = None
while True:
    num = input("Enter a number: ")
    
    
    try:
        the_num = int(num)
        
    except:
          print('Invalid input')
          continue
    if num>largest:
        largest=num
        print('Maximum is ',num)
    elif num<smallest:
        smallest=num
        print('Minimum is ',num)
    
    
    if num == "done" : break
    print(num)

print("Maximum", largest)