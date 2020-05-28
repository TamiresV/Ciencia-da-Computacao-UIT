package com.example.irecomend;

import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Patterns;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;


import com.example.irecomend.connection.Conexao;
import com.example.irecomend.model.bean.Cliente;
import com.example.irecomend.model.dao.ClienteDAO;

import static com.example.irecomend.R.menu.menu_cadastro_cliente;

public class TelaCadastroCliente extends AppCompatActivity {

    private Cliente cliente;
    private ClienteDAO clienteDAO;


    EditText nomeEditText;
    EditText sobrenomeEditText;
    EditText emailEditText;
    EditText senhaEditText;
    EditText confirmarEdittext;
    Button cadastrar;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_tela_cadastro_cliente);

        this.nomeEditText = this.findViewById(R.id.nomeEditText);
        this.sobrenomeEditText = this.findViewById(R.id.sobrenomeEditText);
        this.emailEditText = this.findViewById(R.id.emailEditText);
        this.senhaEditText = this.findViewById(R.id.senhaEditText);
        this.confirmarEdittext = this.findViewById(R.id.confirmarEdittext);

        this.cadastrar = this.findViewById(R.id.botaoCadastro);
        this.cadastrar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                validaCampos();
            }
        });



    }
    public void validaCampos()
    {
        boolean res = false;

        String nome=nomeEditText.getText().toString();
        String sobrenome=sobrenomeEditText.getText().toString();
        String email=emailEditText.getText().toString();
        String senha=emailEditText.getText().toString();
        String confirmacao=emailEditText.getText().toString();
        /*SE O CAMPO ESTIVER VAZIO VOLTA FOCO PRO PRÓPRIO CAMPO*/
        if(isCampoVazio(nome))
        {
            nomeEditText.requestFocus();
            res = true;
        }
        if(isCampoVazio(sobrenome))
        {
            sobrenomeEditText.requestFocus();
            res = true;
        }
        if(!isEmailValido(email))
        {
            emailEditText.requestFocus();
            res = true;
        }
        if(isCampoVazio(senha))
        {
            senhaEditText.requestFocus();
            res = true;
        }
        if(isCampoVazio(confirmacao))
        {
            confirmarEdittext.requestFocus();
            res = true;
        }
        if(res)
        {
            AlertDialog.Builder dlg = new AlertDialog.Builder(this);
            dlg.setTitle("Aviso");
            dlg.setMessage("Há campos inválidos ou em branco!");
            dlg.setNeutralButton("OK",null);
            dlg.show();
        }
        else if(!res)
        {
            clienteDAO = new ClienteDAO(this);
            cliente = new Cliente(this.nomeEditText.getText().toString(),this.sobrenomeEditText.getText().toString(),this.emailEditText.getText().toString(),this.senhaEditText.getText().toString());
            clienteDAO.inserirCliente(cliente);
            AlertDialog.Builder dlg = new AlertDialog.Builder(this);
            dlg.setTitle("Aviso");
            dlg.setMessage("Cliente Cadastrado");
            dlg.setNeutralButton("OK",null);
            dlg.show();
        }
    }
    /*VERIFICA SE O CAMPO ESTÁ VAZIO*/
    private boolean isCampoVazio(String valor)
    {
        boolean resultado = (TextUtils.isEmpty(valor)||valor.trim().isEmpty());
        return resultado;
    }
    /*VERIFICA SE EMAIL É VÁLIDO*/
    private boolean isEmailValido(String email)
    {
        boolean resultado = (!isCampoVazio(email) && Patterns.EMAIL_ADDRESS.matcher(email).matches());
        return resultado;
    }
    /*VERIFICA SE SENHAS SAO IGUAIS*/
    private boolean isIguais(String senha, String confirmacao)
    {
        if(senha == confirmacao)
        {
            return true;
        }
        return false;
    }


        /*cadastrarBotao.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String nome = nomeEditText.getText().toString().trim();
                String sobrenome = sobrenomeEditText.getText().toString().trim();
                String email = emailEditText.getText().toString().trim();
                String senha = senhaEditText.getText().toString().trim();
                String confirmarSenha = confirmarEdittext.getText().toString().trim();
                if (senha != confirmarSenha)
                {
                    Toast.makeText(TelaCadastroCliente.this, "Senhas Diferentes", Toast.LENGTH_SHORT).show();
                }
                else{
                    Toast.makeText(TelaLogin.this, "Sucesso!", Toast.LENGTH_SHORT).show();
                }

            }*/

        /*
    @Override
    public boolean onCreateOptionsMenu(Menu menu)
    {
        MenuInflater inflater = getMenuInflater();
        inflater.inflate(menu_cadastro_cliente);
        return super.onCreateOptionsMenu(menu);
    }*/

    @Override
    public boolean onOptionsItemSelected(MenuItem item)
    {
        int id = item.getItemId();
        switch (id)
        {
            case R.id.action_cadastrar:
                validaCampos();
                //Toast.makeText(this,"Usuário Cadastrado", Toast.LENGTH_SHORT.show());
                break;

            case R.id.action_cancelar:

                //Toast.makeText(this,"Cadastro Cancelado", Toast.LENGTH_SHORT.show());
                finish();
                break;
        }
        return super.onOptionsItemSelected(item);
    }
}
