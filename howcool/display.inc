<?php
class DisplayOutput
{
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
?>
