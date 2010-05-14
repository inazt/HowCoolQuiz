<?php
class DisplayOutput
{
  public function insertPicture($path){
    $form_element = array(
      '#type'=> 'markup',
      '#value'=> '<img src='.drupal_get_path('module', 'howcool').'/'.$path.'></img>',
    );
    return $form_element;
  }
  public function openDiv($name){
    $form_element = array(
      '#type'=>'markup',
      '#value'=>"<div class='".$name."'>",
    );
    return $form_element;
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
  public function showScore($pic) {
     
     return " 
      <div class='container_12'>
          <div class='grid_12' style='text-align:center;'>
              <img src='../".drupal_get_path('module','howcool')."/images/title_step_result.png'></img>
         </div>
         <div class = 'clear'></div>
         <div class = 'grid_12' style = 'height:150px;'>
              <img src='../".drupal_get_path('module','howcool')."/".$pic."'></img>
         </div>
  
         <div class = 'clear'></div>
         
         <div class='grid_12' style='text-align:center;'>
               <img src='../".drupal_get_path('module','howcool')."/images/title_step_result_2.png'></img>
         </div>
         <div class = 'clear'></div>
        ".//<!--------------------------Start Day------------->
	      "
	      <div class = 'graph_controller'>
	      <div class='grid_2' >
		      <div id = 'weight' class ='people_pic'></div>
		      <div  class ='people_pic'>
		        <img src='../".drupal_get_path('module','howcool')."/images/info/w.png'></img>
		      </div>
		      <div class= 'HeadResult'>
		        ตัวคุณ
		      </div>
	      </div>
	      <div class='grid_5'>
	       <div id = 'point_water'></div>
		     <div id='water-day'></div>
		    
		     <div class = 'HeadResult'>
		        ปริมาณน้ำ
		      </div>
	      </div>
 
	      <div class='grid_5'>
	         <div id = 'point_carbon'></div>
		       <div id='carbon-day'></div>
		       <div class = 'HeadResult'>
		         ปริมาณคาร์บอน
		      </div>
	      </div>
	      <div class='clear'></div>
	      </div>
	      ".//<!--------------------------End day & Start Space------------------------>
	      "
        
	      <div class='grid_12' style='text-align:center;'>
              <img src='../".drupal_get_path('module','howcool')."/images/title_step_result_3.png'></img>
         </div>
	      ".//<!--------------------------End Space $ Start Year ------------------------>
	      "
	      
	      <div class='grid_2'>
		      <div id = 'weightz'></div>
		      <div  class ='people_pic'>
		        <img src='../".drupal_get_path('module','howcool')."/images/info/w.png'></img>
		      </div>
		      <div class= 'HeadResult'>
		        ตัวคุณ
		      </div>
	      </div>
	  
	       
	      <div class='grid_5'>
	        <div id = 'point_water_year'></div>
		      <div id='water-year'></div>
		      <div class = 'HeadResult'>
		         ปริมาณน้ำ
		      </div>
	      </div>
	     
	      <div class='grid_5'>
	          <div id = 'point_carbon_year'></div>
		        <div id='carbon-year'></div>
		        <div class = 'HeadResult'>
		         ปริมาณคาร์บอน
		      </div>
	      </div>
	      <div class='clear'></div>	
	      ".//<!--------------------------End Year & Start foot Content ------------------------>
	      "
	      
          <div class='grid_12'>
		      <p></p>
	      </div>
	      <div class='clear'></div>	
        ".//<!--------------------------End foot content & End Everything ------------------------>      
        "
      </div>";
  }
}
?>
