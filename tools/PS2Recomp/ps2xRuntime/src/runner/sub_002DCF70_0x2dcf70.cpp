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

// Function: sub_002DCF70
// Address: 0x2dcf70 - 0x2dd010
void sub_002DCF70_0x2dcf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCF70_0x2dcf70");
#endif

    switch (ctx->pc) {
        case 0x2dcfa0u: goto label_2dcfa0;
        case 0x2dcfc0u: goto label_2dcfc0;
        default: break;
    }

    ctx->pc = 0x2dcf70u;

    // 0x2dcf70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dcf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dcf74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dcf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dcf78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dcf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf7c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DCF7Cu;
    {
        const bool branch_taken_0x2dcf7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF7Cu;
        // 0x2dcf80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf7c) {
            ctx->pc = 0x2DCF8Cu;
            goto label_2dcf8c;
        }
    }
    ctx->pc = 0x2DCF84u;
    // 0x2dcf84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DCF84u;
    {
        const bool branch_taken_0x2dcf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF84u;
        // 0x2dcf88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf84) {
            ctx->pc = 0x2DCFB4u;
            goto label_2dcfb4;
        }
    }
    ctx->pc = 0x2DCF8Cu;
label_2dcf8c:
    // 0x2dcf8c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2dcf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2dcf90: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2dcf90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2dcf94: 0x24848018  addiu       $a0, $a0, -0x7FE8
    ctx->pc = 0x2dcf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934552));
    // 0x2dcf98: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2DCF98u;
    SET_GPR_U32(ctx, 31, 0x2DCFA0u);
    ctx->pc = 0x2DCF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF98u;
    // 0x2dcf9c: 0x34a50808  ori         $a1, $a1, 0x808 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2056);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2DCF98u, 0x2DCFA0u)) {
        return;
    }
    ctx->pc = 0x2DCFA0u;
label_2dcfa0:
    // 0x2dcfa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcfa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcfa4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DCFA4u;
    {
        const bool branch_taken_0x2dcfa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFA4u;
        // 0x2dcfa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcfa4) {
            ctx->pc = 0x2DCFB4u;
            goto label_2dcfb4;
        }
    }
    ctx->pc = 0x2DCFACu;
    // 0x2dcfac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2DCFACu;
    {
        const bool branch_taken_0x2dcfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFACu;
        // 0x2dcfb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcfac) {
            ctx->pc = 0x2DD000u;
            goto label_2dd000;
        }
    }
    ctx->pc = 0x2DCFB4u;
label_2dcfb4:
    // 0x2dcfb4: 0xa202001b  sb          $v0, 0x1B($s0)
    ctx->pc = 0x2dcfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dcfb8: 0xc0b7db2  jal         func_2DF6C8
    ctx->pc = 0x2DCFB8u;
    SET_GPR_U32(ctx, 31, 0x2DCFC0u);
    ctx->pc = 0x2DCFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCFB8u;
    // 0x2dcfbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6C8u, 0x2DCFB8u, 0x2DCFC0u)) {
        return;
    }
    ctx->pc = 0x2DCFC0u;
label_2dcfc0:
    // 0x2dcfc0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dcfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2dcfc4: 0x27829020  addiu       $v0, $gp, -0x6FE0
    ctx->pc = 0x2dcfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
    // 0x2dcfc8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2dcfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2dcfcc: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x2dcfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2dcfd0: 0x8f839020  lw          $v1, -0x6FE0($gp)
    ctx->pc = 0x2dcfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x2dcfd4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2dcfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2dcfd8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2dcfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2dcfdc: 0x8f829020  lw          $v0, -0x6FE0($gp)
    ctx->pc = 0x2dcfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x2dcfe0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2dcfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2dcfe4: 0xaf849020  sw          $a0, -0x6FE0($gp)
    ctx->pc = 0x2dcfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 4));
    // 0x2dcfe8: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x2dcfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2dcfec: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2dcfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2dcff0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2dcff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2dcff4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2dcff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2dcff8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dcff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcffc: 0x0  nop
    ctx->pc = 0x2dcffcu;
    // NOP
label_2dd000:
    // 0x2dd000: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dd000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd008: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD008u;
        // 0x2dd00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD010u;
}
