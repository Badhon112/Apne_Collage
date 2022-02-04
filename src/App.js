import React from "react";
// import ReactDom from "react-dom";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css";
function App() {
  return (
    <div className="container">
      <div className="jumbotron">
        <form>
          <div className="mb-3">
            <label /*for="exampleInputEmail1"*/ className="form-label">
              Email address
            </label>
            <input
              type="email"
              className="form-control"
              id="exampleInputEmail1"
              aria-describedby="emailHelp"
            />
            <div id="emailHelp" className="form-text">
              We'll never share your email with anyone else.
            </div>
          </div>
          <div className="mb-3">
            <label /*for="exampleInputPassword1"*/ className="form-label">
              Password
            </label>
            <input
              type="password"
              className="form-control"
              id="exampleInputPassword1"
            />
          </div>
          <div className="mb-3 form-check">
            <input
              type="checkbox"
              className="form-check-input"
              id="exampleCheck1"
            />
            <label className="form-check-label" /*for="exampleCheck1"*/>
              Check me out
            </label>
          </div>
          <button type="submit" className="btn btn-primary">
            Submit
          </button>
        </form>
      </div>
    </div>
  );
}
export default App;
// export default App;
// App.prototype = {
//   title: prototypes.string,
//   aboutText: prototypes.string,
// };
