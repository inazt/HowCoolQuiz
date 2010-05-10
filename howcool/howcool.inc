<?php
//nat = function t include ma jak nat's module
function who_view() {
  
  $show = theme('headline','sssop');
  if(!empty($form_state['values'])){
    $show .='sss';
  }
  $show .= drupal_get_form('popform',$form_state);
  return $show;
}
function getHash() {
  $base=1000000;
  $result = db_query_range('SELECT max(nid)+1 as nextId from {personal}',  0, 1);
  $offset= db_fetch_object($result)->nextId; 
 
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

function result_view($input){
  $show = theme('headline','Result = ');
  $result = db_query("SELECT * FROM personal WHERE hash = '$input'");
  //$show .= print_r($result,1);

  while($row = db_fetch_object($result)){
    $show .= $row->hash."<br>";
    $show .= $row->score."<br>";
    
    $show .= nat($row->score,100,'water');
    $show .= $row->email."<br>";
  }
  
  /*$num=mysql_numrows($result);
  
  for($i =0 ;$i<$num;$i++){
    $show .= mysql_result($result,$i,"hash")."<br>";
    $show .= mysql_result($result,$i,"score")."<br>";
    $show .= mysql_result($result,$i,"email")."<br>";
    //$show .= mysql_result($result,$i,"first")."<br>";
  }*/
  
  /*if($_GET['score']>0){
    $show .= nat($_GET['score'],10,'water');
  }*/
  //$show .= nat(7,10,'water');

  $show .=$input;
  return $show;
}
