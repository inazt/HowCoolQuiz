<?php
//nat = function t include ma jak nat's module

class Checker
{
  private $a=3;
  function getVar(){ return $this->a;} 
}

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
  while ($row = db_fetch_object($result))
  {
    $array['nid'] = $row->nid;
    $array['hash'] = $row->hash;
    $array['carbon'] = $row->carbon;
    $array['water'] = $row->water;
    $array['address'] = $row->address;
    $array['occupation'] = $row->occupation;
    $array['weight'] = $row->weight;
    $array['height'] = $row->height;
    $array['status'] = $row->status;
    $array['sex'] = $row->sex;
    $array['email'] = $row->email;
  }
  return $array;
}
function save_result($data) {
  $result=drupal_write_record('personal', $data);
  return var_export($result,1) ;
}
function gen_graph($score, $total= 10,$icon) {
  drupal_add_js(drupal_get_path('module', 'howcool') . '/js/jquery.ratings.js');
  drupal_add_js(drupal_get_path('module', 'howcool') . '/js/example.js');
  drupal_add_js(array('howcool' =>  array('carbonday' => '3', 'carbonyear' => '33','waterday'=>2,'wateryear'=>11)), 'setting');
  drupal_add_css(drupal_get_path('module', 'howcool') . '/css/jquery.ratings.css');
  return "<div id='water-day'></div> ----- <div id='carbon-day'></div>
   <br /> <div id='water-year'></div> -----  <div id='carbon-year'></div> <br />  ";
}
