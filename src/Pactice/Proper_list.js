//import React, { Children } from "react";
import React from "react";
import ReactDom from "react-dom";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css";
import img1 from "./Images/First.jpg";
import img2 from "./Images/Forth.jpg";
import img3 from "./Images/Collage.jpg";
import img4 from "./Images/Picnic.jpg";
import img5 from "./Images/Secound.jpg";
const books = [
  {
    id: 1,
    img: img1,
    title: "Cover Pic",
    named: "Sheoshe Biswas",
  },
  {
    id: 2,
    img: img2,
    title: "Old Pic",
    named: "Sheoshe Biswas",
  },
  {
    id: 3,
    img: img3,
    title: "Badhon Biswas Collage pic",
    named: "Badhon BIswas",
  },
  {
    id: 4,
    img: img4,
    title: "Picnic",
    named: "Sheoshe Biswas",
  },
  {
    id: 5,
    img: img5,
    title: "Cover Al Of us",
    named: "Mongol Biswas",
  },
];
// const names = ["Badhon", " Sheoshe", " Bonita", " Mongol"];
// const Newname = names.map((name) => {
//   return <h2>{name}</h2>;
// });

function BookList() {
  return (
    <div className="jumbotron">
      {books.map((book) => {
        //const { img, title, named } = book;
        return <Book key={book.id} {...book}></Book>;
      })}
    </div>
  );
}
const Book = (props) => {
  const { img, title, named } = props;
  return (
    <div>
      <img src={img} alt="There is A picture" width="400px" height="250px" />
      <h3>{title}</h3>
      <h3>{named}</h3>
      {/* <button type="button" onClick={First_Try} ></button> */}
    </div>
  );
};
ReactDom.render(<BookList />, document.getElementById("root"));
