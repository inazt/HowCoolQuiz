<?php
function who_view() {
  
  $show = theme('headline','sssop');
  if(!empty($form_state['values']['foo'])){
  $show .= them('headline','Result = blablabla'); 
  }
  $show .= drupal_get_form('natform',$form_state);
  return $show;
}
