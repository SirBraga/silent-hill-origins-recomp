#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024CA90
// Address: 0x24ca90 - 0x24cb30
void sub_0024CA90_0x24ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CA90_0x24ca90");
#endif

    switch (ctx->pc) {
        case 0x24caa4u: goto label_24caa4;
        default: break;
    }

    ctx->pc = 0x24ca90u;

    // 0x24ca90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24ca94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24ca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24ca98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ca9c: 0xc09301a  jal         func_24C068
    ctx->pc = 0x24CA9Cu;
    SET_GPR_U32(ctx, 31, 0x24CAA4u);
    ctx->pc = 0x24CAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA9Cu;
    // 0x24caa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C068u, 0x24CA9Cu, 0x24CAA4u)) {
        return;
    }
    ctx->pc = 0x24CAA4u;
label_24caa4:
    // 0x24caa4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x24CAA4u;
    {
        const bool branch_taken_0x24caa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAA4u;
        // 0x24caa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24caa4) {
            ctx->pc = 0x24CB1Cu;
            goto label_24cb1c;
        }
    }
    ctx->pc = 0x24CAACu;
    // 0x24caac: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x24CAACu;
    {
        const bool branch_taken_0x24caac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAACu;
        // 0x24cab0: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24caac) {
            ctx->pc = 0x24CAE0u;
            goto label_24cae0;
        }
    }
    ctx->pc = 0x24CAB4u;
    // 0x24cab4: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24cab8: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x24cab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x24cabc: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x24cabcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24cac0: 0x6a04000f  ldl         $a0, 0xF($s0)
    ctx->pc = 0x24cac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x24cac4: 0x6e040008  ldr         $a0, 0x8($s0)
    ctx->pc = 0x24cac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x24cac8: 0xb043010f  sdl         $v1, 0x10F($v0)
    ctx->pc = 0x24cac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24cacc: 0xb4430108  sdr         $v1, 0x108($v0)
    ctx->pc = 0x24caccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24cad0: 0xb0440117  sdl         $a0, 0x117($v0)
    ctx->pc = 0x24cad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24cad4: 0xb4440110  sdr         $a0, 0x110($v0)
    ctx->pc = 0x24cad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24cad8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24CAD8u;
    {
        const bool branch_taken_0x24cad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAD8u;
        // 0x24cadc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cad8) {
            ctx->pc = 0x24CB1Cu;
            goto label_24cb1c;
        }
    }
    ctx->pc = 0x24CAE0u;
label_24cae0:
    // 0x24cae0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24cae4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x24cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x24cae8: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x24cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x24caec: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x24caecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x24caf0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x24caf4: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x24caf8: 0x2484ca30  addiu       $a0, $a0, -0x35D0
    ctx->pc = 0x24caf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953520));
    // 0x24cafc: 0x24a55218  addiu       $a1, $a1, 0x5218
    ctx->pc = 0x24cafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21016));
    // 0x24cb00: 0x24c6ca50  addiu       $a2, $a2, -0x35B0
    ctx->pc = 0x24cb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953552));
    // 0x24cb04: 0x2442ca70  addiu       $v0, $v0, -0x3590
    ctx->pc = 0x24cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953584));
    // 0x24cb08: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x24cb08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7310DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310DCu, _value); } while (0);
    // 0x24cb0c: 0xac640108  sw          $a0, 0x108($v1)
    ctx->pc = 0x24cb0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7310D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310D0u, _value); } while (0);
    // 0x24cb10: 0xac65010c  sw          $a1, 0x10C($v1)
    ctx->pc = 0x24cb10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7310D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310D4u, _value); } while (0);
    // 0x24cb14: 0xac660110  sw          $a2, 0x110($v1)
    ctx->pc = 0x24cb14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7310D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310D8u, _value); } while (0);
    // 0x24cb18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24cb1c:
    // 0x24cb1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24cb1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cb20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24cb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cb24: 0x3e00008  jr          $ra
    ctx->pc = 0x24CB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB24u;
        // 0x24cb28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CB2Cu;
    // 0x24cb2c: 0x0  nop
    ctx->pc = 0x24cb2cu;
    // NOP
    ctx->pc = 0x24cb30u;
}
