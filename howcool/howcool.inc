<?php
//nat = function t include ma jak nat's module
include 'display.inc';
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
      "null"=>'ใส่อายุเลยจ้า',
      '8-13' => '8-13 ปี', 
      '14-17' => '14-17 ปี', 
      '18-20' => '18-20 ปี',
  );
  public static $job_renges =array(
      'student' => 'นักเรียน', 
      'teacher' => 'อาจารย์', 
      'farmer' => 'สันหลังของชาติ',
  );
  public static $address_renges =array(
      'bkk' => 'กรุงเทพ', 
      'chg' => 'เชียงใหม่', 
      'chon' => 'ชลบุรี',
  );
  public static $weight_renges =array(
      '1' => '30-39', 
      '2' => '40-49', 
      '3' => '50-59',
  );
  public static $status_renges =array(
      '1' => 'โสด', 
      '2' => 'แต่งงาน', 
      '3' => 'เสียยยยยชีวิต',
  );
  public static $hight_renges =array(
      '1' => '100-130', 
      '2' => '131-150', 
      '3' => '151-160',
  );
  
     
  function __construct(){
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
function gen_graph($data) {
  $carbonday=$data['carbon']/100;
  $point_carbon = $data['carbon'];
  $point_water = $data['water'];
  $carbonyear=$carbonday*100;
  $waterday=$data['water']/100  ;
  $wateryear=$waterday*100;
  $weight = Config::$weight_renges[$data['weight']];
  
  $carbonyear=log10($carbonyear*100)*10;
  $wateryear=log10($wateryear*100)*10;
  //Check Maigern 60 !!!
  /*if($wateryear > 50){
    $max = ceil($wateryear/10)*10;
    $wateryear = $wateryear/$max*50;
  }
  if($carbonyear > 50){
    $max = ceil($carbonyear/10)*10;
    $carbonyear = $carbonyear/$max*50;
  }
  */
  

  drupal_add_js(drupal_get_path('module', 'howcool') . '/js/jquery.ratings.js');
  drupal_add_js(drupal_get_path('module', 'howcool') . '/js/example.js');
  drupal_add_js(array('howcool' =>  array('carbonday' => $carbonday, 'carbonyear' =>$carbonyear,'waterday'=>$waterday,'wateryear'=>$wateryear,'weight'=>$weight,'point_carbon'=>$point_carbon,'point_water'=>$point_water)), 'setting');
  drupal_add_css(drupal_get_path('module', 'howcool') . '/css/jquery.ratings.css');
 drupal_add_css(drupal_get_path('module', 'howcool') . '/css/reset.css');
 drupal_add_css(drupal_get_path('module', 'howcool') . '/css/text.css');
 drupal_add_css(drupal_get_path('module', 'howcool') . '/css/960.css');
 //drupal_add_css(drupal_get_path('module', 'howcool') . '/css/uncompressed/demo.css');
 $output=new ResultOutput();
  return $output->showScore('images/info/1.png');
}
