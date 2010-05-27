$(document).ready(function(){
  //$('form .error').removeClass('error').addClass('dddd');
	var marker = $('form .error').removeClass('error')
	$('.form-select').customStyle().css({left:$(".pop label").css("width")});
	marker.siblings().addClass('customError');
	$('.pop > .form-item > select').width($('.pop > .form-item > span').get(0).offsetWidth);
	$('.pop > .form-item > select').height($('.pop > .form-item > span').get(0).offsetHeight);
 //	$('.pop > .form-item > select').css({'font-size':'20px', 'line-height':'20px'});
//	$(".pop .form-select").css({left:$(".pop label").css("width")});
});

