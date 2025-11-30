<?php

$barang = readline("Masukkan Nama Barang: ");
$harga = floatval(readline("Masukkan Harga Barang: "));
$jumlah = intval(readline("Masukkan Jumlah Barang: "));

$total = $harga * $jumlah;

if ($total > 45700) {
    $diskon = $total * 0.07;
} else {
    $diskon = 0;
}

$total_pembayaran = $total - $diskon;

echo "\n===== STRUK PEMBELIAN =====\n";
echo "Nama Barang   : $barang\n";
echo "Harga Satuan  : $harga\n";
echo "Jumlah Beli   : $jumlah\n";
echo "Total Harga   : $total\n";
echo "Diskon        : $diskon\n";
echo "Total Pembayaran   : $total_pembayaran\n";
echo "============================\n";
?>