function saludar() {
    let nombre = document.getElementById("nombre").value;
    let saludo ="Hola, " + nombre + ".";
    document.getElementById("saludo").innerText = saludo;
}


    let image = document.getElementById("cat");
    let audio = document.getElementById("audio");
    

    image.addEventListener("click", function() {
    
    let n = parseInt(document.getElementById('inputMaulla').value, 10);
    
    let contador = 0;

    function playaudio() {
        
        if (contador < n) {
            audio.play();
            contador++;
        }
    }
    playaudio();

    audio.addEventListener("ended",function() {
    playaudio();
    }
    
    
)
})
