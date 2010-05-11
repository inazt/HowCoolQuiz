jQuery.fn.score	 = function(initialRating,icon) {
  stars=Math.ceil(initialRating/10)*10;
  lines=(stars/10)-1;
  plot=10-(stars-initialRating);
  //Save  the jQuery object for later use.
  var elements = this;
  
  //Go through each object in the selector and create a ratings control.
  return this.each(function() {
  
    //Make sure intialRating is set.
    if(!initialRating)
      initialRating = 0;
      
    //Save the current element for later use.
    var containerElement = this;
    
    //grab the jQuery object for the current container div
    var container = jQuery(this);
    
    //Create an array of stars so they can be referenced again.
    var starsCollection = Array();
    
    //Save the initial rating.
    containerElement.rating = initialRating;
    
    //Set the container div's overflow to auto.  This ensure it will grow to
    //hold all of its children.
    container.css('overflow', 'auto');
///////////////////////////////////////////////
      for(var i=0;i<10;i++)
      {
        var starElement = document.createElement('div'); 
        //Get a jQuery object for this star.
        var star = jQuery(starElement);
         star.addClass('empty-'+icon);
        if(i<plot)
          star.addClass('full-'+icon);
         container.append(star);        
      }    
         star.removeClass();
         star.addClass('new_line');
         container.append(star);   
//////////////////////////////////////////////
    for(var line = 0; line < lines; line++) {
      for(var i=0;i<10;i++)
      {
        var starElement = document.createElement('div'); 
        //Get a jQuery object for this star.
        var star = jQuery(starElement);
        star.addClass('empty-'+icon);
        star.addClass('full-'+icon);
         container.append(star);        
      }
         star.removeClass();
         star.addClass('new_line');
         container.append(star);      
    }
//////////////////////////////////////////
  });
};


