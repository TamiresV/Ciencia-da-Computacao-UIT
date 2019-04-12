package com.example.irecomend;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import com.example.irecomend.model.bean.AcaoHistorico;
import com.example.irecomend.model.bean.Cliente;
import com.example.irecomend.model.bean.Evento;
import com.example.irecomend.model.bean.Historico;
import com.example.irecomend.model.bean.Imagem;
import com.example.irecomend.model.dao.AcaoHistoricoDAO;
import com.example.irecomend.model.dao.ClienteDAO;
import com.example.irecomend.model.dao.EventoDAO;
import com.example.irecomend.model.dao.HistoricoDAO;
import com.example.irecomend.model.dao.ImagemDAO;

public class TelaCarregaEvento extends AppCompatActivity {
    private Cliente cliente;
    private ClienteDAO clienteDAO;
    private AcaoHistorico acaoHistorico;
    private AcaoHistoricoDAO acaoHistoricoDAO;
    private Imagem imagem;
    private ImagemDAO imagemDAO;
    private Historico historico;
    private HistoricoDAO historicoDAO;

    private Evento evento;
    private EventoDAO eventoDAO;
    private TextView nomeCarregamentoEvento;
    private TextView datahoraCarregamentoEvento;
    private TextView enderecoCarregamentoEvento;
    private TextView numeroCarregamentoEvento;
    private TextView cepCarregamentoEvento;
    private TextView bairroCarregamentoEvento;
    private TextView cidadeCarregamentoEvento;
    private TextView estadoCarregamentoEvento;
    private TextView paisCarregamentoEvento;
    private TextView likesCarregamentoEvento;
    private TextView deslikesCarregamentoEvento;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_tela_carrega_evento);

        this.nomeCarregamentoEvento = this.findViewById(R.id.nomeCarregamentoEventos);
        this.datahoraCarregamentoEvento = this.findViewById(R.id.datahoraCarregamentoEventos);
        this.enderecoCarregamentoEvento = this.findViewById(R.id.enderecoCarregamentoEvento);
        this.numeroCarregamentoEvento = this.findViewById(R.id.numeroCarregamentoEvento);
        this.cepCarregamentoEvento = this.findViewById(R.id.cepCarregamentoEvento);
        this.bairroCarregamentoEvento = this.findViewById(R.id.bairroCarregamentoEvento);
        this.cidadeCarregamentoEvento = this.findViewById(R.id.cidadeCarregamentoEvento);
        this.estadoCarregamentoEvento = this.findViewById(R.id.estadoCarregamentoEvento);
        this.paisCarregamentoEvento = this.findViewById(R.id.paisCarregamentoEvento);
        this.likesCarregamentoEvento = this.findViewById(R.id.likesCarregamentoEvento);
        this.deslikesCarregamentoEvento = this.findViewById(R.id.deslikesCarregamentoEvento);

        eventoDAO = new EventoDAO(this);
        evento = eventoDAO.selecionaEventoById(10);
        //this.teste();

        this.nomeCarregamentoEvento.setText(evento.getNome());
        this.datahoraCarregamentoEvento.setText(evento.getDataHora());
        this.enderecoCarregamentoEvento.setText(evento.getEndereco());
        this.numeroCarregamentoEvento.setText(String.valueOf(evento.getNumero()));
        this.cepCarregamentoEvento.setText(evento.getCep());
        this.bairroCarregamentoEvento.setText(evento.getBairro());
        this.cidadeCarregamentoEvento.setText(evento.getCidade());
        this.estadoCarregamentoEvento.setText(evento.getEstado());
        this.paisCarregamentoEvento.setText(evento.getPais());
    }

    public void teste(){
        this.cliente = new Cliente("Joao", "da Silva", "joao@gmail.com", "123456");
        this.clienteDAO = new ClienteDAO(this);
        this.cliente = this.clienteDAO.selecionaClienteById(1);

        this.acaoHistorico = new AcaoHistorico("Criacao");
        this.acaoHistoricoDAO = new AcaoHistoricoDAO(this);
        this.acaoHistorico = this.acaoHistoricoDAO.selecionaAcaoHistoricoById(1);

        this.imagem = new Imagem("imagem", "C://Downloads", this.evento);
        this.imagemDAO = new ImagemDAO(this);
        this.imagem = this.imagemDAO.selecionaImagemById(1);

        this.historico = new Historico(this.cliente, this.acaoHistorico, this.evento);
        this.historicoDAO = new HistoricoDAO(this);
        this.historico = this.historicoDAO.selecionaHistoricoById(1);
    }
}
