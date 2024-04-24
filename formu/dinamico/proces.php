<?php
  include("base.php");

  if(isset($_POST['enviar'])){
    if(strlen($_POST['nombre'])>=1 && 
    strlen($_POST['fecha'])>=1 &&
    strlen($_POST['correo'])>=1 &&
    strlen($_POST['telefono'])>=1 &&
    strlen($_POST['direccion'])>=1 &&
    strlen($_POST['nacionalidad'])>=1 &&
    strlen($_POST['ocupacion'])>=1 &&
    strlen($_POST['aptitudes'])>=1 &&
    strlen($_POST['lenguajes'])>=1 &&
    strlen($_POST['ingles'])>=1 &&
    strlen($_POST['habilidades'])>=1 ){
        $nombre =trim($_POST['nombre']);
        $fecha =trim($_POST['fecha']);
        $correo =trim($_POST['correo']);
        $telefono =trim($_POST['telefono']);
        $direccion =trim($_POST['direccion']);
        $nacionalidad =trim($_POST['nacionalidad']);
        $ocupacion =trim($_POST['ocupacion']);
        $aptitudes =trim($_POST['aptitudes']);
        $lenguajes =trim($_POST['lenguajes']);
        $ingles =trim($_POST['ingles']);
        $habilidades =trim($_POST['habilidades']);
        $consulta = "INSERT INTO `formulario`(`Nombre completo`, `Fecha de Nacimiento`, `Correo electronico`, `Teléfono`, `Direccion`, `Nacionalidad`, `Nivel de ingles`, `Lenguaje de programacion`, `Ocupación`, `Aptitudes`, `Habilidades`)
         VALUES ('$nombre','$fecha','$correo','$telefono','$direccion','$nacionalidad','$ingles','$lenguajes','$ocupacion','$aptitudes','$habilidades')";
        $resultado = mysqli_query($conex,$consulta);
        if($resultado){
            ?>

            <h3 class="estabien"> ¡se guardo en la base de datos correctamente!</h3>
            <?php
            include("mostrar.php");
        }else{
            ?>
            <h3 class="no">¡ups!</h3>
            <?php
        }

    }else{
        ?>
        <h3 class="no">¡complete los campos!</h3>
        <?php
    }
  }
?>
