
const imagen = document.getElementById('imagen');
const audio = document.getElementById('audio');
let n = 3;

imagen.addEventListener('click', function() {

    let contador = 0;

    function playaudio(){

        if (contador < n){
            audio.play();
            contador++;
        }
    }

    playaudio();

    audio.addEventListener("ended",function() {
        playaudio();
    })
});