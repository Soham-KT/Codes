function show_name_pass(){
    var name_=document.getElementById("name").value;
    var password=document.getElementById("pass").value;
    var x=document.getElementById("welp");
    x.innerHTML+="<div style='background-color: red; height:200px; width:300px; border:5px; position: absolute; top:130px; left:20px; border:3px solid black;'>Name: "+name_+"<br>Password: "+password+"</div>";
}

function clr(){
    window.location.reload();
}