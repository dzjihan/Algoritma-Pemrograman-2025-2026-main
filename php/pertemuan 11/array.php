<?php
$nim = readline("Masukkan NIM: ");

$digit = [];
for ($i = 0; $i < strlen($nim); $i++) {
    $digit[] = intval($nim[$i]);
}

$total = array_sum($digit);
$max = max($digit);
$minim = min($digit);
$rata = $total / count($digit);

$rev = array_reverse($digit);

echo "digit     [" . implode(", ", $digit) . "]\n";
echo "total     $total\n";
echo "max       $max\n";
echo "min       $minim\n";
echo "rata-rata $rata\n";
echo "reverse   [" . implode(", ", $rev) . "]\n";
?>