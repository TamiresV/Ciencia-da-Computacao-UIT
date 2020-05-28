package com.example.irecomend;

import android.content.Context;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import com.example.irecomend.connection.Conexao;
import com.example.irecomend.model.bean.Evento;
import com.example.irecomend.model.dao.EventoDAO;

public class TelaCadastroEvento extends AppCompatActivity {

    private Evento evento;
    private EventoDAO eventoDAO;

    EditText nomeEvento;
    EditText data;
    EditText preco;
    EditText cep;
    EditText rua;
    EditText numero;
    EditText bairro;
    EditText cidade;
    EditText estado;
    EditText pais;
    Button btnConfirmar;

    Context context;

    double precoFinal;
    int numRua;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_tela_cadastro_evento);

        context = this.getApplicationContext();

        nomeEvento = (EditText)findViewById(R.id.nomeEvento);
        data = (EditText)findViewById(R.id.DataHoraEvento);
        preco = (EditText)findViewById(R.id.Preco);
        precoFinal = 0.00;//Double.parseDouble(preco.getText().toString());
        //cep.setText("35500-000");//(EditText)findViewById(R.id.CEP);
        rua = (EditText)findViewById(R.id.Rua);
        numero = (EditText)findViewById(R.id.Numero);
        numRua = 0;//Integer.parseInt(numero.getText().toString());
        bairro = (EditText)findViewById(R.id.Bairro);
        cidade = (EditText)findViewById(R.id.Cidade);
        estado = (EditText)findViewById(R.id.Estado);
        pais = (EditText)findViewById(R.id.Pais);
        btnConfirmar = (Button)findViewById(R.id.Confirmar);

        btnConfirmar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                eventoDAO = new EventoDAO(context);
                evento = new Evento(nomeEvento.getText().toString(), data.getText().toString(), precoFinal, rua.getText().toString(), /*cep.getText().toString()*/"35500-000",
                        numRua, bairro.getText().toString(), cidade.getText().toString(), estado.getText().toString(), pais.getText().toString());
                if ( eventoDAO.inserirEvento(evento) > 0){
                    Toast.makeText(context, "Evento Inserido!", Toast.LENGTH_LONG);
                }
            }
        });

        nomeEvento.requestFocus();

    }
}