inputText = function (content) {
    var firstConvert = secondConvert = "";
    var convert = content.split("");
    for(i=0; i<convert.length; i++){
        firstConvert += convert[convert.length - i - 1];
    }
    document.getElementById("outputbox").innerHTML = firstConvert;
}
