import org.junit.Assert;
import org.junit.Test;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class IMDbTest {

    @Test
    public void startWebDriver() {
        System.setProperty("webdriver.gecko.driver", "/Users/Roland/Gecko-drivers/Mozilla/geckodriver");
        WebDriver driverTest = new FirefoxDriver();

        driverTest.navigate().to("http://www.imdb.com");

        Assert.assertTrue("correct webpage loads", driverTest.getCurrentUrl().endsWith(".com"));
    }

}
