public class Kendaraan {
    private String platNomor;
    private String merk;
    private int tahun;
    private String model;
    private int kapasitasMesin;

    public Kendaraan(String platNomor, String merk, int tahun, String model, int kapasitasMesin) {
        this.platNomor = platNomor;
        this.merk = merk;
        this.tahun = tahun;
        this.model = model;
        this.kapasitasMesin = kapasitasMesin;
    }

    // Getter & Setter
    public String getPlatNomor() {
        return platNomor;
    }

    public void setPlatNomor(String platNomor) {
        this.platNomor = platNomor;
    }

    public String getMerk() {
        return merk;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    public int getTahun() {
        return tahun;
    }

    public void setTahun(int tahun) {
        this.tahun = tahun;
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public int getKapasitasMesin() {
        return kapasitasMesin;
    }

    public void setKapasitasMesin(int kapasitasMesin) {
        this.kapasitasMesin = kapasitasMesin;
    }
}
