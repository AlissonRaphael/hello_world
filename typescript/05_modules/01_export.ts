type Player = { name: string, club: string }

const players: Player[] = []

export function register (player: Player): number {
  return players.push(player)
}

export function print (position?: number): void {
  if (position) {
    console.table(players[position-1])
  } else {
    console.table(players)
  }
}

export default function RegisterPlayer (name: string, club: string): void {
  const position = register({ name, club })
  print(position)
}
