#pragma once
#ifndef DIRECTORY_TOOLS_H
#define DIRECTORY_TOOLS_H

#include "Buffer.h"
#include "Directory.h"
#include <filesystem>
#include <string>
#include <vector>


/** Namespace declaration for all nSuite methods and classes. */
namespace NST {
	/** Returns a list of file information for all files within the directory specified.
	@param	directory			the directory to retrieve file-info from.
	@return						a vector of file information, including file names, sizes, meta-data, etc. */
	std::vector<std::filesystem::directory_entry> GetFilePaths(const std::string & directory);
	/** Retrieves the path to the user's start-menu folder.
	@return						the path to the user's start menu folder. */
	std::string GetStartMenuPath();
	/** Retrieve the path to the user's desktop.
	@return						the path to the user's desktop folder. */
	std::string GetDesktopPath();
	/** Retrieve the directory this executable is running from.
	@return						the current directory for this program. */
	std::string GetRunningDirectory();
	/** Cleans up the target string representing a file path, specifically targeting the number of slashes.
	@param	path				the path to be sanitized.
	@return						the sanitized version of path. */
	std::string SanitizePath(const std::string & path);
};

#endif // DIRECTORY_TOOLS_H