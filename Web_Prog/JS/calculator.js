var result=0;
var num_1=0, num_2=0;
var op_num=0;
var op;
var answer=document.getElementById("ans");

function lol(){
    answer.innerHTML="<div style='position: relative; top:31%; left: 27%; font-family: monospace; color: white'>Enter number 1</div>";
}

function for_num_1(clicked){
    num_1=parseInt(clicked);
    answer.innerHTML="<div style='position: relative; top:31%; left: 27%; font-family: monospace; color: white'>"+num_1+"</div>";
}

function for_op(clicked){
    op_num=clicked;
    if(op_num==43) op='+';
    else if(op_num==42) op='*';
    else if(op_num==45) op='-';
    else if(op_num==47) op='/';
    answer.innerHTML="<div style='position: relative; top:31%; left: 27%; font-family: monospace; color: white'>"+op+"</div>";
}

function for_num_2(clicked){
    num_2=parseInt(clicked);
    answer.innerHTML="<div style='position: relative; top:31%; left: 27%; font-family: monospace; color: white'>"+num_2+"</div>";
}

function res(){
    if(op=='+') result=num_1+num_2;
    else if(op=='*') result=num_1*num_2;
    else if(op=='-') result=num_1-num_2;
    else if(op=='/') result=num_1/num_2;
    answer.innerHTML="<div style='position: relative; top:31%; left: 27%; font-family: monospace; color: white'>"+result+"</div>";
    num_1=0;
    num_2=0;
    result=0;
    op_num=0;
}