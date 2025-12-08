<?php

$nim = readline("Masukkan NIM: ");
$length = strlen($nim);

$digits = [];

for ($i = 0; $i < $length; $i++) {
    $digits[$i] = intval($nim[$i]);
}

$total = array_sum($digits);
$max = max($digits);
$min = min($digits);
$rata = $total / count($digits);

echo "Array digit: ";
print_r($digits);

echo "Total digit = $total\n";
echo "Digit maksimum = $max\n";
echo "Digit minimum = $min\n";
echo "Rata-rata digit = $rata\n";

echo "Reverse array: ";
print_r(array_reverse($digits));

?>