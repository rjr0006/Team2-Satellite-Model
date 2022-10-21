require 'open3'
path =  Dir.pwd + "\\config\\targets\\COSMOS_SIMULINK\\procedures\\main.exe"
puts path

#two optios:
#
#Option one
#pid = spawn path
#Process.detach(pid) #tell the OS we're not interested in the exit status

#option two
*streams, thread = Open3.popen3 path, '--option'


# Later...
#~streams.each &:close
#~status = thread.value

#option three
#system(path)