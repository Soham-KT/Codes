circle=lambda r : 3.1415*r**2
cylinder=lambda r, h: 3.1415*r**2*h
triangle=lambda a, b, c, s: (s*(s-a)*(s-b)*(s-c))**(1/2)

r=int(input("Enter radius for area of circle: "))
print("Area of circle is:", circle(r))

r=int(input("Enter radius for area of cylinder: "))
h=int(input("Enter height for area of cylinder: "))
print("Area of cylinder is:", cylinder(r, h))

a=int(input("Enter side a of triangle: "))
b=int(input("Enter side b of triangle: "))
c=int(input("Enter side c of triangle: "))
s=(a+b+c)/2
print("Area of triangle is:", triangle(a, b, c, s))