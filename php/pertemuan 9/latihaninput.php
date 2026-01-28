<?php

$nama = readline("Masukkan Nama Barang: ");
$harga = floatval(readline("Masukkan Harga Barang: "));
$jumlah = intval(readline("Masukkan Jumlah Barang: "));

$total = $harga * $jumlah;

if ($total > 51300) {
    $diskon = $total * 0.03;
} else {
    $diskon = 0;
}

$bayar = $total - $diskon;

echo "===== STRUK PEMBELIAN =====\n";
echo "Nama Barang   : $nama\n";
echo "Harga Satuan  : $harga\n";
echo "Jumlah Beli   : $jumlah\n";
echo "Total Harga   : $total\n";
echo "Diskon        : $diskon\n";
echo "Total Bayar   : $bayar\n";
echo "===========================\n";

?>