<?php
class DataManagement{
  public static function config_start(){
    $table = 'howcool_config';
    $data = array(
    'config_id' => '',
    'description' => 'Human Constant',
    'carbon' => 0.99,
    'water' => 5.75,
      );
    $result = drupal_write_record($table, $data);
    $data = array(
    'config_id' => '',
    'description' => 'cool',
    'carbon' => 4,
    'water' => 100,
      );
    $result .= drupal_write_record($table, $data);
    $data = array(
    'config_id' => '',
    'description' => 'ok',
    'carbon' => 7,
    'water' => 200,
      );
    $result .= drupal_write_record($table, $data);
    $data = array(
    'config_id' => '',
    'description' => 'bad',
    'carbon' => 11,
    'water' => 300,
      );
    $result .= drupal_write_record($table, $data);
    DataManagement::addBehavior('รถยนต์',"images/icon/how-cool_03.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(1,0.106,0);
    DataManagement::addBehaviorItem(1,"1 กิโลเมตร",1);
    
    DataManagement::addBehavior('รถยนต์ขนาดใหญ่',"images/icon/how-cool_04.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(2,0.106,0);
    DataManagement::addBehaviorItem(2,"1 กิโลเมตร",1);
    DataManagement::addBehavior('รถจักรยานยนต์',"images/icon/how-cool_05.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('รถไฟฟ้า',"images/icon/how-cool_06.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('รถไฟ',"images/icon/how-cool_07.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('รถเมล์,รถทัวร์',"images/icon/how-cool_08.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องบิน',"images/icon/how-cool_10.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('หลอดไฟ',"images/icon/how-cool_11.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องวิทยุ',"images/icon/how-cool_12.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('โทรทัศน์',"images/icon/how-cool_13.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องเล่นเกมส์',"images/icon/how-cool_14.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('คอมพิวเตอร์',"images/icon/how-cool_15.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('พัดลม',"images/icon/how-cool_16.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องปรับอากาศ',"images/icon/how-cool_17.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('โทรศัพท์มือถือ',"images/icon/how-cool_18.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องซักผ้า',"images/icon/how-cool_19.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องดูดฝุ่น',"images/icon/how-cool_20.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ตู้เย็น',"images/icon/how-cool_21.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ไม่โครเวฟ',"images/icon/how-cool_22.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เตาอบไฟฟ้า',"images/icon/how-cool_23.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องทำน้ำอุ่น',"images/icon/how-cool_24.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ฝักบัว',"images/icon/how-cool_25.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ขันตักน้ำ',"images/icon/how-cool_26.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('อ่างอาบน้ำ',"images/icon/how-cool_27.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('สุขภัณฑ์ราดน้ำ',"images/icon/how-cool_28.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('สุขภัณฑ์ชักโครก',"images/icon/how-cool_29.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('โถปัสสาวะ',"images/icon/how-cool_30.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ก๊อกน้ำ',"images/icon/how-cool_31.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องเป่าผม',"images/icon/how-cool_32.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('กระดาษทิชชู่',"images/icon/how-cool_33.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ถุงยางอนามัย',"images/icon/how-cool_34.png",'ระยะที่ขับๆๆๆ');
    
    DataManagement::addBehavior('ผ้าอนามัย',"images/icon/how-cool_35.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('บุหรี่',"images/icon/how-cool_36.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('กระดาษ',"images/icon/how-cool_37.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ถุงพลาสติก',"images/icon/how-cool_38.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ถุงกระดาษ',"images/icon/how-cool_39.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ภาชนะพลาสติก',"images/icon/how-cool_40.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ภาชนะโฟม',"images/icon/how-cool_41.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ภาชนะกระดาษ',"images/icon/how-cool_42.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ขวาดพลาสติก',"images/icon/how-cool_43.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ขวดแก้ว',"images/icon/how-cool_44.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('กระป๋อง',"images/icon/how-cool_45.png",'ระยะที่ขับๆๆๆ');
    
    return $result;
  }
   
   
   
  public static function addBehavior($name,$image_path,$subject){   
    $data = array(
    'display_id' => '',
    'name' => $name,
    'subject' => $subject,
    'image_path' => $image_path,
      );
    $table = 'display';
    $result = drupal_write_record($table, $data);
    return $result;
  }
   
   public static function addFactor($id,$carbon,$water){
      $data = array(
    'display_id' => $id,
    'carbon_factor' => $carbon,
    'water_factor' => $water,
    'factor_id' => '',
      );
    $table = 'factor';
    $result = drupal_write_record($table, $data);
    return $result;
   
   }
   
  function addBehaviorItem($id,$label,$value){
     $data = array(
    'item_id' => '',
    'display_id' => $id,
    'label' => $label,
    'value' => $value,
      );
    $table = 'display_item';
    $result = drupal_write_record($table, $data);
    return $result;

  }
  
  function getAllDisplayChecker(){
   $mysql = "SELECT * FROM display";
   $result = db_query($mysql);
   $data = array();
   $i = 0;
    while ($row = db_fetch_object($result))
    {
      //$data= array();
      $data['display_id'][$i] = $row->display_id;
      $data['name'][$i] = $row->name;
      $data['image_path'][$i] = $row->image_path;
      $data['subject'][$i] = $row->subject;
      $i++;
    }
    return $data;
  }
  
  function getScaleData(){
    /*$mysql = "
SELECT display.display_id, display.name, display.image_path, display.subject, display_item.item_id, display_item.label, display_item.value
FROM display
JOIN display_item ON display.display_id = display_item.display_id
";*/
    $mysql = "SELECT data.display_id, data.name, data.image_path, data.subject, data.item_id, data.label, data.value, factor.carbon_factor, factor.water_factor
FROM factor
JOIN (

SELECT display.display_id, display.name, display.image_path, display.subject, display_item.item_id, display_item.label, display_item.value
FROM display
JOIN display_item ON display.display_id = display_item.display_id
) AS data ON data.display_id = factor.display_id";
    
    $data = array();
    $result = db_query($mysql);
    $i = 0;
    $started = -1;
    $prev_display_id = -1;
    while ($row = db_fetch_object($result))
    {
      $display_id = $row->display_id;
      $item_id =$row->item_id;
      $data[$display_id]['image_path'] =$row->image_path; 
      $data[$display_id]['subject'] =$row->subject;
      $data[$display_id]['label'][$item_id] =$row->label;
      $data[$display_id]['value'][$item_id] =$row->value;
      $data[$display_id]['carbon'] = $row->carbon_factor;
      $data[$display_id]['water'] = $row->water_factor;
    }
    return $data;
  }
  
  function getAllDisplayData(){
    $data = array();
    $table  ='display';
    //$result = db_query("SELECT * FROM $table ");
    $array = array();
    $index = 0;
    
    $mysql = "SELECT data.display_id, data.name, data.image_path, data.subject, data.item_id, data.label, data.value, factor.carbon_factor, factor.water_factor
FROM factor
JOIN (

SELECT display.display_id, display.name, display.image_path, display.subject, display_item.item_id, display_item.label, display_item.value
FROM display
JOIN display_item ON display.display_id = display_item.display_id
) AS data ON data.display_id = factor.display_id";
    
    $result = db_query($mysql);
    $prev_display_id = -1;
    $i = 0;
    $j = 0;
    while ($row = db_fetch_object($result))
    {
      $display_id = $row->display_id;
      if($prev_display_id==-1){
        $prev_display_id=$display_id;
      }else if($prev_display_id!=$display_id){
        drupal_set_message('new one');
        $i++;
        $j=0;
        $prev_display_id=$display_id;
      }
      
      
      $data[$i]['display_id'] = $row->display_id;
      $data[$i]['name'] = $row->name;
      $data[$i]['image_path'] = $row->image_path;
      $data[$i]['subject'] = $row->subject;
      
      if($j ==0){
        $data[$i]['items'] = array();
      }
      
      $data[$i]['items'][$j]['label'] = $row->label;
      $data[$i]['items'][$j]['value'] = $row->value;
      $data[$i]['items'][$j]['carbon_factor'] = $row->carbon_factor;
      $data[$i]['items'][$j]['water_factor'] = $row->water_factor;
      $j++;
      //drupal_set_message(print_r($array['items'][0],1));
    }
    //drupal_set_message('---------------');
    //drupal_set_message(print_r($data[0]['items'][0],1));
    return $data;
  }
  public static function convertToData($input){
    $data = array();
    $data['carbon']=3;
    $data['water'] = 4;
  
    return $data;
  }

}
function data_view(){
  //$ans = DataManagement::addBehavior("รถไฟ","images/icon/how-cool_08.png","คุณนั่งรถไฟบ่อยแค่ไหน");
  //$ans = DataManagement::addBehavior("รถไฟฟ้า","images/icon/how-cool_09.png","คุณนั่งรถไฟฟ้าบ่อยแค่ไหน");
  //$ans = DataManagement::getAllDisplayData();
  //$ans = DataManagement::getScaleData();
  //$test = array_combine($ans[2]['value'],$ans[2]['label']);
  //$show = 'test'.print_r($test,1)."<br>";
  $ans = DataManagement::config_start();
  $show = 'start'.$ans; 
  return $show;
}




