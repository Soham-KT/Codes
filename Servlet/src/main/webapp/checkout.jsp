<!DOCTYPE html>
<html lang="en">
<head>
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
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
  <div class="login-form">
     <div class="text">
        Remove items from cart
     </div>
     <form action="/Servlet/checkout" method="get">
        <div class="field">
           <div class="fas fa-envelope"></div>
           <input type="text" placeholder="Item ID" name="id">
        </div>
        <div class="field">
           <div class="fas fa-envelope"></div>
           <input type="text" placeholder="Item Name" name="name">
        </div>
        <div class="field">
           <div class="fas fa-envelope"></div>
           <input type="number" placeholder="Quantity" name="quantity">
        </div>
        <button>Add to cart</button>
     </form>
     <form action="/Servlet/insertincart" method="get">
        <button>Back to shopping</button>
     </form>
  </div>

  <div class="login-form">
    <div class="text">
        Items in your cart
    </div>
    <br>
    <div class="feild">
        <table class="table table-bordered table-responsive">
            <tr>
                <th style="background:#1b1b1b; color: #868686;">Item ID</th>
                <th style="background:#1b1b1b; color: #868686;">Item Name</th>
                <th style="background:#1b1b1b; color: #868686;">Item Quantity</th>
                <th style="background:#1b1b1b; color: #868686;">Price per item</th>
            </tr>

        </table>
        <div class="text">
          your total: 29376427
        </div>
    </div>
  </div>
</body>
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
</html>
