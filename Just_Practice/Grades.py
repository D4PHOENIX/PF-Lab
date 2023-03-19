print("Put your marks below")

a = int(input("Calculus: "))
b = int(input("ICT: "))
c = int(input("ICT Lab: "))
d = int(input("Programming Fundamentals: "))
e = int(input("PF Lab: "))
f = int(input("English: "))
g = int(input("Applied Physics: "))


percentage = ((a+b+c+d+e+f+g)/700)*100
if percentage >= 97:
    print("Your GPA is 4.0 and your grade is A+.")
elif percentage >= 93:
    print("Your GPA is 4.0 and your grade is A.")
elif percentage >= 90:
    print("Your GPA is 3.7 and your grade is A-.")
elif percentage >= 87:
    print("Your GPA is 3.3 and your grade is B+.")
elif percentage >= 83:
    print("Your GPA is 3.0 and your grade is B.")
elif percentage >= 80:
    print("Your GPA is 2.7 and your grade is B-.")
elif percentage >= 77:
    print("Your GPA is 2.3 and your grade is C+.")
elif percentage >= 73:
    print("Your GPA is 2.0 and your grade is C.")
elif percentage >= 70:
    print("Your GPA is 1.7 and your grade is C-.")
elif percentage >= 67:
    print("Your GPA is  and your grade is D+.")
elif percentage >= 60:
    print("Your GPA is 1.0 and your grade is D.")   
elif percentage < 60:
    print("Your GPA is 0.0 and your grade is F.")