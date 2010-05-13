$(document).ready(function() {
  
   $('#water-day').score(Drupal.settings.howcool.waterday,"water");  
   $('#water-year').score(Drupal.settings.howcool.wateryear,"water");   
   
   $('#carbon-day').score(Drupal.settings.howcool.carbonday,"carbon");
   $('#carbon-year').score(Drupal.settings.howcool.carbonyear,"carbon");
   
   $('#weight').html(Drupal.settings.howcool.weight+" ก.ก.");
   $('#weight2').html(Drupal.settings.howcool.weight+" ก.ก.");
   $('#point_water').html(Drupal.settings.howcool.point_water+" ลิตร");
   $('$point_carbon').html(Drupal.settings.howcool.point_carbon+" กิโลกรรม");
});
