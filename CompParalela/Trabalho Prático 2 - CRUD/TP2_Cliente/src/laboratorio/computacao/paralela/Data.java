package laboratorio.computacao.paralela;

public class Data {
	private String name;
	private String phone;
	private String eMail;
	private String Password;

	public Data(String name, String phone, String eMail, String password) {
		this.name = name;
		this.phone = phone;
		this.eMail = eMail;
		this.Password = password;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getPhone() {
		return phone;
	}

	public void setPhone(String phone) {
		this.phone = phone;
	}

	public String geteMail() {
		return eMail;
	}

	public void seteMail(String eMail) {
		this.eMail = eMail;
	}

	public String getPassword() {
		return Password;
	}

	public void setPassword(String password) {
		Password = password;
	}
}
