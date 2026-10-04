import math

alas = 5
tinggi = 12
sisi_miring = int(math.sqrt(alas ** 2 + tinggi ** 2))
keliling = alas + tinggi + sisi_miring
luas = alas * tinggi // 2
print("Diketahui :")
print("Alas = %d cm" % alas)
print("Tinggi = %d cm" % tinggi)
print("Jawab :")
print("Sisi A = %d cm" % alas)
print("Sisi B = %d cm" % tinggi)
print("Sisi C = %d cm" % sisi_miring)
print("Keliling = %d cm" % keliling)
print("Luas = %d cm" % luas)