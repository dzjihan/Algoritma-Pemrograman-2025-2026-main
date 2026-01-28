# Variabel global untuk menyimpan data Buku
buku = []

# fungsi untuk menampilkan semua data
def show_data():
    if len(buku) <= 0:
        print('BELUM ADA DATA')
    else:
        for indeks in range(len(buku)):
            print('[%d] %s' % (indeks, buku[indeks]))

# fungsi untuk menambah data
def insert_data():
    buku_baru = input('Judul Buku: ')  # raw_input diganti input
    buku.append(buku_baru)

# fungsi untuk edit data
def edit_data():
    show_data()
    indeks = int(input('Inputkan ID buku: '))  # tambah konversi ke int
    if indeks >= len(buku):  # perbaiki kondisi
        print('ID salah')
    else:
        judul_baru = input('Judul baru: ')  # raw_input diganti input
        buku[indeks] = judul_baru

# fungsi untuk menghapus data
def delete_data():
    show_data()
    indeks = int(input('Inputkan ID buku: '))  # tambah konversi ke int
    if indeks >= len(buku):  # perbaiki kondisi
        print('ID salah')
    else:
        buku.pop(indeks)  # ganti remove dengan pop untuk hapus berdasarkan indeks

# fungsi untuk menampilkan menu
def show_menu():
    print('\n')
    print('----------- MENU ----------')
    print('[1] Show Data')
    print('[2] Insert Data')
    print('[3] Edit Data')
    print('[4] Delete Data')
    print('[5] Exit')
    
    menu = int(input('PILIH MENU> '))  # tambah konversi ke int
    print('\n')
    
    if menu == 1:
        show_data()
    elif menu == 2:
        insert_data()
    elif menu == 3:
        edit_data()
    elif menu == 4:
        delete_data()
    elif menu == 5:
        exit()
    else:
        print('Salah pilih!')

if __name__ == '__main__':
    while(True):
        show_menu()