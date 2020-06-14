<?php 
	class Conexao
	{
		private $servidor = "localhost";
		private $usuario = "root";
		private $banco = "prova";
		private $senha = "dados";
		public $con;

		public function getConexao()
		{
			$this->con = null;
			try{
				$this->con = new mysqli($this->servidor,$this->usuario,$this->senha,$this->banco);
			}catch(PDOException $exception){
				echo "Erro ao conectar" . $exception -> getMessage();
			}
			return $this->con;
		}
	}
 ?>