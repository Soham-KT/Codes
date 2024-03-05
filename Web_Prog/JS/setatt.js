var arr=new Array(4);
var i=0;

arr[0]="https://c4.wallpaperflare.com/wallpaper/142/751/831/landscape-anime-digital-art-fantasy-art-wallpaper-preview.jpg";
arr[1]="https://c4.wallpaperflare.com/wallpaper/1020/1/213/world-of-warcraft-battle-for-azeroth-video-games-warcraft-alliance-wallpaper-preview.jpg";
arr[2]="https://c4.wallpaperflare.com/wallpaper/365/244/884/uchiha-itachi-naruto-shippuuden-anbu-silhouette-wallpaper-preview.jpg";
arr[3]="https://c4.wallpaperflare.com/wallpaper/693/688/935/uchiha-madara-naruto-shippuuden-wallpaper-preview.jpg";

function greater(){
    var img=document.getElementById("image");
    img.setAttribute("src", arr[i]);
    i++;
    if(i==4) i=0;
}

function lesser(){
    var img=document.getElementById("image");
    img.setAttribute("src", arr[i]);
    i--;
    if(i==-1) i=3;
}