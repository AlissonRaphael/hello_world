enum Type {
  Mobile,
  Frontend,
  Backend
}

interface Course {
  name: string,
  type: Type,
  [prop: string]: any,
  finnaly(msg: string): void
}

const db: Course[] = []

function registerCourse (course: Course): void {
  db.push(course)
  course.finnaly(`${course.name} cadastrado!`)
}

function listCourses (courseType: Type): Course[] {
  return db.filter(({ type }) => type === courseType)
}

registerCourse({ name: 'Curso de React Native', type: Type.Mobile, createdBy: '20 set', finnaly: (msg) => console.log(msg) })
registerCourse({ name: 'HTML5 e CSS3', type: Type.Frontend, author: 'Kevan', finnaly: (msg) => console.table({ msg }) })
registerCourse({ name: 'Desenvolvimento com Python e Django', type: Type.Backend, finnaly: (msg) => {} })
registerCourse({ name: 'Curso de Flutter', type: Type.Mobile, author: 'Marcus', finnaly: (msg) => {} })

const list = listCourses(Type.Mobile)
console.table(list)
