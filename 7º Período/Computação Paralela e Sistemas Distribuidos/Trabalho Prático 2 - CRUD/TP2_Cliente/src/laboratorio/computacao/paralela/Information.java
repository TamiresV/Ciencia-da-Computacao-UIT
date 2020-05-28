package laboratorio.computacao.paralela;

public class Information {
	private Data register;
	private Windows windows;
	private Answer windows2;
	private ViewRegister viewRegister;
	private ViewResult viewResult;

	public ViewResult getViewResult() {
		return viewResult;
	}

	public void setViewResult(ViewResult viResult) {
		this.viewResult = viResult;
	}

	public Answer getWindows2() {
		return windows2;
	}

	public void setWindows2(Answer windows2) {
		this.windows2 = windows2;
	}

	public ViewRegister getViewRegister() {
		return viewRegister;
	}

	public void setViewRegister(ViewRegister viewRegister) {
		this.viewRegister = viewRegister;
	}

	public Data getRegister() {
		return register;
	}

	public void setRegister(Data register) {
		this.register = register;
	}

	public Windows getWindows() {
		return windows;
	}

	public void setWindows(Windows windows) {
		this.windows = windows;
	}
}
