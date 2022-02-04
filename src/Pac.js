import React, { useState } from "react";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css";
function Pac(props) {
  const ToUpper = () => {
    area(text.toUpperCase());
  };
  const val = (event) => {
    area(event.target.value);
  };
  const [text, area] = useState("Enter some value");
  return (
    <div className="container">
      <div className="mb-3">
        <label /*for="exampleFormControlTextarea1"*/ className="form-label">
          {props.title}
        </label>
        <textarea
          className="form-control"
          /*id="exampleFormControlTextarea1"*/
          rows="3"
          value={text}
          onChange={val}
        ></textarea>
        <button type="button" onClick={ToUpper} className="btn btn-primary">
          Click me
        </button>
      </div>
    </div>
  );
}
export default Pac;
