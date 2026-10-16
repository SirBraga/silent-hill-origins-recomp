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

// Function: sub_00126D98
// Address: 0x126d98 - 0x126e10
void sub_00126D98_0x126d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126D98_0x126d98");
#endif

    switch (ctx->pc) {
        case 0x126dd0u: goto label_126dd0;
        case 0x126de0u: goto label_126de0;
        case 0x126decu: goto label_126dec;
        default: break;
    }

    ctx->pc = 0x126d98u;

    // 0x126d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126d9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x126d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x126da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126da8: 0x8e020b5c  lw          $v0, 0xB5C($s0)
    ctx->pc = 0x126da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2908)));
    // 0x126dac: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x126dacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x126db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x126db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x126db4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x126DB4u;
    {
        const bool branch_taken_0x126db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DB4u;
        // 0x126db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126db4) {
            ctx->pc = 0x126DFCu;
            goto label_126dfc;
        }
    }
    ctx->pc = 0x126DBCu;
    // 0x126dbc: 0x8e0202a4  lw          $v0, 0x2A4($s0)
    ctx->pc = 0x126dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x126dc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126DC0u;
    {
        const bool branch_taken_0x126dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126dc0) {
            ctx->pc = 0x126DD8u;
            goto label_126dd8;
        }
    }
    ctx->pc = 0x126DC8u;
    // 0x126dc8: 0xc040950  jal         func_102540
    ctx->pc = 0x126DC8u;
    SET_GPR_U32(ctx, 31, 0x126DD0u);
    ctx->pc = 0x102540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102540u, 0x126DC8u, 0x126DD0u)) {
        return;
    }
    ctx->pc = 0x126DD0u;
label_126dd0:
    // 0x126dd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x126DD0u;
    {
        const bool branch_taken_0x126dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DD0u;
        // 0x126dd4: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dd0) {
            ctx->pc = 0x126DE4u;
            goto label_126de4;
        }
    }
    ctx->pc = 0x126DD8u;
label_126dd8:
    // 0x126dd8: 0xc04094c  jal         func_102530
    ctx->pc = 0x126DD8u;
    SET_GPR_U32(ctx, 31, 0x126DE0u);
    ctx->pc = 0x126DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126DD8u;
    // 0x126ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x126DD8u, 0x126DE0u)) {
        return;
    }
    ctx->pc = 0x126DE0u;
label_126de0:
    // 0x126de0: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x126de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_126de4:
    // 0x126de4: 0xc068280  jal         func_1A0A00
    ctx->pc = 0x126DE4u;
    SET_GPR_U32(ctx, 31, 0x126DECu);
    ctx->pc = 0x126DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126DE4u;
    // 0x126de8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0A00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0A00u, 0x126DE4u, 0x126DECu)) {
        return;
    }
    ctx->pc = 0x126DECu;
label_126dec:
    // 0x126dec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126decu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126df0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x126DF0u;
    {
        const bool branch_taken_0x126df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DF0u;
        // 0x126df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126df0) {
            ctx->pc = 0x126DFCu;
            goto label_126dfc;
        }
    }
    ctx->pc = 0x126DF8u;
    // 0x126df8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126dfc:
    // 0x126dfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x126dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126e04: 0x3e00008  jr          $ra
    ctx->pc = 0x126E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E04u;
        // 0x126e08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126E0Cu;
    // 0x126e0c: 0x0  nop
    ctx->pc = 0x126e0cu;
    // NOP
    ctx->pc = 0x126e10u;
}
