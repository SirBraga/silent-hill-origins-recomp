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

// Function: sub_001512A8
// Address: 0x1512a8 - 0x151360
void sub_001512A8_0x1512a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001512A8_0x1512a8");
#endif

    switch (ctx->pc) {
        case 0x1512d4u: goto label_1512d4;
        case 0x1512e0u: goto label_1512e0;
        case 0x1512f8u: goto label_1512f8;
        case 0x151304u: goto label_151304;
        default: break;
    }

    ctx->pc = 0x1512a8u;

    // 0x1512a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1512a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1512ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1512acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1512b0: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1512b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x1512b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1512b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1512b8: 0x8e4284fc  lw          $v0, -0x7B04($s2)
    ctx->pc = 0x1512b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3384FCu));
    // 0x1512bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1512bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1512c0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1512C0u;
    {
        const bool branch_taken_0x1512c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1512C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512C0u;
        // 0x1512c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512c0) {
            ctx->pc = 0x151348u;
            goto label_151348;
        }
    }
    ctx->pc = 0x1512C8u;
    // 0x1512c8: 0x240428a4  addiu       $a0, $zero, 0x28A4
    ctx->pc = 0x1512c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10404));
    // 0x1512cc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1512CCu;
    SET_GPR_U32(ctx, 31, 0x1512D4u);
    ctx->pc = 0x1512D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1512CCu;
    // 0x1512d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1512CCu, 0x1512D4u)) {
        return;
    }
    ctx->pc = 0x1512D4u;
label_1512d4:
    // 0x1512d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1512d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1512d8: 0xc054298  jal         func_150A60
    ctx->pc = 0x1512D8u;
    SET_GPR_U32(ctx, 31, 0x1512E0u);
    ctx->pc = 0x1512DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1512D8u;
    // 0x1512dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150A60u, 0x1512D8u, 0x1512E0u)) {
        return;
    }
    ctx->pc = 0x1512E0u;
label_1512e0:
    // 0x1512e0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1512e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1512e4: 0x2450288c  addiu       $s0, $v0, 0x288C
    ctx->pc = 0x1512e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10380));
    // 0x1512e8: 0xae4284fc  sw          $v0, -0x7B04($s2)
    ctx->pc = 0x1512e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294935804), GPR_U32(ctx, 2));
    // 0x1512ec: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1512ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1512f0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1512f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1512f4: 0x0  nop
    ctx->pc = 0x1512f4u;
    // NOP
label_1512f8:
    // 0x1512f8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1512f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1512fc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1512FCu;
    SET_GPR_U32(ctx, 31, 0x151304u);
    ctx->pc = 0x151300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1512FCu;
    // 0x151300: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1512FCu, 0x151304u)) {
        return;
    }
    ctx->pc = 0x151304u;
label_151304:
    // 0x151304: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x151304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151308: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x151308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15130c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15130cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x151310: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x151310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151314: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x151314u;
    {
        const bool branch_taken_0x151314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151314) {
            ctx->pc = 0x151318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151314u;
            // 0x151318: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15131Cu;
            goto label_15131c;
        }
    }
    ctx->pc = 0x15131Cu;
label_15131c:
    // 0x15131c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151320: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x151324: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x151324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x151328: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x151328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x15132c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15132cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x151330: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x151330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x151334: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x151334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x151338: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15133c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x15133cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x151340: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x151340u;
    {
        const bool branch_taken_0x151340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151340u;
        // 0x151344: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151340) {
            ctx->pc = 0x1512F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1512f8;
        }
    }
    ctx->pc = 0x151348u;
label_151348:
    // 0x151348: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x151348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15134c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15134cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151350: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x151350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151358: 0x3e00008  jr          $ra
    ctx->pc = 0x151358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151358u;
        // 0x15135c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151360u;
}
