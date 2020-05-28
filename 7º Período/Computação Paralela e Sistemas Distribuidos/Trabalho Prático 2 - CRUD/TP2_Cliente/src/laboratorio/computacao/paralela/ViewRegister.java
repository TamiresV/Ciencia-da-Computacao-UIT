package laboratorio.computacao.paralela;

import java.awt.BorderLayout;
import java.awt.GridLayout;

import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;

public class ViewRegister extends JPanel {

	private Information information;

	public JTextField textName = new JTextField();
	public JTextField textPhone = new JTextField();
	public JTextField textEMail = new JTextField();
	public JPasswordField textPassword = new JPasswordField();

	private JPanel line1 = new JPanel();
	private JPanel line2 = new JPanel(new GridLayout(1, 2));
	private JPanel line3 = new JPanel(new GridLayout(1, 2));
	private JPanel line4 = new JPanel(new GridLayout(1, 2));
	private JPanel line5 = new JPanel(new GridLayout(1, 2));
	private JPanel line6 = new JPanel(new GridLayout(1, 2));

	private JLabel name = new JLabel("Nome:");
	private JLabel phone = new JLabel("Telefone:");
	private JLabel eMail = new JLabel("e-mail:");
	private JLabel password = new JLabel("Senha:");

	JPanel borderLeft;
	JPanel borderRight;

	ButtonRegister buttonRegister;
	ButtonCancel buttonCancel;

	public ViewRegister(Information information) {

		super(new GridLayout(6, 1));

		this.information = information;

		line1.add(new JLabel("Cadastro", JLabel.CENTER));

		// Linha2
		borderLeft = new JPanel(new BorderLayout(10, 0));// cria uma borda de 10px à esqueda da descrição
		borderRight = new JPanel(new BorderLayout(10, 0));// cria uma borda de 10px à direira da caixa de texto

		borderLeft.add(name);
		borderLeft.add(new JPanel(), BorderLayout.WEST); // Borda esqueda

		borderRight.add(textName);
		borderRight.add(new JPanel(), BorderLayout.EAST); // Borda Direita

		line2.add(borderLeft);
		line2.add(borderRight);

		// Linha 3
		borderLeft = new JPanel(new BorderLayout(10, 0));
		borderRight = new JPanel(new BorderLayout(10, 0));

		borderLeft.add(phone);
		borderLeft.add(new JPanel(), BorderLayout.WEST); // Borda esqueda

		borderRight.add(textPhone);
		borderRight.add(new JPanel(), BorderLayout.EAST); // Borda Direita

		line3.add(borderLeft);
		line3.add(borderRight);

		// Linha 4
		borderLeft = new JPanel(new BorderLayout(10, 0));
		borderRight = new JPanel(new BorderLayout(10, 0));

		borderLeft.add(eMail);
		borderLeft.add(new JPanel(), BorderLayout.WEST); // Borda esqueda

		borderRight.add(textEMail);
		borderRight.add(new JPanel(), BorderLayout.EAST); // Borda Direita

		line4.add(borderLeft);
		line4.add(borderRight);

		// Linha 5
		borderLeft = new JPanel(new BorderLayout(10, 0));
		borderRight = new JPanel(new BorderLayout(10, 0));

		borderLeft.add(password);
		borderLeft.add(new JPanel(), BorderLayout.WEST); // Borda esqueda

		borderRight.add(textPassword);
		borderRight.add(new JPanel(), BorderLayout.EAST); // Borda Direita

		line5.add(borderLeft);
		line5.add(borderRight);

		// Linha 6
		buttonRegister = new ButtonRegister(information, this);
		buttonCancel = new ButtonCancel();

		borderLeft = new JPanel(new BorderLayout(10, 0));
		borderRight = new JPanel(new BorderLayout(10, 0));

		borderLeft.add(buttonRegister);
		borderLeft.add(new JPanel(), BorderLayout.WEST); // Borda esqueda
		borderLeft.add(new JPanel(), BorderLayout.EAST);

		borderRight.add(buttonCancel);
		borderLeft.add(new JPanel(), BorderLayout.WEST); // Borda esqueda
		borderRight.add(new JPanel(), BorderLayout.EAST); // Borda Direita

		line6.add(borderLeft);
		line6.add(borderRight);

		super.add(line1);
		super.add(line2);
		super.add(line3);
		super.add(line4);
		super.add(line5);
		super.add(line6);

	}

	public String getName() {
		return this.textName.getText();
	}

	public void setTextName(String textName) {
		this.textName.setText(textName);
	}

	public String getPhone() {
		return textPhone.getText();
	}

	public void setTextPhone(String textPhone) {
		this.textPhone.setText(textPhone);
	}

	public String getEMail() {
		return textEMail.getText();
	}

	public void setTextEMail(String textEMail) {
		this.textEMail.setText(textEMail);
	}

	@SuppressWarnings("deprecation")
	public String getPassword() {
		return textPassword.getText();
	}

	public void setTextPassword(String textPassword) {
		this.textPassword.setText(textPassword);
	}

	public Information getInformation() {
		return this.information;
	}

}
