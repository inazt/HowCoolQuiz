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
  public function createGridWithLine($value){
    $form_element = array(
      '#type'=>'markup',
      '#value'=>"<div class='grid_".$value."'><h2></h2></div><div class='clear'></div>",
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
  public function showScaleTop($image) { 
    return "<div class='container_12'>
	      <h2>  Result </h2>
	      <div class='grid_2'>
		      <p> 1  </p>
	      </div>
	      <div class='grid_6'>
		      <p> <img src=' ". drupal_get_path('module', 'howcool') . '/images/'."$image  '> </p>
	      </div>
	  
 
	      <div class='grid_4'> 
	           
	             
	            
	     <div class='pop'>	";
  
  }
  public function showScaleBottom() {
    return "</div>
           
        </div>
 
	       <div class='clear'></div>	
        
      </div>";    
  }
}
class ResultOutput
{
 
  public function showScore() {
     return " 
      <div class='container_12'>
        ".//<!--------------------------Start Day------------->
	      "<div class='grid_2'>
		      <p>
		      </p>
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
        <div class='grid_12' stlye='height:10px;'><p></p></div>
	      <div class='clear'></div>
	      ".//<!--------------------------End Space $ Start Year ------------------------>
	      "
	      
	      <div class='grid_2'>
		      <p>
			      
		      </p>
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
		      <p>12</p>
	      </div>
	      <div class='clear'></div>	
        ".//<!--------------------------End foot content & End Everything ------------------------>      
        "
      </div>";
  }
}
?>
