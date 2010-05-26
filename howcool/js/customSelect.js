$(document).ready(function(){
  //$('form .error').removeClass('error').addClass('dddd');
	var marker = $('form .error').removeClass('error')
	$('.form-select').customStyle().css({left:$(".pop label").css("width")});
	marker.siblings().addClass('customError');
//	$(".pop .form-select").css({left:$(".pop label").css("width")});
});
