package com.example.irecomend.model.bean;

public class Historico {
    private int idHistorico;
    private Cliente cliente;
    private AcaoHistorico acaoHistorico;
    private Evento evento;

    public Historico(Cliente cliente, AcaoHistorico acaoHistorico, Evento evento) {
        this.setCliente(cliente);
        this.setAcaoHistorico(acaoHistorico);
        this.setEvento(evento);
    }
    public Historico(){
        this.cliente = null;
        this.evento = null;
        this.acaoHistorico = null;
    }

    public Evento getEvento() {
        return evento;
    }

    public void setEvento(Evento evento) {
        this.evento = evento;
    }

    public int getIdHistorico() {
        return idHistorico;
    }

    public void setIdHistorico(int idHistorico) {
        this.idHistorico = idHistorico;
    }

    public Cliente getCliente() {
        return cliente;
    }

    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }

    public AcaoHistorico getAcaoHistorico() {
        return acaoHistorico;
    }

    public void setAcaoHistorico(AcaoHistorico acaoHistorico) {
        this.acaoHistorico = acaoHistorico;
    }
}
