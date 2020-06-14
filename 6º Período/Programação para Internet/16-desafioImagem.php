<?php 
	include_once "conexao.php";
	if (isset($_POST['cadastrar'])) { // Recupera os dados dos campos 
		$nome = $_POST['nome']; 
		$email = $_POST['email']; 
		$foto = $_FILES["foto"]; //os arquivos são enviados neste vetor $_FILES

		//Verificamos também se existem imagens enviadas 
			if (!empty($foto["name"])) {
			//A última validação é a do formato do arquivo 
				if(!preg_match("/^image\/(pjpeg|jpeg|png|gif|bmp)$/", $foto["type"])){ 
						$error = "Isso não é uma imagem."; 
				}
				//Caso não tenha erro vamos guardar as informações 
				if (!isset($erro)) { 
					$size=getimagesize($foto["tmp_name"]);

					if($size[0]==200 && $size[1]==240)
					{
						// Pega extensão da imagem 
						preg_match("/\.(gif|bmp|png|jpg|jpeg){1}$/i", $foto["name"], $ext); 
						//Busco em meu banco o valor do próximo auto_incremente da tabela 
						//E em seguida monto o arquivo com a id e a extensão do arquivo 
						$sql = "show table status like 'usuarios'"; 
						$consulta = $conector->query($sql); 
						$linha = $consulta->fetch_array(); 
						$nome_imagem = $linha['Auto_increment'].".".$ext[1] ;
						
						//Monto o caminho completo da imagem 
						$caminho_imagem = "imagensPerfil/".$nome_imagem;		
						// A imagem já está no servidor, mas na pasta temporária do PHP 
						//vamos mover ela para nossa pasta de imagens 
						move_uploaded_file($foto["tmp_name"], $caminho_imagem);

			
						$sql="insert into usuarios values(null,'" . $nome . "','" . $email . "','" . $caminho_imagem . "')";
						$consulta=$conector->query($sql);
					}
					else{
						echo "Imagem deve ter 200x240";
					}
				}
			}
			
	}
?>