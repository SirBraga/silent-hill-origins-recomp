// Applies the splat symbol files (config/symbol_addrs*.txt) to the program: `name = 0xADDR; // type:func size:0xN`.
// Functions are created where missing and renamed; other symbols become primary labels. Arguments: the files.
// Used by tools/ghidra_ee.sh symbols.
//@category Black

import java.nio.file.Files;
import java.nio.file.Path;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.util.exception.DuplicateNameException;

public class ImportSplatSymbols extends GhidraScript {
    private static final Pattern LINE =
        Pattern.compile("^\\s*([A-Za-z_.$][\\w.$]*)\\s*=\\s*0x([0-9A-Fa-f]+)\\s*;(.*)$");

    @Override
    protected void run() throws Exception {
        int functions = 0, labels = 0, skipped = 0;
        for (String file : getScriptArgs()) {
            for (String line : Files.readAllLines(Path.of(file))) {
                Matcher m = LINE.matcher(line);
                if (!m.matches())
                    continue;
                String name = m.group(1);
                Address addr = toAddr(Long.parseLong(m.group(2), 16));
                if (currentProgram.getMemory().getBlock(addr) == null) {
                    skipped++;
                    continue;
                }
                boolean present = false; // already applied, or the ELF's own symbol table has it
                for (Symbol s : currentProgram.getSymbolTable().getSymbols(addr))
                    present |= s.getName().equals(name);
                if (present && getFunctionAt(addr) != null && getFunctionAt(addr).getName().equals(name))
                    continue;
                if (m.group(3).contains("type:func")) {
                    Function f = getFunctionAt(addr);
                    if (f == null) {
                        disassemble(addr);
                        f = createFunction(addr, name);
                    }
                    if (f != null) {
                        try {
                            f.setName(name, SourceType.USER_DEFINED);
                        } catch (DuplicateNameException e) {
                            createLabel(addr, name, false, SourceType.USER_DEFINED); // name used elsewhere too
                        }
                        functions++;
                        continue;
                    }
                }
                Symbol s = createLabel(addr, name, true, SourceType.USER_DEFINED);
                if (s != null)
                    labels++;
                else
                    skipped++;
            }
        }
        println("functions " + functions + ", labels " + labels + ", skipped " + skipped);
    }
}
