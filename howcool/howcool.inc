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
function get_result($hash=null) {
  $result = db_query("SELECT * FROM personal WHERE hash = '$hash'");
  $array=array();
  $row = db_fetch_object($result));
  $array['hash'] = $row->hash;
  $array['score'] = $row->score;
  $array['email'] = $row->email;
  return $array;
}
function save_result($hash,$score=0,$email) {
  $data = array(
    'nid' => '',
    'hash' => $hash,
    'score' => $score,
    'email' => $email
  );
  $result=drupal_write_record('personal', $data);
  return $result;
}
function gen_graph($score, $total,$icon) {
  drupal_add_js(drupal_get_path('module', 'page_ex') . '/jquery.ratings.js');
  drupal_add_js(drupal_get_path('module', 'page_ex') . '/example.js');
  drupal_add_js(array('page_ex' =>  array('score' => $score, 'total' => $total,'icon'=>$icon)), 'setting');
  drupal_add_css(drupal_get_path('module', 'page_ex') . '/jquery.ratings.css');
  return "<div id='example-1'></div> <br />  ";
}
