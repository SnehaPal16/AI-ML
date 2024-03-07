num=int(input("enter number: "))
sum=0
temp=num
i=len(str(num))
while num!=0:
    digit=num%10
    sum=sum+digit**i
    num=num//10
if sum==temp:
    print("armstrong")
else:
    print("not an armstrong")
