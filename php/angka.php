<?php

$a = readline("Masukkan angka pertama: ");
$b = readline("Masukkan angka kedua: ");

if($a > $b){
    echo "$a : Lebih besar dari : $b\n";
} elseif ($b > $a){
    echo "$a : Lebih kecil dari : $b\n";
} else {
    echo "Keduanya sama besar\n";
}

echo "Apakah keduanya sama?";
echo ($a == $b) ? " true\n" : " false\n";

?>