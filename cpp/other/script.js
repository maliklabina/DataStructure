// Create a function to generate a random number within a range
function getRandomInt(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
  }
  
  // Create a function to create a flower element
  function createFlower() {
    const flower = document.createElement("div");
    flower.className = "flower";
    flower.style.top = `${getRandomInt(0, 100)}%`;
    flower.style.left = `${getRandomInt(0, 100)}%`;
    document.body.appendChild(flower);
  }
  
  // Create a function to animate the flowers
  function animateFlowers() {
    for (let i = 0; i < 100; i++) {
      createFlower();
    }
    setTimeout(animateFlowers, 1000);
  }
  
  // Start the animation
  animateFlowers();