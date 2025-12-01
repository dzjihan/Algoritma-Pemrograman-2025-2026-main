<?php
// ATM sederhana - PHP (CLI)

function input($prompt = '') {
    echo $prompt;
    $line = trim(fgets(STDIN));
    return $line;
}

function rupiah($n) {
    return 'Rp ' . number_format($n, 0, ',', '.');
}

// 1-3: Nama + konfirmasi TRUE/FALSE
do {
    $nama = input("Masukkan Nama: ");
    $cek  = input("Nama sudah benar? (TRUE/FALSE): ");
} while (strtolower($cek) !== 'true');

// 4-6: Input NIM (angka) -> saldo
do {
    $nim = input("Masukkan NIM (angka saja): ");
    if (!ctype_digit($nim) || $nim === '') {
        echo "NIM harus berupa angka tanpa huruf. Coba lagi.\n";
        $ok = false;
    } else {
        $ok = true;
        // ubah ke integer (atau jika sangat panjang, bisa pakai string tetap)
        $saldo = intval($nim);
    }
} while (!$ok);

echo "\n=== DATA ANDA ===\n";
echo "Nama       : $nama\n";
echo "Saldo awal : " . rupiah($saldo) . "\n\n";

// 7: Menu ATM (switch-case)
do {
    echo "===== MENU ATM =====\n";
    echo "1. Cek Saldo\n";
    echo "2. Tarik Tunai\n";
    echo "3. Setor Tunai\n";
    echo "4. Transfer\n";
    echo "5. Keluar\n";
    $pil = input("Pilih menu: ");

    switch ($pil) {
        case '1':
            echo "Saldo Anda: " . rupiah($saldo) . "\n";
            break;

        case '2':
            $jml = input("Masukkan jumlah tarik: ");
            if (!ctype_digit($jml) || $jml === '') {
                echo "Masukkan angka yang valid.\n";
                break;
            }
            $j = intval($jml);
            if ($j <= $saldo) {
                $saldo -= $j;
                echo "Berhasil tarik " . rupiah($j) . ". Saldo sekarang: " . rupiah($saldo) . "\n";
            } else {
                echo "Saldo tidak cukup!\n";
            }
            break;

        case '3':
            $jml = input("Masukkan jumlah setor: ");
            if (!ctype_digit($jml) || $jml === '') {
                echo "Masukkan angka yang valid.\n";
                break;
            }
            $j = intval($jml);
            $saldo += $j;
            echo "Berhasil setor " . rupiah($j) . ". Saldo sekarang: " . rupiah($saldo) . "\n";
            break;

        case '4':
            $jml = input("Masukkan jumlah transfer: ");
            if (!ctype_digit($jml) || $jml === '') {
                echo "Masukkan angka yang valid.\n";
                break;
            }
            $j = intval($jml);
            if ($j <= $saldo) {
                $tujuan = input("Masukkan nomor rekening tujuan (atau NIM tujuan): ");
                // simulasi transfer: hanya kurangi saldo
                $saldo -= $j;
                echo "Transfer " . rupiah($j) . " ke $tujuan berhasil. Saldo sekarang: " . rupiah($saldo) . "\n";
            } else {
                echo "Saldo tidak cukup!\n";
            }
            break;

        case '5':
            echo "Terima kasih telah menggunakan layanan ATM.\n";
            break;

        default:
            echo "Menu tidak valid!\n";
    }

    echo "\n";
} while ($pil !== '5');