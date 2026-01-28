<?php

$nama = readline("Masukkan Nama Anda: ");
$benar = readline("Apakah Anda Yakin Ingin Melanjutkan Transaksi? (Y/N): ");

$saldoAwal = 0;

if ($benar == "Y" || $benar == "y") {
    echo "=====================================================\n";
    echo "Selamat Datang Di ATM, $nama\n";
    echo "Saldo Anda Saat Ini: Rp $saldoAwal\n";
    echo "=====================================================\n";
} else {
    echo "=====================================================\n";
    echo "          Terima Kasih Atas Kunjungan Anda\n";
    echo "=====================================================\n";
    exit;
}

$inputSaldo = readline("Masukkan Saldo : ");

echo "=====================================================\n";
echo "NAMA ANDA              : $nama\n";
echo "SALDO ANDA SEKARANG    : Rp $inputSaldo\n";
echo "=====================================================\n\n";

echo "===================== MENU ATM ======================\n";
echo "1. CEK SALDO\n";
echo "2. TARIK TUNAI\n";
echo "3. SETOR TUNAI\n";
echo "4. TRANSFER\n";
echo "5. KELUAR\n";
echo "=====================================================\n";

$menu = readline("Pilih Menu : ");

switch ($menu) {
    case 1:
        echo "=====================================================\n";
        echo "Saldo Anda Saat Ini: Rp $inputSaldo\n";
        echo "=====================================================\n";
        break;

    case 2:
        echo "Saldo Anda Saat Ini: Rp $inputSaldo\n";
        $tarik = readline("Masukkan Jumlah Tarik Tunai: ");
        echo "=====================================================\n";
        echo "Saldo Anda Saat Ini: Rp " . ($inputSaldo - $tarik) . "\n";
        echo "=====================================================\n";
        break;

    case 3:
        echo "Saldo Anda Saat Ini: Rp $inputSaldo\n";
        $setor = readline("Masukkan Jumlah Setor Tunai: ");
        echo "=====================================================\n";
        echo "Saldo Anda Saat Ini: Rp " . ($inputSaldo + $setor) . "\n";
        echo "=====================================================\n";
        break;

    case 4:
        echo "Saldo Anda Saat Ini: Rp $inputSaldo\n";
        $tf = readline("Masukkan Jumlah Transfer: ");
        echo "=====================================================\n";
        echo "Saldo Anda Saat Ini: Rp " . ($inputSaldo - $tf) . "\n";
        echo "=====================================================\n";
        break;

    case 5:
        echo "=====================================================\n";
        echo "          Terima Kasih Atas Kunjungan Anda\n";
        echo "=====================================================\n";
        break;

    default:
        echo "=====================================================\n";
        echo "Menu Tidak Tersedia\n";
        echo "=====================================================\n";
        break;
}
?>