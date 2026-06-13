import React from 'react';

export default function Card({username}) {
  console.log(username)
  return (
    <div className="md:max-w-sm w-full p-6 rounded-xl shadow-xl bg-black border border-zinc-800 hover:border-white transition-all duration-300 hover:transform hover:scale-105 group">
      <div className="relative overflow-hidden rounded-lg mb-6">
        <img
          src="data:image/jpeg;base64,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"
          alt="Featured content"
          width={400}
          height={300}
          className="object-cover object-center w-full h-48 transition-transform duration-300 group-hover:scale-110"
        />
        <div className="absolute inset-0 bg-gradient-to-t from-black/60 to-transparent opacity-0 group-hover:opacity-100 transition-opacity duration-300" />
      </div>

      <div className="mb-4">
        <span className="inline-block px-3 py-1 text-xs font-medium tracking-wider uppercase bg-white text-black rounded-full mb-3">
          Featured
        </span>
        <h2 className="text-xl font-bold text-white mb-2 group-hover:text-gray-300 transition-colors duration-200">
          Modern Design Solutions
        </h2>
      </div>

      <p className="text-gray-400 text-sm leading-relaxed mb-6">
        Discover cutting-edge design patterns and UI components that elevate
        your digital experiences.
      </p>

      <div className="flex items-center justify-between">
        <button className="px-4 py-2 bg-white hover:bg-gray-200 text-black text-sm rounded-lg transition-colors duration-200">
          Learn More
        </button>
        <div className="flex items-center space-x-1 text-xs text-gray-500">
          <svg className="w-4 h-4" fill="currentColor" viewBox="0 0 20 20">
            <path d="M10 12a2 2 0 100-4 2 2 0 000 4z" />
            <path
              fillRule="evenodd"
              d="M.458 10C1.732 5.943 5.522 3 10 3s8.268 2.943 9.542 7c-1.274 4.057-5.064 7-9.542 7S1.732 14.057.458 10zM14 10a4 4 0 11-8 0 4 4 0 018 0z"
              clipRule="evenodd"
            />
          </svg>
          <span>{username}</span>
        </div>
      </div>
    </div>
  );
}
