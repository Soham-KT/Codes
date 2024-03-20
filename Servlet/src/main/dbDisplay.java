package main;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.*;

@WebServlet("/advjavalab2")
public class dbDisplay extends HttpServlet {
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException, IOException {
        PrintWriter pw = resp.getWriter();
        try{
            DriverManager.registerDriver(new com.mysql.jdbc.Driver ());
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/adv_java", "root", "root");
            Statement stat = conn.createStatement();
            ResultSet res = stat.executeQuery("Select * from servlettest;");

            pw.println("<!DOCTYPE html>\n" +
                    "<html lang=\"en\">\n" +
                    "<head>\n" +
                    "  <link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH\" crossorigin=\"anonymous\">\n" +
                    "  <style>\n" +
                    "    /* grid container */\n" +
                    ".holy-grail-grid {\n" +
                    "    display:grid;\n" +
                    "    grid-template-areas:\n" +
                    "        'header'\n" +
                    "        'main-content'\n" +
                    "        'left-sidebar'\n" +
                    "        'right-sidebar'\n" +
                    "        'footer';\n" +
                    "}\n" +
                    "\n" +
                    "/* general column padding */\n" +
                    ".holy-grail-grid > * {\n" +
                    "    padding:1rem;\n" +
                    "}\n" +
                    "\n" +
                    "/* assign columns to grid areas */\n" +
                    ".holy-grail-grid > .header {\n" +
                    "    grid-area:header;\n" +
                    "}\n" +
                    ".holy-grail-grid > .main-content {\n" +
                    "    grid-area:main-content;\n" +
                    "}\n" +
                    ".holy-grail-grid > .left-sidebar {\n" +
                    "    grid-area:left-sidebar;\n" +
                    "}\n" +
                    ".holy-grail-grid > .right-sidebar {\n" +
                    "    grid-area:right-sidebar;\n" +
                    "}\n" +
                    ".holy-grail-grid > .footer {\n" +
                    "    grid-area:footer;\n" +
                    "}\n" +
                    "\n" +
                    "/* tablet breakpoint */\n" +
                    "@media (min-width:768px) {\n" +
                    "    .holy-grail-grid {\n" +
                    "        grid-template-columns: 1fr 1fr;\n" +
                    "        grid-template-areas:\n" +
                    "            'header header'\n" +
                    "            'main-content main-content'\n" +
                    "            'left-sidebar right-sidebar'\n" +
                    "            'footer footer';\n" +
                    "    }\n" +
                    "}\n" +
                    "\n" +
                    "/* desktop breakpoint */\n" +
                    "@media (min-width:1024px) {\n" +
                    "    .holy-grail-grid {\n" +
                    "        grid-template-columns: repeat(4, 1fr);\n" +
                    "        grid-template-areas:\n" +
                    "            'header header header header'\n" +
                    "            'left-sidebar main-content main-content right-sidebar'\n" +
                    "            'footer footer footer footer';\n" +
                    "    }\n" +
                    "}\n" +
                    "\n" +
                    "@import url('https://fonts.googleapis.com/css?family=Poppins&display=swap');\n" +
                    "*{\n" +
                    "  margin: 0;\n" +
                    "  padding: 0;\n" +
                    "  font-family: 'Poppins',sans-serif;\n" +
                    "}\n" +
                    "body{\n" +
                    "  display: flex;\n" +
                    "  height: 100vh;\n" +
                    "  text-align: center;\n" +
                    "  align-items: center;\n" +
                    "  justify-content: center;\n" +
                    "  background: #151515;\n" +
                    "}\n" +
                    ".login-form{\n" +
                    "  position: relative;\n" +
                    "  width: auto;\n" +
                    "  height: auto;\n" +
                    "  background: #1b1b1b;\n" +
                    "  padding: 40px 35px 60px;\n" +
                    "  box-sizing: border-box;\n" +
                    "  border: 1px solid black;\n" +
                    "  border-radius: 5px;\n" +
                    "  box-shadow: inset 0 0 1px #272727;\n" +
                    "}\n" +
                    ".text{\n" +
                    "  font-size: 30px;\n" +
                    "  color: #c7c7c7;\n" +
                    "  font-weight: 600;\n" +
                    "  letter-spacing: 2px;\n" +
                    "}\n" +
                    "form{\n" +
                    "  margin-top: 40px;\n" +
                    "}\n" +
                    "form .field{\n" +
                    "  margin-top: 20px;\n" +
                    "  display: flex;\n" +
                    "}\n" +
                    ".field .fas{\n" +
                    "  height: 50px;\n" +
                    "  width: 60px;\n" +
                    "  color: #868686;\n" +
                    "  font-size: 20px;\n" +
                    "  line-height: 50px;\n" +
                    "  border: 1px solid #444;\n" +
                    "  border-right: none;\n" +
                    "  border-radius: 5px 0 0 5px;\n" +
                    "  background: linear-gradient(#333,#222);\n" +
                    "}\n" +
                    ".field input,form button{\n" +
                    "  height: 50px;\n" +
                    "  width: 100%;\n" +
                    "  outline: none;\n" +
                    "  font-size: 19px;\n" +
                    "  color: #868686;\n" +
                    "  padding: 0 15px;\n" +
                    "  border-radius: 0 5px 5px 0;\n" +
                    "  border: 1px solid #444;\n" +
                    "  caret-color: #339933;\n" +
                    "  background: linear-gradient(#333,#222);\n" +
                    "}\n" +
                    "input:focus{\n" +
                    "  color: #339933;\n" +
                    "  box-shadow: 0 0 5px rgba(0,255,0,.2),\n" +
                    "              inset 0 0 5px rgba(0,255,0,.1);\n" +
                    "  background: linear-gradient(#333933,#222922);\n" +
                    "  animation: glow .8s ease-out infinite alternate;\n" +
                    "}\n" +
                    "@keyframes glow {\n" +
                    "   0%{\n" +
                    "    border-color: #339933;\n" +
                    "    box-shadow: 0 0 5px rgba(0,255,0,.2),\n" +
                    "                inset 0 0 5px rgba(0,0,0,.1);\n" +
                    "  }\n" +
                    "   100%{\n" +
                    "    border-color: #6f6;\n" +
                    "    box-shadow: 0 0 20px rgba(0,255,0,.6),\n" +
                    "                inset 0 0 10px rgba(0,255,0,.4);\n" +
                    "  }\n" +
                    "}\n" +
                    "button{\n" +
                    "  margin-top: 30px;\n" +
                    "  border-radius: 5px!important;\n" +
                    "  font-weight: 600;\n" +
                    "  letter-spacing: 1px;\n" +
                    "  cursor: pointer;\n" +
                    "}\n" +
                    "button:hover{\n" +
                    "  color: #339933;\n" +
                    "  border: 1px solid #339933;\n" +
                    "  box-shadow: 0 0 5px rgba(0,255,0,.3),\n" +
                    "              0 0 10px rgba(0,255,0,.2),\n" +
                    "              0 0 15px rgba(0,255,0,.1),\n" +
                    "              0 2px 0 black;\n" +
                    "}\n" +
                    ".link{\n" +
                    "  margin-top: 25px;\n" +
                    "  color: #868686;\n" +
                    "}\n" +
                    ".link a{\n" +
                    "  color: #339933;\n" +
                    "  text-decoration: none;\n" +
                    "}\n" +
                    ".link a:hover{\n" +
                    "  text-decoration: underline;\n" +
                    "}\n" +
                    "\n" +
                    "  </style>\n" +
                    "</head>\n" +
                    "<!---------------------------------------------------------------------------------------->\n" +
                    "\n" +
                    "<body>");

            pw.println("<div class=\"login-form\">");

            pw.println("<form action=\"/Servlet\">\n" +
                    "      <button>Return to main page</button>\n" +
                    "     </form>" +
                    " <br> ");

            // ------------------------------------------------------------------------------ this is jdbc code
            pw.println("<div class=\"field\">");
            pw.println("<table class=\"table table-bordered table-responsive\">");
            while (res.next()) {
                pw.println("<tr>");
                pw.println("<th class=\"text\" style=\"background:#1b1b1b; color: #868686;\">"+ res.getString("name") +"</th>");
                pw.println("<th class=\"text\" style=\"background:#1b1b1b; color: #868686;\">"+ res.getString("mail") +"</th>");
                pw.println("<th class=\"text\" style=\"background:#1b1b1b; color: #868686;\">"+ res.getInt("phno") +"</th>");
                pw.println("<th class=\"text\" style=\"background:#1b1b1b; color: #868686;\">"+ res.getString("pass") +"</th>");
                pw.println("</tr>");
            }
            pw.println("</table>");
            pw.println("</div>");
            pw.println("</div>");
            // ------------------------------------------------------------------------------ jdbc ends here

            pw.println("</body>\n" +
                    "\n" +
                    "</body>\n" +
                    "<script src=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js\" integrity=\"sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz\" crossorigin=\"anonymous\"></script>\n" +
                    "</html>\n");


        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }
}
