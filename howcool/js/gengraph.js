

$(document).ready(function() {
  
   $('#water-day').score(Drupal.settings.howcool.waterday,"water",Drupal.settings.howcool.max_waterday);  
   $('#water-year').score(Drupal.settings.howcool.wateryear,"water",Drupal.settings.howcool.max_wateryear);   
   $('#carbon-day').score(Drupal.settings.howcool.carbonday,"carbon",Drupal.settings.howcool.max_cabonday);
   $('#carbon-year').score(Drupal.settings.howcool.carbonyear,"carbon",Drupal.settings.howcool.max_cabonyear);
   
   
   $('#weight').html(Drupal.settings.howcool.weight+" ก.ก.");
   $('#weightz').html(Drupal.settings.howcool.weight+" ก.ก.");
   $('#point_water').html(Drupal.settings.howcool.point_water+" ลิตร");
   $('#point_carbon').html(Drupal.settings.howcool.point_carbon+" กิโลกรรม");
   $('#point_water_year').html(Math.ceil(Drupal.settings.howcool.point_water*365)+" ลิตร");
   $('#point_carbon_year').html(Math.ceil(Drupal.settings.howcool.point_carbon*365)+" กิโลกรรม");
   $('#show_image').html(Drupal.settings.howcool.image+" กิโลกรรม");
   
});
