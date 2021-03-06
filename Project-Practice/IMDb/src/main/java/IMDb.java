import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.firefox.FirefoxDriver;
import org.openqa.selenium.interactions.Actions;
import org.openqa.selenium.support.ui.ExpectedCondition;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.Select;
import org.openqa.selenium.support.ui.WebDriverWait;

import javax.swing.*;

public class IMDb {

    public static void main(String[] args) {
        System.setProperty("webdriver.gecko.driver", "/Users/Roland/Gecko-drivers/Mozilla/geckodriver");
        WebDriver driver = new FirefoxDriver();
        Actions actions = new Actions(driver);
        driver.manage().deleteAllCookies();
        driver.manage().window().maximize();
        WebDriverWait wait = new WebDriverWait(driver, 5);

        driver.get("http://imdb.com");
        driver.findElement(By.id("imdb-signin-link")).click();
        driver.findElement(By.xpath("/html/body/div[2]/div[1]/div[2]/div[1]/div[1]/div/div[1]/a[1]/span[2]")).click(); //no id, could not catch with class or value
        driver.findElement(By.id("ap_email")).sendKeys("bakroland1@gmail.com");
        driver.findElement(By.id("ap_password")).sendKeys("pyHZU5frSZTUsaf");
        driver.findElement(By.id("signInSubmit")).click();

        WebElement searchbar = wait.until(ExpectedConditions.presenceOfElementLocated(By.id("navbar-query")));

        actions.moveToElement((searchbar)).perform();
        searchbar.click();
        searchbar.sendKeys("Guardians of the Galaxy 2");
       // driver.findElement(By.id("navbar-query")).sendKeys("Guardians of the Galaxy 2"); //sometimes works, sometimes it doesn't
        driver.findElement(By.id("navbar-submit-button")).click();
        driver.findElement(By.xpath("/html/body/div[2]/div/div[2]/div[3]/div[1]/div/div[2]/table/tbody/tr[1]/td[2]/a")).click();

        WebElement watchList = driver.findElement(By.xpath("/html/body/div[2]/div/div[2]/div[5]/div[1]/div/div/div[2]/div[2]/span/div"));

        watchList.click();

        driver.findElement(By.xpath("/html/body/div[2]/div/div[1]/div[2]/div[1]/ul/li[8]/p/a")).click();

        actions.moveToElement(driver.findElement(By.xpath("/html/body/div[2]/div/div[1]/div[2]/div[3]/ul/li/span"))).perform();

        wait.until(ExpectedConditions.elementToBeClickable(By.id("nblogout")));
        driver.findElement(By.id("nblogout")).click();


      //  driver.quit();
    }
}

// imdB password: pyHZU5frSZTUsaf"
