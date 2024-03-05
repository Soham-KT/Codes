function calc_si(){
    var principal=document.getElementById("princi").value;
    var roi=document.getElementById("rate").value;
    var time_y=document.getElementById("time").value;
    var si=(principal*roi*time_y)/100;
    var x=document.getElementById("welp");

    x.innerHTML+="<div style='background-color: grey; height:70px; width:300px; border:3px; position: absolute; top:180px; left:8px; border:3px solid black;'>Principal amount: "+principal+"<br>Rate of intrest: "+roi+"<br>Time : "+time_y+" years<br>Simple Intrest: "+si+"</div>";
}

function clr(){
    window.location.reload();
}