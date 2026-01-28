import os

nama = input("Masukkan Nama Anda: ")
benar = input("Apakah Anda Yakin Ingin Melanjutkan Transaksi? (Y/N): ")

saldo_awal = 0

print("=====================================================")

if benar.lower() == "y":
    os.system("cls" if os.name == "nt" else "clear")
    print("=====================================================")
    print(f"Selamat Datang Di ATM, {nama}")
    print(f"Saldo Anda Saat Ini: Rp {saldo_awal}")
    print("=====================================================")
else:
    os.system("cls" if os.name == "nt" else "clear")
    print("=====================================================")
    print("          Terima Kasih Atas Kunjungan Anda           ")
    print("=====================================================")
    exit()

input_saldo = int(input("Masukkan Saldo : "))

print("=====================================================")
print(f"NAMA ANDA              : {nama}")
print(f"SALDO ANDA SEKARANG    : Rp {input_saldo}")
print("=====================================================\n")

print("===================== MENU ATM ======================")
print("1. CEK SALDO")
print("2. TARIK TUNAI")
print("3. SETOR TUNAI")
print("4. TRANSFER")
print("5. KELUAR")
print("=====================================================")

menu = int(input("Pilih Menu : "))

os.system("cls" if os.name == "nt" else "clear")

if menu == 1:
    print("=====================================================")
    print(f"Saldo Anda Saat Ini: Rp {input_saldo}")
    print("=====================================================")

elif menu == 2:
    print("Saldo Anda Saat Ini:", input_saldo)
    tarik = int(input("Masukkan Jumlah Tarik Tunai: "))
    print("=====================================================")
    print("Saldo Anda Saat Ini: Rp", input_saldo - tarik)
    print("=====================================================")

elif menu == 3:
    print("Saldo Anda Saat Ini:", input_saldo)
    setor = int(input("Masukkan Jumlah Setor Tunai: "))
    print("=====================================================")
    print("Saldo Anda Saat Ini: Rp", input_saldo + setor)
    print("=====================================================")

elif menu == 4:
    print("Saldo Anda Saat Ini:", input_saldo)
    tf = int(input("Masukkan Jumlah Transfer: "))
    print("=====================================================")
    print("Saldo Anda Saat Ini: Rp", input_saldo - tf)
    print("=====================================================")

elif menu == 5:
    print("=====================================================")
    print("          Terima Kasih Atas Kunjungan Anda           ")
    print("=====================================================")

else:
    print("=====================================================")
    print("Menu Tidak Tersedia")
    print("=====================================================")