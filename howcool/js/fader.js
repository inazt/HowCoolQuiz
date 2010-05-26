$(document).ready(function(){
  $('.cool_check .form-checkboxes img').mouseover(function () {
  $(this).css({cursor:'pointer'});
  $(this).fadeOut('fast').fadeIn('slow');
  });
});
