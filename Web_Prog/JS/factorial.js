var num, fact=1;

num=prompt("Enter the number: ");
num=passInt(num);

function factorial(){
    for(var i=1; i<=num; i++){
        fact*=i;
    }

    document.write("The factorial is: "+fact);
}
