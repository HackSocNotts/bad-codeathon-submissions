print("Enter the number")
num=input()
j=int(num)
i=int(int(num)/int(num))
while i<j:
    if i%((i/i)+(i/i)+(i/i))==i-i:
        if i%((i/i)+(i/i)+(i/i)+(i/i)+(i/i))==i-i:print("Fizz\nBuzz")
        else:print("Fizz ")
    else:
        if i%((i/i)+(i/i)+(i/i))==i-i:print("Buzz")
        else:print(i)
    i=i+(i-(i-1))
