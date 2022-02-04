import React from "react";
import ReactDom from "react-dom";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css";
import App from "./App";
import Dark_Mode from "./Dark_Mode";
import From from "./From";
import Pac from "./Pac";

function Inf() {
  return (
    <React.Fragment>
      {/* <App /> */}
      {/* <From Text="Enter Some Text Here" /> */}
      {/* <Pac title="Enter some text " /> */}
      <Dark_Mode />
    </React.Fragment>
  );
}

ReactDom.render(<Inf />, document.getElementById("root"));
