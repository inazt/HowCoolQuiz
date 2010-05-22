<?php
class DataManagement{
   
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
  function getAllDisplayData(){
    $data = array();
    $table  ='display';
    $result = db_query("SELECT * FROM $table ");
    $array = array();
    $index = 0;
    
    $mysql = "SELECT data.display_id, data.name, data.image_path, data.subject, data.item_id, data.label, data.value, factor.carbon_factor, factor.water_factor
FROM factor
JOIN (

SELECT display.display_id, display.name, display.image_path, display.subject, display_item.item_id, display_item.label, display_item.value
FROM display
JOIN display_item ON display.display_id = display_item.display_id
) AS data ON data.display_id = factor.display_id";
    
    
    while ($row = db_fetch_object($result))
    {
      $array['display_id'] = $row->display_id;
      $array['name'] = $row->name;
      $array['image_path'] = $row->image_path;
      $array['subject'] = $row->subject;
      $table2 = 'display_item';
      $display_id = $array['display_id'];
      $result2 = db_query("SELECT * FROM $table2 WHERE display_id = '$display_id'");
      
      
      $array['items'] = array();
      $i = 0;
      while($row2 = db_fetch_object($result2)){
        $array['items'][$i] = array('item_id'=>$row2->item_id,'label'=>$row2->label,'value'=>$row2->value);
        $i++;
      }
      $data[$index++] = $array;
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
    $input
  
    return $data;
  }

}
function data_view(){
  //$ans = DataManagement::addBehavior("รถไฟ","images/icon/how-cool_08.png","คุณนั่งรถไฟบ่อยแค่ไหน");
  //$ans = DataManagement::addBehavior("รถไฟฟ้า","images/icon/how-cool_09.png","คุณนั่งรถไฟฟ้าบ่อยแค่ไหน");
  $ans = DataManagement::getAllDisplayData();
  $show = 'test'.print_r($ans[1],1)."<br>";
  //$show .= print_r($ans['items'][0],1);
  return $show;
}




