import React, { StrictMode } from 'react'
import {createRoot} from 'react-dom/client'
import App from './App.jsx'

function MyApp() {
  return (
    <div>Hello World</div>
  )
}

const anotherElement = (
  <a href="https://google.com" target='_blank'>Click Me</a>
)

const anotherUser="fastwithkamran"

const reactElement = React.createElement(
  'a',
  {
    href: 'https://google.com',
    target: '_blank'
  },
  'click me to visit google',
  anotherUser
)

createRoot(document.getElementById('root')).render(
      anotherElement
)
