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

// Function: sub_002042F0
// Address: 0x2042f0 - 0x2043b0
void sub_002042F0_0x2042f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002042F0_0x2042f0");
#endif

    switch (ctx->pc) {
        case 0x204338u: goto label_204338;
        case 0x20435cu: goto label_20435c;
        default: break;
    }

    ctx->pc = 0x2042f0u;

    // 0x2042f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2042f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2042f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2042f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2042f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2042f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2042fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2042fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x204300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204304: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x204304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204308: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x204308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x20430c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x20430Cu;
    {
        const bool branch_taken_0x20430c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20430Cu;
        // 0x204310: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20430c) {
            ctx->pc = 0x204398u;
            goto label_204398;
        }
    }
    ctx->pc = 0x204314u;
    // 0x204314: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x204314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x204318: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x204318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20431c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20431cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204320: 0x24422cf8  addiu       $v0, $v0, 0x2CF8
    ctx->pc = 0x204320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11512));
    // 0x204324: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x204324u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x702CFCu));
    // 0x204328: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x204328u;
    {
        const bool branch_taken_0x204328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204328u;
        // 0x20432c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204328) {
            ctx->pc = 0x204350u;
            goto label_204350;
        }
    }
    ctx->pc = 0x204330u;
    // 0x204330: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x204330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204334: 0x0  nop
    ctx->pc = 0x204334u;
    // NOP
label_204338:
    // 0x204338: 0x10440017  beq         $v0, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x204338u;
    {
        const bool branch_taken_0x204338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x20433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204338u;
        // 0x20433c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204338) {
            ctx->pc = 0x204398u;
            goto label_204398;
        }
    }
    ctx->pc = 0x204340u;
    // 0x204340: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x204340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x204344: 0x0  nop
    ctx->pc = 0x204344u;
    // NOP
    // 0x204348: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x204348u;
    {
        const bool branch_taken_0x204348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x204348) {
            ctx->pc = 0x20434Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204348u;
            // 0x20434c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204338;
        }
    }
    ctx->pc = 0x204350u;
label_204350:
    // 0x204350: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x204350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x204354: 0xc080858  jal         func_202160
    ctx->pc = 0x204354u;
    SET_GPR_U32(ctx, 31, 0x20435Cu);
    ctx->pc = 0x204358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204354u;
    // 0x204358: 0x26502cf8  addiu       $s0, $s2, 0x2CF8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x204354u, 0x20435Cu)) {
        return;
    }
    ctx->pc = 0x20435Cu;
label_20435c:
    // 0x20435c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20435cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204360: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x204364: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x204364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x204368: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x204368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x20436c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20436Cu;
    {
        const bool branch_taken_0x20436c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20436Cu;
        // 0x204370: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20436c) {
            ctx->pc = 0x204378u;
            goto label_204378;
        }
    }
    ctx->pc = 0x204374u;
    // 0x204374: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x204374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_204378:
    // 0x204378: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x204378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20437c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20437Cu;
    {
        const bool branch_taken_0x20437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20437c) {
            ctx->pc = 0x204380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20437Cu;
            // 0x204380: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204384u;
            goto label_204384;
        }
    }
    ctx->pc = 0x204384u;
label_204384:
    // 0x204384: 0x8e422cf8  lw          $v0, 0x2CF8($s2)
    ctx->pc = 0x204384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11512)));
    // 0x204388: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x204388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x20438c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204390: 0xae422cf8  sw          $v0, 0x2CF8($s2)
    ctx->pc = 0x204390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11512), GPR_U32(ctx, 2));
    // 0x204394: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x204394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204398:
    // 0x204398: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x204398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20439c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20439cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2043a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2043a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2043a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2043A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2043A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043A4u;
        // 0x2043a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2043A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2043ACu;
    // 0x2043ac: 0x0  nop
    ctx->pc = 0x2043acu;
    // NOP
    ctx->pc = 0x2043b0u;
}
