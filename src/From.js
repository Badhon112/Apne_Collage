import React, { useState } from "react";
// import ReactDom from 'react-dom';
import "../node_modules/bootstrap/dist/css/bootstrap.min.css";
function From(props) {
  const ToUpperCase = () => {
    // let n = ;
    Uptext(text.toUpperCase());
  };
  const Handelchange = (event) => {
    Uptext(event.target.value);
  };
  const toDelete = () => {
    Uptext("");
  };

  const [text, Uptext] = useState("Enter Something in that box");
  return (
    <div>
      <div className="container">
        <div className="mb-3">
          <label /*for="Text Area"*/ className="form-label my-3">
            {props.text}
          </label>
          <textarea
            className="form-control"
            id="exampleFormControlTextarea1"
            rows="7"
            value={text}
            onChange={Handelchange}
          ></textarea>
          <button className="btn btn-primary my-3" onClick={ToUpperCase}>
            Uppercase
          </button>
          <button className="btn btn-primary my-3" onClick={toDelete}>
            Delete
          </button>
        </div>
      </div>
    </div>
  );
}
export default From;
