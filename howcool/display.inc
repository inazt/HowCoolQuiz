<?php
class DisplayOutput
{
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
  public function createGrid($value){
    $form_element = array(
      '#type'=>'markup',
      '#value'=>"<div class='grid_".$value."'><h2></h2></div>",
    );
    return $form_element;
  }
  public function createGridWithLine($value){
    $form_element = array(
      '#type'=>'markup',
      '#value'=>"<div class='grid_".$value."'><h2></h2></div><div class='clear'></div>",
    );
    return $form_element;
  }
  public function openGrid($value){
    $form_element = array(
      '#type'=>'markup',
      '#value'=>"<div class='grid_".$value."'>",
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
 

  
  public function showScore() {
     return " 
      <div class='container_12'>
	      <h2>
		     Result 
	      </h2>
	      <div class='grid_2'>
		      <p>
			      2
		      </p>
	      </div>
	      <div class='grid_5'>
		     <div id='water-day'></div>
	      </div>
 
	      <div class='grid_5'>
		       <div id='carbon-day'></div>
	      </div>
 
	       
	      <div class='clear'></div>
        <div class='grid_12 spacer'>
		       
	      </div>
	         <div class='clear'></div>
	      <div class='grid_2'>
		      <p>
			      2
		      </p>
	      </div>
	  
	       
	      <div class='grid_5'>
		    <div id='water-year'></div>
	      </div>
	     
	      <div class='grid_5'>
		        <div id='carbon-year'></div>
	      </div>
	       
	      <div class='clear'></div>	
          <div class='grid_12'>
		      <p>12</p>
	      </div>
	      <div class='clear'></div>	
        
      </div>";
  }
  public function showProfileFormTop() {
    return  "<div class='container_12'>
	      <h2>  Result </h2>
	      <div class='grid_1'>
		      <p> 1  </p>
	      </div>
	      <div class='grid_4'>
		      <p> <img src=' ". drupal_get_path('module', 'howcool') . '/images/p1_0.png' ."'> </p>
	      </div>
	  
 
	  
        <div class='grid_1'><p>1</p></div>
	      <div class='grid_5'> 
	           
	             
	            
		         <div class='pop'>	          
	       "; 
  }
  public function showProfileFormBottom() {
    return "
              </div>
           
        </div>
	  
	       
	      <div class='grid_1'>
		     <p> 1</p>
	      </div>
	       <div class='clear'></div>	
        
      </div>";
   }
  public function showProfileFormFull() {
  return " 
      <div class='container_12'>
	      <h2>
		     Result 
	      </h2>
	      <div class='grid_2'>
		      <p>
			      2
		      </p>
	      </div>
	      <div class='grid_5'>
		     <div id='water-day'></div>
	      </div>
 
	      <div class='grid_5'>
		       <div id='carbon-day'></div>
	      </div>
 
	       
	      <div class='clear'></div>
        <div class='grid_12 spacer'>
		       
	      </div>
	         <div class='clear'></div>
	      <div class='grid_2'>
		      <p>
			      2
		      </p>
	      </div>
	  
	       
	      <div class='grid_5'>
		    <div id='water-year'></div>
	      </div>
	     
	      <div class='grid_5'>
		        <div id='carbon-year'></div>
	      </div>
	       
	      <div class='clear'></div>	
          <div class='grid_12'>
		      <p>12</p>
	      </div>
	      <div class='clear'></div>	
        
      </div>";
  }
}
?>
