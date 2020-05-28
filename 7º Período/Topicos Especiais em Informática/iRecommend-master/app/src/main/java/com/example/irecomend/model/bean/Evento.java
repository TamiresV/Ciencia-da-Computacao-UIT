package com.example.irecomend.model.bean;

public class Evento {
    private int idEvento;
    private String nome;
    private String dataHora;
    private double preco;
    private String endereco;
    private String cep;
    private int numero;
    private String bairro;
    private String cidade;
    private String estado;
    private String pais;
    private String latitude;
    private String longitude;
    private int likes;
    private int deslikes;

    public Evento(String nome, String dataHora, double preco, String endereco, String cep, int numero, String bairro, String cidade, String estado, String pais) {
        this.setNome(nome);
        this.setDataHora(dataHora);
        this.setPreco(preco);
        this.setEndereco(endereco);
        this.setCep(cep);
        this.setNumero(numero);
        this.setBairro(bairro);
        this.setCidade(cidade);
        this.setEstado(estado);
        this.setPais(pais);
        this.setLikes(0);
        this.setDeslikes(0);
    }

    public Evento(){ //Construtor usado apenas para testes
        this.nome = null;
        this.dataHora = null;
        this.preco = 0;
        this.endereco = null;
        this.cep = null;
        this.numero = 0;
        this.bairro = null;
        this.cidade = null;
        this.estado = null;
        this.pais = null;
        this.latitude = null;
        this.longitude = null;
        this.likes = 0;
        this.deslikes = 0;
    }

    public int getIdEvento() {
        return idEvento;
    }

    public void setIdEvento(int idEvento) {
        this.idEvento = idEvento;
    }

    public String getLatitude() {
        return latitude;
    }

    public void setLatitude(String latitude) {
        this.latitude = latitude;
    }

    public String getLongitude() {
        return longitude;
    }

    public void setLongitude(String longitude) {
        this.longitude = longitude;
    }
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getDataHora() {
        return dataHora;
    }

    public void setDataHora(String dataHora) {
        this.dataHora = dataHora;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getCep() {
        return cep;
    }

    public void setCep(String cep) {
        this.cep = cep;
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public String getBairro() {
        return bairro;
    }

    public void setBairro(String bairro) {
        this.bairro = bairro;
    }

    public String getCidade() {
        return cidade;
    }

    public void setCidade(String cidade) {
        this.cidade = cidade;
    }

    public String getEstado() {
        return estado;
    }

    public void setEstado(String estado) {
        this.estado = estado;
    }

    public String getPais() {
        return pais;
    }

    public void setPais(String pais) {
        this.pais = pais;
    }

    public int getLikes() {
        return likes;
    }

    public void setLikes(int likes) {
        this.likes = likes;
    }

    public int getDeslikes() {
        return deslikes;
    }

    public void setDeslikes(int deslikes) {
        this.deslikes = deslikes;
    }
}
