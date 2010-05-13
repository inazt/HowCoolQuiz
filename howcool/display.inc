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
 
  public function showScore() {
     return " 
      <div class='container_12'>
         <div class = 'grid_12' style = 'height:150px;background-color:black'>
              this should be image
         </div>
         <div class = 'clear'></div>
         <div class='grid_12 spacer';'></div>
        ".//<!--------------------------Start Day------------->
	      "<div class='grid_2' style = 'height:100px;'>
		      <div id = 'weight' style='text-align:center;'></div>
	      </div>
	      <div class='grid_5'>
		     <div id='water-day'></div>
	      </div>
 
	      <div class='grid_5'>
		       <div id='carbon-day'></div>
	      </div>
	      <div class='clear'></div>
	      ".//<!--------------------------End day & Start Space------------------------>
	      "
        <div class='grid_12 spacer'></div>
	      <div class='clear'></div>
	      ".//<!--------------------------End Space $ Start Year ------------------------>
	      "
	      
	      <div class='grid_2'>
		      <div id = 'weight2' style='text-align:center;'></div>
	      </div>
	  
	       
	      <div class='grid_5'>
		    <div id='water-year'></div>
	      </div>
	     
	      <div class='grid_5'>
		        <div id='carbon-year'></div>
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
