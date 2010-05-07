<?php
//nat = function t include ma jak nat's module
function who_view() {
  
  $show = theme('headline','sssop');
  if(!empty($form_state['values'])){
    $show .='sss';
  }
  $show .= drupal_get_form('popform',$form_state);
  return $show;
}

function result_view($input){
  $show = theme('headline','Result = ');
  if($_GET['score']>0){
    $show .= nat($_GET['score'],10,'water');
  }
  $show .=$input;
  return $show;
}
