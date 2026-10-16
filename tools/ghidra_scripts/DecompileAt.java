// Prints Ghidra's decompilation of the functions at the addresses given as script arguments.
// Used by tools/ghidra_ee.sh (headless); addresses are hex, with or without 0x.
//@category Black

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

public class DecompileAt extends GhidraScript {
    @Override
    protected void run() throws Exception {
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        for (String arg : getScriptArgs()) {
            Address addr = toAddr(arg.startsWith("0x") ? arg.substring(2) : arg);
            Function f = getFunctionContaining(addr);
            if (f == null) {
                f = createFunction(addr, null);
            }
            if (f == null) {
                println("// " + arg + ": no function");
                continue;
            }
            DecompileResults r = decomp.decompileFunction(f, 120, monitor);
            println("// ===== " + f.getName() + " @ " + f.getEntryPoint());
            println(r.decompileCompleted() ? r.getDecompiledFunction().getC() : "// failed: " + r.getErrorMessage());
        }
        decomp.dispose();
    }
}
