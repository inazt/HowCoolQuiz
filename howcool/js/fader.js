$(document).ready(function(){
  $('.cool_check .form-checkboxes label').mouseover(function () {
  $(this).css({cursor:'pointer'});
  $(this).fadeOut('fast').fadeIn('slow');
  });
});
