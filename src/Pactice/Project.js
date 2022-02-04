import React from "react";
import ReactDom from "react-dom";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css";
import img1 from "./Images/First.jpg";
import img2 from "./Images/Forth.jpg";
import img3 from "./Images/Collage.jpg";
import img4 from "./Images/Picnic.jpg";
import img5 from "./Images/Secound.jpg";
const FirstImg = {
  img: img1,
  title: "Cover Pic",
  named: "Sheoshe Biswas",
};
const SecoundImg = {
  img: img2,
  title: "Old Pic",
  named: "Sheoshe Biswas",
};
const ThirdImg = {
  img: img3,
  title: "Badhon Biswas Collage pic",
  named: "Badhon BIswas",
};
const ForthImg = {
  img: img4,
  title: "Picnic",
  named: "Sheoshe Biswas",
};
const FivedImg = {
  img: img5,
  title: "Cover Al Of us",
  named: "Mongol Biswas",
};

function BookList() {
  return (
    <div className="">
      <Book img={FirstImg.img} title={FirstImg.title} named={FirstImg.named} />
      <Book
        img={SecoundImg.img}
        title={SecoundImg.title}
        named={SecoundImg.named}
      />
      <Book img={ThirdImg.img} title={ThirdImg.title} named={ThirdImg.named} />
      <Book img={ForthImg.img} title={ForthImg.title} named={ForthImg.named} />
      <Book img={FivedImg.img} title={FivedImg.title} named={FivedImg.named} />
    </div>
  );
}
const Book = (props) => {
  return (
    <div>
      <img
        src={props.img}
        alt="There is A picture"
        width="400px"
        height="250px"
      />
      <h3>{props.title}</h3>
      <h3>{props.named}</h3>
    </div>
  );
};
ReactDom.render(<BookList />, document.getElementById("root"));
