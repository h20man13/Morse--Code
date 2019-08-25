<!DOCTYPE html>
<html>
  <body>
    <h1>
      Overview
    </h1>
    <p1>
      The morse class are classes with static methods that can be apllied in either <strong>Java</strong> or <strong>C++</strong>. These methods can convert a <strong>string</strong>, an <strong>integer</strong>, or a <strong>character</strong> into morse code.      
    </p1>
    <h2>
      Methods
    </h2>
    <p2>
      The method that translates it into a morse string is writen as to_Morse(<em>some parameter</em>).<br>
      The parameter can either be an int, char, or string.<br>
      The parameter can be either upper case or lower case<br>
      The set spaces method is only used in the string or int methods.<br>
      The output of the method will be as followed:<br>
      to_Morse('a') = "._"<br>
      to_Morse('1') = to_Morse(1) = ".----"<br>
      to_Morse("Hi hi") and if setSpaces(true) Adds a space between each letter that is not a space = ".... .. .... .."<br>
      to_Morse("Hi hi") and if setSpaces(false) only includes spaces already in string = "...... ......"
    </p2>
    <h3>
      Future Plans
    </h3>
    <p3>
      I plan to add a version for javascript, python, c# and plenty of other languages. I also plan to add more functionalities for double, long etc...
    </p3>
</html>
