enum CelestialBodies {
  Planets,
  Stars,
  Stellites,
  Comets,
  Asteroids,
  Meteors,
  Galaxies
}

const earth: CelestialBodies = CelestialBodies.Planets
const orion: CelestialBodies = CelestialBodies.Galaxies
console.log(earth, orion)

enum Continent {
  North_America,
  Europe,
  South_America = Continent.North_America,
  Asia = 2,
  Africa = 3,
  Central_America = Continent.North_America,
}

const brazil: Continent = Continent.South_America
const eua: Continent = Continent.North_America
const egipt: Continent = Continent.Africa
console.log(brazil, eua, egipt)
