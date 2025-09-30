public class Motor extends Kendaraan {
    private String tipeMotor;

    public Motor(String platNomor, String merk, int tahun, String model, int kapasitasMesin, String tipeMotor) {
        super(platNomor, merk, tahun, model, kapasitasMesin);
        this.tipeMotor = tipeMotor;
    }

    // Getter & Setter
    public String getTipeMotor() {
        return tipeMotor;
    }

    public void setTipeMotor(String tipeMotor) {
        this.tipeMotor = tipeMotor;
    }
}
