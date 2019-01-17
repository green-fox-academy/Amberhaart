import org.openqa.selenium.WebDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class IMDb {

    public static void main(String[] args) {
        System.setProperty("webdriver.gecko.driver", "/Users/Roland/Gecko-drivers/Mozilla/geckodriver");
        WebDriver driver = new FirefoxDriver();

    }
}
