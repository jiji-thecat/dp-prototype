# Design Pattern - Prototype Pattern

## Description

![prototype](https://github.com/jiji-thecat/dp-prototype/assets/104809324/02a45f6a-fe1c-4250-b9d6-b7a84d94e24a)

The Prototype pattern allows you to easily create many instances of an object from a single prototype instance. For example, if you could mass produce stickers from one sticker, it would be very useful.

### Difference Between Template Pattern and Prototype Pattern

While the Prototype pattern is similar to the Template pattern, there are key differences:

- **Template Pattern**: Ensures the process of generating an instance.
- **Prototype Pattern**: Mass produces instances from an existing instance.

### Class Diagram

![class diagram](https://github.com/jiji-thecat/dp-prototype/assets/104809324/276cbbee-fe1f-409e-ad29-9f95e96a3e91)
[Wikipedia](https://ja.wikipedia.org/wiki/Prototype_%E3%83%91%E3%82%BF%E3%83%BC%E3%83%B3)

In the Prototype pattern, a prototype class creates instances and returns them.

## How to Install and Run

Import this project as a QT project.

## How to Use This App

![prototype](https://github.com/jiji-thecat/dp-prototype/assets/104809324/02a45f6a-fe1c-4250-b9d6-b7a84d94e24a)

This app generates a star sticker with glitter on top. Sprinkling the glitter takes 3 seconds. If you want to produce 10 stickers, it would take 10 × 3 = 30 seconds. However, using the Prototype pattern, it takes 3 seconds to create one sticker (instance), and you can mass produce 10 more from that one sticker.

## License

**MIT License**

Copyright © 2024 jiji

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation, the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

\*\*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
