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

// Function: sub_001D91A0
// Address: 0x1d91a0 - 0x1d9270
void sub_001D91A0_0x1d91a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D91A0_0x1d91a0");
#endif

    switch (ctx->pc) {
        case 0x1d91c0u: goto label_1d91c0;
        case 0x1d91d4u: goto label_1d91d4;
        case 0x1d91ecu: goto label_1d91ec;
        case 0x1d91f8u: goto label_1d91f8;
        case 0x1d920cu: goto label_1d920c;
        case 0x1d9258u: goto label_1d9258;
        default: break;
    }

    ctx->pc = 0x1d91a0u;

    // 0x1d91a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d91a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d91a4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d91a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d91a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d91ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d91acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d91b0: 0x24508a68  addiu       $s0, $v0, -0x7598
    ctx->pc = 0x1d91b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937192));
    // 0x1d91b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d91b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d91b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d91b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91bc: 0x0  nop
    ctx->pc = 0x1d91bcu;
    // NOP
label_1d91c0:
    // 0x1d91c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d91c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d91c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d91c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d91c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91cc: 0xc0b69c2  jal         func_2DA708
    ctx->pc = 0x1D91CCu;
    SET_GPR_U32(ctx, 31, 0x1D91D4u);
    ctx->pc = 0x1D91D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91CCu;
    // 0x1d91d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA708u, 0x1D91CCu, 0x1D91D4u)) {
        return;
    }
    ctx->pc = 0x1D91D4u;
label_1d91d4:
    // 0x1d91d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d91d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d91d8: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x1d91d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1d91dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D91DCu;
    {
        const bool branch_taken_0x1d91dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91DCu;
        // 0x1d91e0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91dc) {
            ctx->pc = 0x1D91C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d91c0;
        }
    }
    ctx->pc = 0x1D91E4u;
    // 0x1d91e4: 0xc0b8118  jal         func_2E0460
    ctx->pc = 0x1D91E4u;
    SET_GPR_U32(ctx, 31, 0x1D91ECu);
    ctx->pc = 0x1D91E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91E4u;
    // 0x1d91e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0460u, 0x1D91E4u, 0x1D91ECu)) {
        return;
    }
    ctx->pc = 0x1D91ECu;
label_1d91ec:
    // 0x1d91ec: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d91f0: 0x24508c68  addiu       $s0, $v0, -0x7398
    ctx->pc = 0x1d91f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937704));
    // 0x1d91f4: 0x0  nop
    ctx->pc = 0x1d91f4u;
    // NOP
label_1d91f8:
    // 0x1d91f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d91f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d91fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d91fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9204: 0xc0b69c2  jal         func_2DA708
    ctx->pc = 0x1D9204u;
    SET_GPR_U32(ctx, 31, 0x1D920Cu);
    ctx->pc = 0x1D9208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9204u;
    // 0x1d9208: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA708u, 0x1D9204u, 0x1D920Cu)) {
        return;
    }
    ctx->pc = 0x1D920Cu;
label_1d920c:
    // 0x1d920c: 0x2e22000f  sltiu       $v0, $s1, 0xF
    ctx->pc = 0x1d920cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1d9210: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D9210u;
    {
        const bool branch_taken_0x1d9210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9210u;
        // 0x1d9214: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9210) {
            ctx->pc = 0x1D91F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d91f8;
        }
    }
    ctx->pc = 0x1D9218u;
    // 0x1d9218: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d9218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d921c: 0x8c4382f0  lw          $v1, -0x7D10($v0)
    ctx->pc = 0x1d921cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3382F0u));
    // 0x1d9220: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D9220u;
    {
        const bool branch_taken_0x1d9220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9220u;
        // 0x1d9224: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9220) {
            ctx->pc = 0x1D9258u;
            goto label_1d9258;
        }
    }
    ctx->pc = 0x1D9228u;
    // 0x1d9228: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d9228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d922c: 0x8c454318  lw          $a1, 0x4318($v0)
    ctx->pc = 0x1d922cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17176)));
    // 0x1d9230: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d9230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d9234: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1d9234u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d9238: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9238u;
    {
        const bool branch_taken_0x1d9238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9238u;
        // 0x1d923c: 0xac6082f4  sw          $zero, -0x7D0C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294935284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9238) {
            ctx->pc = 0x1D9258u;
            goto label_1d9258;
        }
    }
    ctx->pc = 0x1D9240u;
    // 0x1d9240: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d9240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9244: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9244u;
    {
        const bool branch_taken_0x1d9244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9244u;
        // 0x1d9248: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9244) {
            ctx->pc = 0x1D9258u;
            goto label_1d9258;
        }
    }
    ctx->pc = 0x1D924Cu;
    // 0x1d924c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d924cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d9250: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D9250u;
    SET_GPR_U32(ctx, 31, 0x1D9258u);
    ctx->pc = 0x1D9254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9250u;
    // 0x1d9254: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D9250u, 0x1D9258u)) {
        return;
    }
    ctx->pc = 0x1D9258u;
label_1d9258:
    // 0x1d9258: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d9258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d925c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d925cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9264: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9264u;
        // 0x1d9268: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D926Cu;
    // 0x1d926c: 0x0  nop
    ctx->pc = 0x1d926cu;
    // NOP
    ctx->pc = 0x1d9270u;
}
