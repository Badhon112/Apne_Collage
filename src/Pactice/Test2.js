import React from "react";
import ReactDOM from "react-dom";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css";
const title = "Hi My name is : ";
const requere = "You need to Know : ";
function Lists() {
  return (
    <div className="jumbotron">
      <FREAM name="Badhon Biswas" img="image/First.jpg" tit="Bad boy" />
      <FREAM name="Sheoshe Biswas" img="image/Secound.jpg" tit="Cute Sister" />
      <FREAM name="Old Picture" img="image/Forth.jpg" tit="Father" />
    </div>
  );
}
const FREAM = (props) => {
  const clickevent = () => {
    console.log(props.name);
  };
  return (
    <div className="container">
      <div className="jumbotron">
        <h4>
          {title} {props.tit} {requere}
          <button type="button" onClick={clickevent}>
            Click me
          </button>
        </h4>
        <h3>{props.tit}</h3>
        <h4>
          <button
            type="button"
            onClick={() => {
              console.log(props.tit);
            }}
          >
            Click me
          </button>
        </h4>
        <button type="button" onClick={() => {}}></button>

        <img
          src={props.img}
          alt="There is a Picture"
          width="300px"
          height="300px"
        />
      </div>
    </div>
  );
};
ReactDOM.render(<Lists />, document.getElementById("root"));
