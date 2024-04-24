<?php 
$not = include("base.php");
if($not){
    $consulta = "SELECT * FROM formulario";
    $resultado = mysqli_query($conex,$consulta);
    if($resultado){
        while($rom =$resultado ->fetch_array()){
            $nombre=$rom['Nombre completo'];
            $fecha =$rom['Fecha de Nacimiento'];
            $correo =$rom['Correo electronico'];
            $telefono =$rom['Teléfono'];
            $direccion =$rom['Direccion'];
            $nacionalidad =$rom['Nacionalidad'];
            $ocupacion =$rom['Ocupación'];
            $aptitudes =$rom['Aptitudes'];
            $lenguajes =$rom['Lenguaje de programacion'];
            $ingles =$rom['Nivel de ingles'];
            $habilidades =$rom['Habilidades'];
            ?>
            <div>
                <h2>imformacion del Usuario</h2>
                <div>
                    <p>
                        <b class="yo">Nombre: </b><?php echo $nombre; ?><br>
                        <b class="yo">Fecha: </b><?php echo $fecha; ?><br>
                        <b class="yo">correo: </b><?php echo $correo; ?><br>
                        <b class="yo">telefono: </b><?php echo $telefono; ?><br>
                        <b class="yo">direccion: </b><?php echo $direccion; ?><br>
                        <b class="yo">nacionalidad: </b><?php echo $nacionalidad; ?><br>
                        <b class="yo">ocupacion: </b><?php echo $ocupacion; ?><br>
                        <b class="yo">aptitudes: </b><?php echo $aptitudes; ?><br>
                        <b class="yo">lenguajes: </b><?php echo $lenguajes; ?><br>
                        <b class="yo">ingles: </b><?php echo $ingles; ?><br>
                        <b class="yo">habilidades: </b><?php echo $habilidades; ?><br>
                     </p>
        </div>
        </div>
        <?php

        }
    }
}
?>