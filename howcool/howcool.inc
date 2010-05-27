<?php
//nat = function t include ma jak nat's module
include 'display.inc';
include_once 'datamanagement.inc';
class Checker
{
  public static $count=0;
  private static $all=array();
  public $image;
  public $key;
  public $scale;
  public $show;
  public $frequent;
  public $frequent_question;
  public $carbon_factor;
  public $water_factor;
  
  function __construct($data) {
    self::$count++;
    $this->key = self::$count;
    $this->image = $data['image'];
    $this->scale = $data['scale'];
    $this->frequent = $data['frequent'];
    $this->frequent_question =$data['frequent_question'];
    $this->show = $data['show'];
    $this->carbon_factor = $data['carbon_factor'];
    $this->water_factor = $data['water_factor'];
    self::$all[$this->key] = $this;
  }
  
  public static function toLevel($data){
    $value = $data['carbon']+$data['water'];
    if($value>120){
      return 'images/info/1.png';
    }else if($value>70){
      return 'images/info/2.png';
    }else{
      return 'images/info/3.png';
    }
  }
  
  public static function getChecker($k){
    return self::$all[$k];
  
  }
  
  
}


class Config{
  
  public $checkers;
  public static $age_renges =array(
      "null"=>'ใส่อายุเลยจ้า'
      
 );
  public static function getDbValue($table, $field) {
    $sql = "select $field from $table";
    $result=db_query($sql);
    $output = array();
    while ($row = db_fetch_object($result))
    {
      $output[$row->$field]=$row->$field;
    }
    //drupal_set_message(print_r($output,1));
    return $output;
  }
  public static $job_renges =array(
      "null" => 'อาชีพ',
    
  );
  public static $address_renges =array(
      "null"=>'จังหวัด',
  );
  public static $weight_renges =array(
      "null"=>'น้ำหนัก',
  );
  public static $status_renges =array(
      'โสด' => 'โสด', 
      'แต่งงาน' => 'แต่งงาน',  
   
  );
  public static $hight_renges =array(
      "null"=>'ส่วนสูง',
   
  );
  
     
  function __construct(){


    $mysql = "select name from {province} ";
 
    while ($row = db_fetch_object($result))
    {
      $age_renges[$row->name]=$row->name;
      drupal_set_message( print_r($row,1));
    }
      
    $result = db_query($mysql);

    
    $this->checkers = array();
    $this->checkers[0] = new Checker(array(
        'image'=>'images/icon/how-cool_03.png',
        'show' => 'drive a car',
        'frequent_question' => 'คุณขับรถบ่อยแค่ไหนคะ',
        'frequent'=>array('2 hr / day','3 hr / day','4 hr / day','5 hr /day'),
        'scale'=>array(2,3,4,5),
        'carbon_factor'=>3,
        'water_factor'=>7,
      )
    );
    $this->checkers[1] = new Checker(array(
        'image'=>'images/icon/how-cool_04.png',
        'show' => 'Kraba',
        'frequent_question' => 'คุณนั่งกระบะบ่อยแค่ไหนคะ',
        'frequent'=>array('2 hr / day','3 hr / day','4 hr / day','5 hr /day'),
        'scale'=>array(20,21,22,23),
        'carbon_factor'=>4,
        'water_factor'=>1,
      )
    );
    $this->checkers[2] = new Checker(array(
        'image'=>'images/icon/how-cool_05.png',
        'show' => 'biker?',
        'frequent_question' => 'คุณนั่งแว๊นบ่อยแค่ไหนคะ',
        'frequent'=>array('2 hr / day','3 hr / day','4 hr / day','5 hr /day'),
        'scale'=>array(20,21,22,23),
        'carbon_factor'=>4,
        'water_factor'=>1,
      )
    );
    $this->checkers[3] = new Checker(array(
        'image'=>'images/icon/how-cool_06.png',
        'show' => 'biker?',
        'frequent_question' => 'คุณนั่งรถเมล์บ่อยแค่ไหนคะ',
        'frequent'=>array('2 hr / day','3 hr / day','4 hr / day','5 hr /day'),
        'scale'=>array(20,21,22,23),
        'carbon_factor'=>4,
        'water_factor'=>1,
      )
    );
    $this->checkers[4] = new Checker(array(
        'image'=>'images/icon/how-cool_07.png',
        'show' => 'train',
        'frequent_question' => 'คุณนั่งรถเมล์บ่อยแค่ไหนคะ',
        'frequent'=>array('2 hr / day','3 hr / day','4 hr / day','5 hr /day'),
        'scale'=>array(20,21,22,23),
        'carbon_factor'=>4,
        'water_factor'=>1,
      )
    );
    $this->checkers[5] = new Checker(array(
        'image'=>'images/icon/how-cool_08.png',
        'show' => 'touer',
        'frequent_question' => 'คุณนั่งรถเมล์บ่อยแค่ไหนคะ',
        'frequent'=>array('2 hr / day','3 hr / day','4 hr / day','5 hr /day'),
        'scale'=>array(20,21,22,23),
        'carbon_factor'=>4,
        'water_factor'=>1,
      )
    );
    
    $this->checkers[6] = new Checker(array(
        'image'=>'images/icon/how-cool_10.png',
        'show' => 'plane',
        'frequent_question' => 'คุณนั่งเครื่องบินบ่อยแค่ไหนคะ',
        'frequent'=>array('2 hr / day','3 hr / day','4 hr / day','5 hr /day'),
        'scale'=>array(7,8,9,10),
        'carbon_factor'=>2,
        'water_factor'=>3,
      )
    );
     
  }
  
  function getShows(){
    $ans=array();
    for($i = 0;$i<count($this->checkers);$i++){
      $object =$this->checkers[$i];
      $ans[$i]='<strong>'.$object->show.'</strong><br>';
      $ans[$i] .= '<img src='.drupal_get_path('module', 'howcool').'/'.$object->image.'></img>';
      //$ans[$i] = $object->image;
      //$ans[$i].='/>';
    }
    return $ans;
  }
  
  function getKeys(){
    $ans=array();
    for($i = 0;$i<count($this->checkers);$i++){
      $ans[$i]=$this->checkers[$i]->key;
    
    }
    return $ans;
  }
  
  function getImages(){
    $ans=array();
    for($i = 0;$i<count($this->checkers);$i++){
      $ans[$i]=$this->checkers[$i]->image;
    
    }
    return $ans;
  }

  function getFrequents(){
    $ans=array();
    for($i = 0;$i<count($this->checkers);$i++){
      $ans[$i]=$this->checkers[$i]->frequent;
    
    }
    return $ans;
  }

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

function compareLv($def_lv,$lv){
  if($def_lv >$lv){
    return $def_lv;
  }else{
    return $lv;
  }
}

function gen_graph($data) {
  
  $point_carbon = $data['carbon']+0.99;
  $point_water = $data['water']+5.75;
  $lv =0;
  
 // drupal_set_message(print_r($data['weight'],1));
  
  if($point_water >300){
    $waterday =10;
    $lv =  compareLv($lv,4);
  }else if($point_water>200){
    $waterday =($point_water-200)*(4/100)  + 5; 
    $lv =  compareLv($lv,3);
  }else if($point_water >100){
    $waterday = ($point_water-100)/100 +3;
    $lv =  compareLv($lv,2);
  }else if($point_water>50){
    $waterday = 2;
    $lv =  compareLv($lv,1);
  }else if($point_water >5.75){
    $waterday = 1;
    $lv =  compareLv($lv,1);
  }else{
    $waterday = 0.1;
    $lv =  compareLv($lv,1);
  }
  
  if($point_carbon >11){
    $carbonday =10;
    $lv =  compareLv($lv,4);
  }else if($point_carbon>7){
    $carbonday =($point_carbon-7)  + 5; 
    $lv =  compareLv($lv,3);
  }else if($point_carbon >4){
    $carbonday = ($point_carbon-4)/3 +3;
    $lv =  compareLv($lv,2);
  }else if($point_carbon>0.99){
    $carbonday = ($point_carbon-1)/3 +1;
    $lv =  compareLv($lv,1);
  }else{
    $carbonday = 0.1;
    $lv =  compareLv($lv,1);
  }
   
  
  $carbonyear=$carbonday*100;
  //$waterday=$point_water/100  ;
  $wateryear=$waterday*100;
  $weight = $data['weight'];
  
  $carbonyear=log10($carbonyear*100)*10;
  $wateryear=log10($wateryear*100)*10;
 
  $img = "images/info/h$lv.png";
  $headline = getHeadline($lv);
  $content = getContent($lv);
  //$headline = 'ss';
  //$content = '';
  $insert_data = array('pic'=>$img,'headline'=>$headline,'content'=>$content,);
 
  $point_carbon = ceil($point_carbon*100)/100;
  $point_water = ceil($point_water*100)/100;
  $max_cabonday = getMaxStar($cabonday);
  $max_cabonyear = getMaxStar($cabonyear);
  $max_waterday = getMaxStar($waterday);
  $max_wateryear = getMaxStar($wateryear);
  drupal_add_js(drupal_get_path('module', 'howcool') . '/js/jquery.ratings.js');
  drupal_add_js(drupal_get_path('module', 'howcool') . '/js/gengraph.js');
  drupal_add_js(array('howcool' =>  array('carbonday' => $carbonday, 'carbonyear' =>$carbonyear,'waterday'=>$waterday,'wateryear'=>$wateryear,'weight'=>$weight,'point_carbon'=>$point_carbon,'point_water'=>$point_water,'max_carbonday'=>$max_carbonday,'max_carbonyear'=>$max_carbonyear,'max_waterday'=>$max_waterday,'max_wateryear'=>$max_wateryear)), 'setting');
  drupal_add_css(drupal_get_path('module', 'howcool') . '/css/jquery.ratings.css');
 drupal_add_css(drupal_get_path('module', 'howcool') . '/css/reset.css');
 drupal_add_css(drupal_get_path('module', 'howcool') . '/css/text.css');
 drupal_add_css(drupal_get_path('module', 'howcool') . '/css/960.css');
 //drupal_add_css(drupal_get_path('module', 'howcool') . '/css/uncompressed/demo.css');
 $output=new ResultOutput();
  return $output->showScore($insert_data);
}

function getHeadline($lv){
  $ans ="<strong>ระดับความ Coo! : \"คูล\"หญิง \"คูล\"ชาย</strong>";
 switch($lv){
    case 4 : $ans ="<strong>ระดับความ Coo! : โจ๊กโซ\"คูล\"</strong>";break;
    case 3 : $ans ="<strong>ระดับความ Coo! : จอน\"คูล\"แสด</strong>";break;
    case 2 : $ans ="<strong>ระดับความ Coo! : จ๊อด\"คูล\"นี่</strong>";break;
  }
  return $ans;
}

function getContent($lv){
  $ans ="สุดยอดเลยคุณคือคนที่โลกต้องการและยกให้เป็น\"คูล\" ผู้สูงศักดิ์เลยทีเดียวลองชวนเพื่อนหรือคนรอบข้าง ให้ทำตัวอย่างคุณดู เพื่อคุณจะได้อยู่ในโลกที่สูงศักดิ์ที่โลกเราพึงพอใจและไร้ซึ่งกรรม";

  switch($lv){
    case 4 :$ans ="บร๊ะเจ้านี่คุณสร้างกรรมไว้กับโลกใบนี้อย่างมหาศาล ราวกับว่าการใส่ใจสิ่งแวดล้อมของคุณมันเพียงแค่เรื่องตลก ที่ไร้สาระเลยทีเดียว หากคุณยังทำเช่นนี้ต่อไปกรรมที่คุณก่อขึ้นจะส่งผลกระทบที่เลวร้ายชนิดที่คุณอาจคาดไม่ถึงเลย<br>ปรับตัวซะนะโจ๊ก โลกยังให้โอกาสคุณอยู่เสมอ";break;
    case 3 : $ans ="\"คูล\" แสดดดด คือ คุณไม่ค่อยคูลเลย คุณยังคงเพิกเฉยกับปัญหาสิ่งแวดล้อมแล้วใช้ชีวิตอย่างไม่มีสติอยู่ คงจะดีกว่านี้มากหากคุณจะลองปรับตัวคุณขึ้น เพื่อเป็นการลดกรรมที่คุณทำไว้กับโลก เพื่อที่คุณจะได้คูลจริงๆซะที"; break;
    case 2 :   $ans ="ไม่เลวเลย แต่ก็ยังไม่ดีนักสำหรับความ \"คูล\" ของคุณ ลดกรรมลงอีกหน่อย คุณได้ คูลจริงๆแน่ๆ สู้เค้านะจ๊อด";break;
  }
  return $ans;

}

function getMaxStar($count){
  $ans=ceil($count/10)*10;
  $ans=$ans/10 -1;
  return $ans;
}
