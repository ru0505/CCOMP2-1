<html>

<head>
    <title> pagina web </title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="srylesheet" href="css/bootstrap.css">
    <link rel="srylesheet" href="css/bootstrap-theme.css">
    <script src="js/bootstrap.js"></script>
	<link rel="stylesheet" type="text/css" href="dinamic.css">

</head>

<body>
	
	<form method="POST" action="proces.php" >
	    <h1>Formulario</h1>
		<table width="500px">
		<label for="nombre">Nombre completo:</label>
		<input type="text" id="nombre" name="nombre" placeholder="introduzca su nombre" required>
		<br>
		<label for="fecha">Fecha de Nacimiento: </label>
		<input type="date" id="fecha" name="fecha">
		<br>
		<label for="correo">Correo electrónico:</label>
		<input type="email" id="correo" name="correo" placeholder="ejemplo@gmail.com" required>
		<br>
		<label for="telefono">Teléfono:</label>
		<input type="tel" id="telefono" name="telefono" placeholder="introduzca su numero "required>
		<br>
		<label for="direccion">Dirección:</label>
		<input type="text" id="direccion" name="direccion"placeholder="introduzca su direccion"  required>
		<br>
		<label for="nacionalidad">Nacionalidad:</label>
      	<select id="nacionalidad" name="nacionalidad">
        <option value="peru">Perú</option>
		<option value="chile">Chile</option>
        <option value="brasil">Brasil</option>
        <option value="ecuador">Ecuador</option>
        <option value="colombia">Colombia</option>
        <option value="mexico">México</option>
		<option value="peru">Venezuela</option>
		<option value="chile">Surinam</option>
        <option value="brasil">Guyana</option>
        <option value="ecuador">Uruguay</option>
        <option value="colombia">Australia</option>
        <option value="mexico">EEUU</option>
		<option value="mexico">Canada</option>
		<option value="peru">Cuba</option>
		<option value="chile">Republica dominicana</option>
        <option value="brasil">Jamaica</option>
        <option value="ecuador">Rusia</option>
        <option value="colombia">Portugal</option>
        <option value="mexico">Polonia</option>
		<option value="brasil">Rumania</option>
        <option value="ecuador">Luxemburgo</option>
        <option value="colombia">Noruega</option>
        <option value="mexico">grecia</option>
      	</select>
		<br>
		<label>Nivel de ingles:</label><br>
		<input type="radio" id="basico" name="ingles" value="basico">
		<label for="basico">Básico</label><br>
		<input type="radio" id="intermedio" name="ingles" value="intermedio">
		<label for="intermedio">Intermedio</label><br>
		<input type="radio" id="avanzado" name="ingles" value="avanzado">
		<label for="avanzado">Avanzado</label><br>
		<br>
		<label for="lenguajes">Lenguajes de programación:</label>
    	<select id="lenguajes" name="lenguajes" multiple>
        <option value="javascript">JavaScript</option>
        <option value="python">Python</option>
        <option value="java">Java</option>
        <option value="csharp">C#</option>
        <option value="php">PHP</option>
		<option value="php">c++</option>
      	</select>
		<br>
		<label for="ocupacion">Ocupación:</label>
		<input type="text" id="ocupacion" name="ocupacion" required>
		<br>
		<label for="aptitudes">Aptitudes:</label>
      	<input type="text" id="aptitudes" name="aptitudes" list="aptitudes-list">
      	<datalist id="aptitudes-list">
        <option value="Trabajo en equipo">
        <option value="Comunicacion">
        <option value="Liderazgo">
        <option value="Resolución de problemas">
		<option value="Respeto">
      	</datalist><br>

		<label for="habilidades">Habilidades:</label><br>
		<input type="checkbox" id="habilidades1" name="habilidades" value="creatividad">
		<label for="habilidades">Creatividad</label><br>
		<input type="checkbox" id="habilidades1" name="habilidades" value="flexibilidad">
		<label for="habilidades">Flexibilidad</label><br>
		<input type="checkbox" id="habilidades1" name="habilidades" value="innovar">
		<label for="habilidades">Innovar y crear</label><br>
		<input type="checkbox" id="habilidades1" name="habilidades" value="tiempo">
		<label for="habilidades">Gestion del Tiempo</label><br>
		<label for="Ocupacion">Perfil:</label>
		<textarea id="Perfil" name="Perfil" rows="2" cols="3"></textarea><br>
		<input type="submit" name= "enviar" value="Enviar">
		</table>
	</form>
	<?php include("proces.php"); ?>
</body>

<script src="js/jquery.js"></script>
</html>