<?
function rand_micro_time($name='default')
{
 return md5(microtime().$name);
}
function rand_str($name='input',$length = 32, $chars = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890')
{
    // Length of character list
    $chars_length = (strlen($chars) - 1);

    // Start our string
    $string = $chars{rand(0, $chars_length)};
   
    // Generate random string
    for ($i = 1; $i < $length; $i = strlen($string))
    {
        // Grab a random character from our list
        $r = $chars{rand(0, $chars_length)};
       
        // Make sure the same two characters don't appear next to each other
        if ($r != $string{$i - 1}) $string .=  $r;
    }
   
    // Return the string
    return md5($string.$name);
}
//echo rand_str(5,'nat')."\n";
//echo substr(rand_micro_time('nat'),-5)."\n";
function generate_code($number) {
    $out   = "";
    $codes = "abcdefghjkmnpqrstuvwxyz23456789ABCDEFGHJKMNPQRSTUVWXYZ";

    while ($number > 53) {
        $key    = $number % 54;
        $number = floor($number / 54) - 1;
        $out    = $codes{$key}.$out;
    }

    return $codes{$number}.$out;
}
 function micro_time()
  {
    $timearray = explode(" ", microtime());
    return ($timearray[1] + $timearray[0]);
  }
echo generate_code(1000000+$argv[1])."\n";
//print_r($argv);
#echo microtime();
?>
