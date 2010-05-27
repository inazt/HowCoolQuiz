<?php
class DisplayOutput
{
  public static function renderNamesImages($data){
      $ans = array();
      for($i = 0 ;$i<count($data['name']);$i++){
        
        $ans[$i] ='<strong>'.$data['name'][$i].'</strong><br>';
        $ans[$i] .= '<img src='.drupal_get_path('module', 'howcool').'/'.$data['image_path'][$i].'></img>';
        
      }
      return $ans;
  }

  public function insertPicture($path){
    $form_element = array(
      '#type'=> 'markup',
      '#value'=> '<center><img src='.drupal_get_path('module', 'howcool').'/'.$path.'></img></center>',
    );
    return $form_element;
  }
  public function openDiv($name,$id='ss'){
    if($id=='ss'){
      $form_element = array(
        '#type'=>'markup',
        '#value'=>"<div class='".$name."'>",
      );
      return $form_element;
    }else{
      $form_element = array(
        '#type'=>'markup',
        '#value'=>"<div class='".$name."' id='".$id."'>",
      );
      return $form_element;
    
    }
  }
  public function closeDiv(){
    $form_element = array(
      '#type'=>'markup',
      '#value'=>"</div>",
    );
    return $form_element;
  }
  public function openContainer(){
    $form_element = array(
      '#type'=>'markup',
      '#value'=>"<div class='container_12'>",
    );
    return $form_element;
  }
  public function closeContainer(){
    return $this->closeDiv();
  }
  public function createGrid($value,$data='<h2></h2>',$attr=null){
    $form_element = array(
      '#type'=>'markup',
      '#value'=>"<div class='grid_".$value." $attr'> $data </div>",
    );
    return $form_element;
  }
  public function createGridWithLine($value,$data='<h2></h2>',$attr=null){
    $form_element = array(
      '#type'=>'markup',
      '#value'=>"<div class='grid_".$value." $attr'> $data </div>",
    );
    return $form_element;
  }
  public function openGrid($value,$attr=null,$data=null){
    $form_element = array(
      '#type'=>'markup',
      '#value'=>"<div class='grid_".$value." $attr'>$data",
    );
    return $form_element;
   
  }
  public function closeGrid(){
    return $this->closeDiv();
  }  
  public function closeLineGrid(){
  $form_element = array(
      '#type'=>'markup',
      '#value'=>"</div><div class='clear'></div>",
    );
    return $form_element;
  } 
}
class ResultOutput
{
  private function displayImage($data){
    $ans ="";
    
    for($i = 0;$i<count($data);$i++){
      $name = "<strong>".$data[$i]['name']."</strong>";
      $img = "<img src =../".drupal_get_path('module', 'howcool').'/'.$data[$i]['image_path']."></img>";
      $karma = "";
      if($data[$i]['carbon']>0){
        $karma .= "".$data[$i]['carbon']." กิโลกรรม";
      }else{
        $karma .= "";
      }

      if($data[$i]['water']>0){
        $karma .= "<br>".$data[$i]['water']." ลิตร";
      }else{
        $karma .= "";
      }     
      $ans .= " <div class ='form-item'>
               <label class='option'> ".$img."<br>".$name."<br>".$karma."</label>
              </div>";
      
    }
    
   
    return $ans;
  }

  public function showDetail($data){
    return "
        <div class='detail_all'>
        <div class='container_12'>
         <div class='grid_12'>
         
            <div class='sufon HeadResultTitle HeadResultCenter'>รายละเอียดของผลกรรมที่ผ่านมา</div><hr class='white-bottom'>
         </div>
          ".//Header
          "
         <div class='grid_4' >
              <h1></h1>
         </div>
         <div class='grid_2''>
          
              <img src='../".drupal_get_path('module','howcool')."/images/empty-carbon.png'></img>
              <br>
              <strong>หายใจ</strong>
              <br>
              ".$data['carbon']."
          
         </div>
         <div class='grid_2'>
              <img src='../".drupal_get_path('module','howcool')."/images/empty-water.png'></img>
              <br>
              <strong>ใช้น้ำ</strong>
              <br>
              ".$data['water']." 
         </div>
         <div class='grid_4'>
              <h1></h1>
         </div>
         <div class = 'clear'></div>
         ".//Body
         "
         <div class = 'grid_12'>
           <div class ='cool_check' id='detailxx'>
            <div class = 'form-checkboxes'>
            <div class='detail_display'>
           ".$this->displayImage($data['info']).
           "
            </div>
            </div>
           </div>
         </div>
        </div>
        <div class='white_space'>
        
        </div>
        </div>
    ";
  
  }

  public function showScore($data) {
     $pic = $data['pic'];
     $headline =$data['headline'];
     $content =$data['content'];
     return " 
     
      <div class='container_12'>
          <div class='grid_12'>
                <div class='sufon HeadResult  HeadResultCenter' style='margin-bottom:0px'>ผลตรวจสอบกรรมที่คุณก่อไว้กับโลกในวันที่ผ่านมา</div> 
                <hr class='white-bottom'/> 
         </div>
         <div class = 'clear'></div>
          	                	      <div class='grid_12' style='height:20px'></div><div class='clear'></div>
         <div class = 'grid_12' style = 'height:150px;'>
            <div class ='sufon joke_result'>
              <div class ='img'>
               <img src='../".drupal_get_path('module','howcool')."/".$pic."'></img>
              </div>
              <div class='headline'>
                $headline
              </div>
              <div class ='content'>
                $content
              </div>
            </div>
         </div>
  
         <div class = 'clear'></div>
         <div class='grid_12' style='height:20px'></div><div class='clear'></div>
         <div class='grid_12'>
                <div class='sufon HeadResultTitle'>ผลกรรมในช่วง 1 วัน</div> 
                <hr class='white-bottom'/>     
         </div>
         <div class = 'clear'></div>
         <div class='grid_12' style='height:20px'></div>
         <div class='clear'></div>
        ".//<!--------------------------Start Day------------->
	      "
	      <div class='grid_12'>
	        <div class='grid_2 alpha'> 
	              <div id = 'weight' class ='people_pic'></div>    
	        </div>
	        <div class='grid_5'>
	              <div id = 'point_water'></div>
	        </div>
	        <div class='grid_5 omega'>
      	         <div id = 'point_carbon'></div>
	        </div>
	      </div>
	      <div class = 'clear'></div>
	      <div class = 'grid_12'>
	      <div class='grid_2 alpha' >
		            <div  class ='people_pic'>
		              <img src='../".drupal_get_path('module','howcool')."/images/info/w.png'></img>
		            </div>
		            <div class= 'HeadResult'>ตัวคุณ</div>
	      </div>
	      <div class='grid_5'>
	       
		     <div id='water-day'></div>
		    
		     <div class = 'HeadResult'>ปริมาณน้ำ</div>
	      </div>
 
	      <div class='grid_5 omega'>

		       <div id='carbon-day'></div>
		       <div class = 'HeadResult'>ปริมาณคาร์บอน</div>
	      </div>  
	      </div>
	      <div class='clear'></div>
	                	      <div class='grid_12' style='height:20px'></div><div class='clear'></div>
          
	      ".//<!--------------------------End day & Start Space------------------------>
	      "
        
         <div class='grid_12'>
                <div class='sufon HeadResultTitle'>ผลกรรมในช่วง 1 ปี</div> 
                <hr class='white-bottom'/>     
         </div>
	      ".//<!--------------------------End Space $ Start Year ------------------------>
	      "
	      	                	      <div class='grid_12' style='height:20px'></div><div class='clear'></div>
	      <div class='grid_2'>
		      <div id = 'weightz'></div>
		      <div  class ='people_pic'>
		        <img src='../".drupal_get_path('module','howcool')."/images/info/w.png'></img>
		      </div>
		      <div class= 'HeadResult'>ตัวคุณ</div>
	      </div>
	  
	       
	      <div class='grid_5'>
	        <div class = 'sufon' id = 'point_water_year'></div>
		      <div class = 'sufon' id='water-year'></div>
		      <div class = 'HeadResult'>ปริมาณน้ำ</div>
	      </div>
	     
	      <div class='grid_5'>
	          <div class = 'sufon' id = 'point_carbon_year'></div>
		        <div class = 'sufon' id='carbon-year'></div>
		        <div class = 'HeadResult'>ปริมาณคาร์บอน</div>
	      </div>
	      <div class='clear'></div>	
        	                	      <div class='grid_12' style='height:20px'></div><div class='clear'></div>
	      ".//<!-------------------`-------End Year & Start foot Content ------------------------>
	      "
          <div class='grid_12'>
          
		       <p align='center'>	  			
 					   
<div class=\"addthis_toolbox style='align:center' \">   
    <div class=\"custom_images\" style='text-align:center'>
      
  			  <a class=\"addthis_button_email\"><img src=\"../" .drupal_get_path('module', 'howcool'). '/images/icon/email.png'.   " \" width=\"60\" height=\"60\" alt=\"Email\" title='ส่งอีเมล์แบ่งปันให้เพื่อน' /></a>
    
            <a class=\"addthis_button_twitter\"><img src=\"../" .drupal_get_path('module', 'howcool'). '/images/icon/twitter2.png'.   " \" width=\"60\" height=\"60\" alt=\"Twitter\" /></a>
            <a class=\"addthis_button_facebook\"><img src=\"../" .drupal_get_path('module', 'howcool'). '/images/icon/facebook.png'.   " \" width=\"60\" height=\"60\" alt=\"Facebook\" /></a>
           
            
    </div>
</div>

						<script type=\"text/javascript\" src=\"http://s7.addthis.com/js/250/addthis_widget.js#username=nazt\"></script>
						<!-- AddThis Button END -->

  			  </p>
	      </div> 
	      
	      
	      
	      
	      
	      <div class='clear'></div>	
        ".//<!--------------------------End foot content & End Everything ------------------------>      
        "
      </div>
  
      ";
  }
}
?>
