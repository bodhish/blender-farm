[%bs.raw {|require('./App.css')|}];

[@bs.module] external logo : string = "./logo.png";

let str = ReasonReact.string;

let token = ref(0);

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div className="App">
      <div className="App-header">
        <img src=logo className="App-logo" alt="logo" />
        <h1> (str("Blender Farm")) </h1>
      </div>
      <p className="App-intro"> (str("Add your Digital Ocean key")) </p>
      <input className="submit-token" placeholder="Key" autoFocus=true />
    </div>,
};