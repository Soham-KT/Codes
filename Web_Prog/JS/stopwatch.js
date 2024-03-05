var hr, min, sec;
var str=document.getElementById("butt1");
var stp=document.getElementById("butt2");
var res=document.getElementById("butt3");
var cont=getElementById("lap");
var timer;
var x=document.getElementById("stpw");    

str.addEventListener('click', function(){
    timer=setInterval(start_, 1000);
});
    
stp.addEventListener('click', function(){
    clearInterval(timer);
});

res.addEventListener('click', function(){
    restart();
});

function time(){
    hr=0, min=0, sec=0;
    var watch=hr+":"+min+":"+sec;
    var x=document.getElementById("stpw");    
    x.innerHTML=watch;
}
    
function start_(){
    sec++;
    if(sec==59){
        sec=0;
        min++;
        if(min==59){
            min=0;
            hr++;
        }
    } 
                
    x.innerHTML=hr+":"+min+":"+sec;
}
    

function restart(){
    window.location.reload();
}