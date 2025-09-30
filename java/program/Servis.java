public class Servis {
    private String jenisServis;
    private double biaya;
    private Mekanik mekanik;
    private Kendaraan kendaraan;

    public Servis(String jenisServis, double biaya, Mekanik mekanik, Kendaraan kendaraan) {
        this.jenisServis = jenisServis;
        this.biaya = biaya;
        this.mekanik = mekanik;
        this.kendaraan = kendaraan;
    }

    // Getter & Setter
    public String getJenisServis() {
        return jenisServis;
    }

    public void setJenisServis(String jenisServis) {
        this.jenisServis = jenisServis;
    }

    public double getBiaya() {
        return biaya;
    }

    public void setBiaya(double biaya) {
        this.biaya = biaya;
    }

    public Mekanik getMekanik() {
        return mekanik;
    }

    public void setMekanik(Mekanik mekanik) {
        this.mekanik = mekanik;
    }

    public Kendaraan getKendaraan() {
        return kendaraan;
    }

    public void setKendaraan(Kendaraan kendaraan) {
        this.kendaraan = kendaraan;
    }
}

