import React from "react";
import ReactDom from "react-dom";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css";

const title = "Picture / profile: ";
const wrokplace = "When / History: ";
function Fram() {
  return (
    <div className="container">
      <div className="jumbotron">
        <h1>family Profile</h1>
        <Id name="Badhon Biswas" />
        <Id name="Any Think" />
      </div>
    </div>
  );
}

const Id = (props) => {
  const clickHandler = () => {};
  return (
    <div>
      <h1>Hi I am {props.name}</h1>
      <div>
        <p>{title.toUpperCase()}</p>
        <img src="image/First.jpg" alt="" width="500px" height="500px" />
        <h2 onClick={() => console.log(props.name)}>
          {wrokplace.toLowerCase()} Little Sister
        </h2>
        <button className="btn-primary" type="button" onClick={clickHandler}>
          Click me
        </button>
      </div>
    </div>
  );
};

ReactDom.render(<Fram />, document.getElementById("root"));
