import math

putaran = 5
jarak = 14
# jarak = putaran * keliling, keliling = 2 * pi * r
r = jarak / (putaran * 2 * math.pi)
print("Diketahui :")
print("Pak Dengklek mengelilingi taman = %d Putaran" % putaran)
print("Jarak tempuh Pak Dengklek = %d Kilometer" % jarak)
print("Jawaban :")
print("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer" % r)