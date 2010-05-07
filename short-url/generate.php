<?
 function generate_code($offset,$base=180000) {
    $number=$base+$offset;
    $out   = "";
    $codes = "abcdefghjkmnpqrstuvwxyz23456789ABCDEFGHJKMNPQRSTUVWXYZ";

    while ($number > 53) {
        $key    = $number % 54;
        $number = floor($number / 54) - 1;
        $out    = $codes{$key}.$out;
    }
    return $codes{$number}.$out;
}
 echo "$argv[1] : ".generate_code($argv[1])."\n";
//print_r($argv);
?>
