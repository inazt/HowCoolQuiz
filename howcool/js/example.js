$(document).ready(function() {
  
   $('#water-day').score(Drupal.settings.howcool.waterday,"water");  
   $('#water-year').score(Drupal.settings.howcool.wateryear,"water");   
   
   $('#carbon-day').score(Drupal.settings.howcool.carbonday,"carbon");
   $('#carbon-year').score(Drupal.settings.howcool.carbonyear,"carbon");
});