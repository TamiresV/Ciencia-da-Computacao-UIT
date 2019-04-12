package com.example.irecomend.model.bean;

public class Cliente {
    private int idCliente;
    private String nome;
    private String sobrenome;
    private String email;
    private String senha;

    public Cliente(String nome, String sobrenome, String email, String senha) {
        this.setNome(nome);
        this.setSobrenome(sobrenome);
        this.setEmail(email);
        this.setSenha(senha);
    }
    public Cliente(){
        this.nome = null;
        this.sobrenome = null;
        this.email = null;
        this.senha = null;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getSenha() {
        return senha;
    }

    public void setSenha(String senha) {
        this.senha = senha;
    }

    public int getIdCliente() {
        return idCliente;
    }

    public void setIdCliente(int idCliente) {
        this.idCliente = idCliente;
    }

    public String getSobrenome() {
        return sobrenome;
    }

    public void setSobrenome(String sobrenome) {
        this.sobrenome = sobrenome;
    }
}
