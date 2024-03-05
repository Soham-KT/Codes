<!DOCTYPE html>
<html lang="en">
<head>
  <style>
    /* grid container */
.holy-grail-grid {
    display:grid;
    grid-template-areas:
        'header'
        'main-content'
        'left-sidebar'
        'right-sidebar'
        'footer';
}

/* general column padding */
.holy-grail-grid > * {
    padding:1rem;
}

/* assign columns to grid areas */
.holy-grail-grid > .header {
    grid-area:header;
}
.holy-grail-grid > .main-content {
    grid-area:main-content;
}
.holy-grail-grid > .left-sidebar {
    grid-area:left-sidebar;
}
.holy-grail-grid > .right-sidebar {
    grid-area:right-sidebar;
}
.holy-grail-grid > .footer {
    grid-area:footer;
}

/* tablet breakpoint */
@media (min-width:768px) {
    .holy-grail-grid {
        grid-template-columns: 1fr 1fr;
        grid-template-areas:
            'header header'
            'main-content main-content'
            'left-sidebar right-sidebar'
            'footer footer';
    }
}

/* desktop breakpoint */
@media (min-width:1024px) {
    .holy-grail-grid {
        grid-template-columns: repeat(4, 1fr);
        grid-template-areas:
            'header header header header'
            'left-sidebar main-content main-content right-sidebar'
            'footer footer footer footer';
    }
}

@import url('https://fonts.googleapis.com/css?family=Poppins&display=swap');
*{
  margin: 0;
  padding: 0;
  font-family: 'Poppins',sans-serif;
}
body{
  display: flex;
  height: 100vh;
  text-align: center;
  align-items: center;
  justify-content: center;
  background: #151515;
}
.login-form{
  position: relative;
  width: auto;
  height: auto;
  background: #1b1b1b;
  padding: 40px 35px 60px;
  box-sizing: border-box;
  border: 1px solid black;
  border-radius: 5px;
  box-shadow: inset 0 0 1px #272727;
}
.text{
  font-size: 30px;
  color: #c7c7c7;
  font-weight: 600;
  letter-spacing: 2px;
}
form{
  margin-top: 40px;
}
form .field{
  margin-top: 20px;
  display: flex;
}
.field .fas{
  height: 50px;
  width: 60px;
  color: #868686;
  font-size: 20px;
  line-height: 50px;
  border: 1px solid #444;
  border-right: none;
  border-radius: 5px 0 0 5px;
  background: linear-gradient(#333,#222);
}
.field input,form button{
  height: 50px;
  width: 100%;
  outline: none;
  font-size: 19px;
  color: #868686;
  padding: 0 15px;
  border-radius: 0 5px 5px 0;
  border: 1px solid #444;
  caret-color: #339933;
  background: linear-gradient(#333,#222);
}
input:focus{
  color: #339933;
  box-shadow: 0 0 5px rgba(0,255,0,.2),
              inset 0 0 5px rgba(0,255,0,.1);
  background: linear-gradient(#333933,#222922);
  animation: glow .8s ease-out infinite alternate;
}
@keyframes glow {
   0%{
    border-color: #339933;
    box-shadow: 0 0 5px rgba(0,255,0,.2),
                inset 0 0 5px rgba(0,0,0,.1);
  }
   100%{
    border-color: #6f6;
    box-shadow: 0 0 20px rgba(0,255,0,.6),
                inset 0 0 10px rgba(0,255,0,.4);
  }
}
button{
  margin-top: 30px;
  border-radius: 5px!important;
  font-weight: 600;
  letter-spacing: 1px;
  cursor: pointer;
}
button:hover{
  color: #339933;
  border: 1px solid #339933;
  box-shadow: 0 0 5px rgba(0,255,0,.3),
              0 0 10px rgba(0,255,0,.2),
              0 0 15px rgba(0,255,0,.1),
              0 2px 0 black;
}
.link{
  margin-top: 25px;
  color: #868686;
}
.link a{
  color: #339933;
  text-decoration: none;
}
.link a:hover{
  text-decoration: underline;
}

  </style>
</head>
<!---------------------------------------------------------------------------------------->


<body>
  <div class="holy-grail-grid">
    <header class="header">
      <div class="text">
        This is a shopping cart system
      </div>
    </header>


    <main class="main-content">
      <div class="login-form">
        <div class="text">
          DB here
        </div>
      </div>
    </main>
    <section class="left-sidebar">
      <div class="login-form">
        <div class="text">
          Shopping cart entry
          <form>
            <div class="field">
               <div class="fas fa-envelope"></div>
               <input type="text" placeholder="Item Name">
            </div>
            <div class="field">
               <div class="fas fa-lock"></div>
               <input type="text" placeholder="Quantity">
            </div>
            <button>Add to cart</button>
         </form>
        </div>
      </div>
    </section>


    <aside class="right-sidebar">
      <div class="login-form">
        <div class="text">
          Shopping cart display
        </div>
      </div>
    </aside>
    <footer class="footer">
      <div class="text">
        Team Members: Akanksha Pal, Namaskruti Pal and Soham Kothari
      </div>
    </footer>
  </div>
</body>
</body>
</html>
