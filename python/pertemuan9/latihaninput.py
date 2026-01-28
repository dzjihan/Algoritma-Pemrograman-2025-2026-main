nama = input("Masukan Nama Barang : ")
harga = float(input("Masukan Harga Barang : "))
jumlah = int(input("Masukan Jumlah Beli : "))

total = harga * jumlah

if total > 51300:
    diskon = total * 0.03
else:
    diskon = 0
    
total_bayar = total - diskon

print("=====STRUK PEMBELIAN=====")
print("Nama Barang   : ", nama)
print("Harga Satuan  : Rp. ", harga)
print("Jumlah Beli   : ", jumlah)
print("Total Harga   : Rp. ", total)
print("Diskon        : Rp. ", diskon)
print("Total Bayar   : Rp. ", total_bayar)
print("=========================")