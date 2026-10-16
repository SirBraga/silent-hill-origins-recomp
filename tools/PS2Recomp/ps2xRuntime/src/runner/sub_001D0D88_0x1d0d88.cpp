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

// Function: sub_001D0D88
// Address: 0x1d0d88 - 0x1d0e08
void sub_001D0D88_0x1d0d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0D88_0x1d0d88");
#endif

    switch (ctx->pc) {
        case 0x1d0dbcu: goto label_1d0dbc;
        case 0x1d0dc8u: goto label_1d0dc8;
        case 0x1d0dd4u: goto label_1d0dd4;
        case 0x1d0de0u: goto label_1d0de0;
        case 0x1d0decu: goto label_1d0dec;
        case 0x1d0df8u: goto label_1d0df8;
        default: break;
    }

    ctx->pc = 0x1d0d88u;

    // 0x1d0d88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d0d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1d0d8c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d0d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d0d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0d94: 0x8c4543c8  lw          $a1, 0x43C8($v0)
    ctx->pc = 0x1d0d94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43C8u));
    // 0x1d0d98: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1d0d98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d0d9c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0D9Cu;
    {
        const bool branch_taken_0x1d0d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D9Cu;
        // 0x1d0da0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d9c) {
            ctx->pc = 0x1D0DBCu;
            goto label_1d0dbc;
        }
    }
    ctx->pc = 0x1D0DA4u;
    // 0x1d0da4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0da8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0DA8u;
    {
        const bool branch_taken_0x1d0da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DA8u;
        // 0x1d0dac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0da8) {
            ctx->pc = 0x1D0DBCu;
            goto label_1d0dbc;
        }
    }
    ctx->pc = 0x1D0DB0u;
    // 0x1d0db0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d0db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d0db4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D0DB4u;
    SET_GPR_U32(ctx, 31, 0x1D0DBCu);
    ctx->pc = 0x1D0DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DB4u;
    // 0x1d0db8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D0DB4u, 0x1D0DBCu)) {
        return;
    }
    ctx->pc = 0x1D0DBCu;
label_1d0dbc:
    // 0x1d0dbc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0dc0: 0xc05fde4  jal         func_17F790
    ctx->pc = 0x1D0DC0u;
    SET_GPR_U32(ctx, 31, 0x1D0DC8u);
    ctx->pc = 0x1D0DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DC0u;
    // 0x1d0dc4: 0x8c449a0c  lw          $a0, -0x65F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F790u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F790u, 0x1D0DC0u, 0x1D0DC8u)) {
        return;
    }
    ctx->pc = 0x1D0DC8u;
label_1d0dc8:
    // 0x1d0dc8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0dcc: 0xc05fde8  jal         func_17F7A0
    ctx->pc = 0x1D0DCCu;
    SET_GPR_U32(ctx, 31, 0x1D0DD4u);
    ctx->pc = 0x1D0DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DCCu;
    // 0x1d0dd0: 0x8c449a10  lw          $a0, -0x65F0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F7A0u, 0x1D0DCCu, 0x1D0DD4u)) {
        return;
    }
    ctx->pc = 0x1D0DD4u;
label_1d0dd4:
    // 0x1d0dd4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0dd8: 0xc05fdec  jal         func_17F7B0
    ctx->pc = 0x1D0DD8u;
    SET_GPR_U32(ctx, 31, 0x1D0DE0u);
    ctx->pc = 0x1D0DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DD8u;
    // 0x1d0ddc: 0x8c449a14  lw          $a0, -0x65EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F7B0u, 0x1D0DD8u, 0x1D0DE0u)) {
        return;
    }
    ctx->pc = 0x1D0DE0u;
label_1d0de0:
    // 0x1d0de0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0de4: 0xc05fdb4  jal         func_17F6D0
    ctx->pc = 0x1D0DE4u;
    SET_GPR_U32(ctx, 31, 0x1D0DECu);
    ctx->pc = 0x1D0DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DE4u;
    // 0x1d0de8: 0xc44c9a18  lwc1        $f12, -0x65E8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F6D0u, 0x1D0DE4u, 0x1D0DECu)) {
        return;
    }
    ctx->pc = 0x1D0DECu;
label_1d0dec:
    // 0x1d0dec: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0df0: 0xc05fdbe  jal         func_17F6F8
    ctx->pc = 0x1D0DF0u;
    SET_GPR_U32(ctx, 31, 0x1D0DF8u);
    ctx->pc = 0x1D0DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DF0u;
    // 0x1d0df4: 0xc44c9a1c  lwc1        $f12, -0x65E4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F6F8u, 0x1D0DF0u, 0x1D0DF8u)) {
        return;
    }
    ctx->pc = 0x1D0DF8u;
label_1d0df8:
    // 0x1d0df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E00u;
        // 0x1d0e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E08u;
}
