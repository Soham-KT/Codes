var now=new Date();
var hr=now.getHours();
var min=now.getMinutes();
var sec=now.getSeconds();
var tar=document.getElementById("target");
var cur="Current time is: ";
tar.innerHTML=cur+"<br>"+hr+":"+min+":"+sec;
var x=setInterval(frame, 1000);

function frame(){
    if(sec==59){
        min++;
        sec=0;
        if(min==60){
            hr++;
            min=0;
        }
    }
    else sec++;
    tar.innerHTML=cur+"<br>"+hr+":"+min+":"+sec;
}