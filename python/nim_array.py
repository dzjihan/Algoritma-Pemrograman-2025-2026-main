nim = input("Maasukkan NIM:")

digit = [int(c) for c in nim]
    
total = 0
for d in digit:
    total+=d

maks = digit[0]
for d in digit:
    if d> maks:
        maks = d

minim = digit[0]
for d in digit:
    if d < minim:
        minim = d
            
rata = total/ len(digit)

rev = []
for i in range(len(digit)-1,-1,-1):
    rev.append(digit[i])

print("Digit    :", digit)
print("Total    :", total)
print("Maksimum   :", maks)
print("Minimum    :", minim)
print("Rata-rata    :", rata)
print("Reverse array  :", rev)
