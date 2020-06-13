update paciente set cidade="Ilhota" where nome="Paulo";
update consulta set data='2013-07-04', hora='12:00' where codm=1 and codp=4;
update paciente set idade=idade+1, doenca='cancer' where nome='Ana';
update consulta set hora='14:30:00' where codm=3 and codp=4;

delete from funcionario where codf=4;
delete from consulta where hora>'19:00:00';
delete from paciente where doenca='cancer' or idade<10;
delete from medico where cidade in('Biguacu','Palhoça');