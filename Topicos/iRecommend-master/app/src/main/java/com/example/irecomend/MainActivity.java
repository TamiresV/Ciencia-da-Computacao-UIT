package com.example.irecomend;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button btnLogin = (Button) this.findViewById(R.id.btnLogin);
        Button btnCadastroCliente = (Button) this.findViewById(R.id.btnCadastroCliente);
        Button btnCriacaoEvento = (Button) this.findViewById(R.id.btnCriacaoEvento);
        Button btnCarregamentoEvento = (Button) this.findViewById(R.id.btnCarregamentoEvento);

        btnLogin.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(getApplicationContext(), TelaLogin.class));
            }
        });
        btnCadastroCliente.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
               startActivity(new Intent(getApplicationContext(), TelaCadastroCliente.class));
            }
        });
        btnCriacaoEvento.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(getApplicationContext(), TelaCadastroEvento.class));
            }
        });
        btnCarregamentoEvento.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(getApplicationContext(), TelaCarregaEvento.class));
            }
        });
    }

}
