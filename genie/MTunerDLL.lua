--
-- Copyright 2013-2015 Milos Tosic. All rights reserved.
-- License: http://www.opensource.org/licenses/BSD-2-Clause
--

function projectDependencies_MTunerDLL()
	return { "rmem", "rbase" }
end

function projectAdd_MTunerDLL() 
	addProject_lib("MTunerDLL", Lib.Tool, true)
end

