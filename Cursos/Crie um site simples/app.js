'use strict';
const switcher = document.querySelector('.bnt');

switcher.addEventListener('click', function(){
    document.body.classList.toggle('darktheme');
    document.body.classList.toggle('lighttheme');

    var className = document.body.className;
    if(className.includes("lighttheme")){
        this.textContent = 'dark';
    }
    else{
        this.textContent = 'light';
    }

    console.log('current class name: ' + className);
});