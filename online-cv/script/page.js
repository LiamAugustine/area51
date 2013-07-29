/*
  Page turning script
  Created by: James Standeven
  Created: July 3, 2013
  Last Edited: July 5, 2013
*/	
	
/* Set default page display on load*/	
	document.getElementById('top').style.display = 'block';
  document.getElementById('top-english').style.display = 'none';
  document.getElementById('top-japanese').style.display = 'none';


function turnPage(e){
  var element = e;
  if (element == null) element = event.srcElement;
  var home = document.getElementById('top');
  var english = document.getElementById('top-english');
  var japanese = document.getElementById('top-japanese');
  if(element.id == 'home'){
    home.style.display ='block';
    english.style.display ='none';
    japanese.style.display ='none';
  }
  else if(element.id == 'english'){
    home.style.display ='none';
    english.style.display ='block';
    japanese.style.display ='none';
  }
  else if(element.id == 'japanese'){
    home.style.display ='none';
    english.style.display ='none';
    japanese.style.display ='block';
  }
  else alert('Error');
}

