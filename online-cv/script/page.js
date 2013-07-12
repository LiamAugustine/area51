/*
  Page turning script
  Created by: James Standeven
  Created: July 3, 2013
  Last Edited: July 5, 2013
*/

/*  Should make all browsers recongize header, footer and nav semantic elements. */
  document.getElementById('page1').style.display = 'block';
  document.getElementById('page2').style.display = 'none';
  document.getElementById('page3').style.display = 'none';


function turnPage(e){
  var element = e;
  if (element == null) element = event.srcElement;
  var home = document.getElementById('page1');
  var english = document.getElementById('page2');
  var japanese = document.getElementById('page3');
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

