var div_=document.getElementById("the_div");
var i=0;
var l=0; t=0;

var lol=setInterval(func, 10);

function func(){
    i+=8;
    if(i==360) i=0;
    t++;
    l=1.8461*t;
    if(t>=585 && l>=1080){
        
    }
    div_.style.transform="rotate("+i+"deg)";
    div_.style.top=t+"px";
    div_.style.left=l+"px";
}