<?php 
	include_once "conexao.php";

	if (isset($_POST['entrar'])) { // Recupera os dados dos campos 
		$email = $_POST['emailCadastrado'];

		$sql="select perfilUsuario from usuarios where emailUsuario='$email'";
		$consulta=$conector->query($sql);

		$line=$consulta->fetch_array();
		echo "<img src='" . $line["perfilUsuario"] . "'/>";
	}
?>