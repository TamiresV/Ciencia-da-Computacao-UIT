<?php 
	//testando construtor de notícias 
	//construtor_noticias.php

	class Noticia{ 
		public $titulo; 
		public $texto;

		function __construct($valor_titulo, $valor_txt)
		{ 
			$this->titulo = $valor_titulo; 
			$this->texto = $valor_txt; 
		}
		function exibeNoticia()
		{ 
			echo "<center>"; 
			echo "<b>" . $this->titulo . "</b><p>"; 
			echo "<b>" . $this->texto . "</b><p>"; 
			echo "</center><p>"; 
		}
		function __call($parametro1, $parametro2)
		{
			echo "<center>";
			echo "O metodo procurado nao existe";
			echo "</center><p>"; 
		}
		function __toString()
		{
			return $this->texto;
		}
		function __get($titulo)
		{
			return $this->titulo;
		}
		function __set($titulo,$texto)
		{
			$this->titulo = $titulo;
		}
}
?>