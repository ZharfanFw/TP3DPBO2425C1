import java.util.ArrayList;

public class Bengkel {
    private String namaBengkel;
    private String alamatBengkel;
    private ArrayList<Servis> daftarServis;

    public Bengkel(String namaBengkel, String alamatBengkel) {
        this.namaBengkel = namaBengkel;
        this.alamatBengkel = alamatBengkel;
        this.daftarServis = new ArrayList<>();
    }

    // Getter & Setter
    public String getNamaBengkel() {
        return namaBengkel;
    }

    public void setNamaBengkel(String namaBengkel) {
        this.namaBengkel = namaBengkel;
    }

    public String getAlamatBengkel() {
        return alamatBengkel;
    }

    public void setAlamatBengkel(String alamatBengkel) {
        this.alamatBengkel = alamatBengkel;
    }

    public ArrayList<Servis> getDaftarServis() {
        return daftarServis;
    }

    public void addServis(Servis servis) {
        this.daftarServis.add(servis);
    }
}
