import React from "react";
import ReactDom from "react-dom";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css";
function Time() {
  return (
    <div>
      <p>Hello world</p>
      <p>In My Country The TIme is {Date()}</p>
    </div>
  );
}
ReactDom.render(<Time />, document.getElementById("root"));
// setInterval(Time, 1000);
