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

// Function: sub_002250D8
// Address: 0x2250d8 - 0x225158
void sub_002250D8_0x2250d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002250D8_0x2250d8");
#endif

    switch (ctx->pc) {
        case 0x22510cu: goto label_22510c;
        case 0x225114u: goto label_225114;
        case 0x225138u: goto label_225138;
        case 0x225144u: goto label_225144;
        default: break;
    }

    ctx->pc = 0x2250d8u;

    // 0x2250d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2250d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2250dc: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x2250dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2250e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2250e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2250e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2250e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2250e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2250E8u;
    {
        const bool branch_taken_0x2250e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250E8u;
        // 0x2250ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250e8) {
            ctx->pc = 0x22511Cu;
            goto label_22511c;
        }
    }
    ctx->pc = 0x2250F0u;
    // 0x2250f0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2250F0u;
    {
        const bool branch_taken_0x2250f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250F0u;
        // 0x2250f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250f0) {
            ctx->pc = 0x225120u;
            goto label_225120;
        }
    }
    ctx->pc = 0x2250F8u;
    // 0x2250f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2250f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2250fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2250FCu;
    {
        const bool branch_taken_0x2250fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x225100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250FCu;
        // 0x225100: 0xae050014  sw          $a1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250fc) {
            ctx->pc = 0x22510Cu;
            goto label_22510c;
        }
    }
    ctx->pc = 0x225104u;
    // 0x225104: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x225104u;
    SET_GPR_U32(ctx, 31, 0x22510Cu);
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x225104u, 0x22510Cu)) {
        return;
    }
    ctx->pc = 0x22510Cu;
label_22510c:
    // 0x22510c: 0xc088e4e  jal         func_223938
    ctx->pc = 0x22510Cu;
    SET_GPR_U32(ctx, 31, 0x225114u);
    ctx->pc = 0x225110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22510Cu;
    // 0x225110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223938u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x223938u, 0x22510Cu, 0x225114u)) {
        return;
    }
    ctx->pc = 0x225114u;
label_225114:
    // 0x225114: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x225114u;
    {
        const bool branch_taken_0x225114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225114u;
        // 0x225118: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225114) {
            ctx->pc = 0x225148u;
            goto label_225148;
        }
    }
    ctx->pc = 0x22511Cu;
label_22511c:
    // 0x22511c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225120:
    // 0x225120: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x225120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x225124: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x225124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x225128: 0x24a5a748  addiu       $a1, $a1, -0x58B8
    ctx->pc = 0x225128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944584));
    // 0x22512c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22512cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x225130: 0xc092848  jal         func_24A120
    ctx->pc = 0x225130u;
    SET_GPR_U32(ctx, 31, 0x225138u);
    ctx->pc = 0x225134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225130u;
    // 0x225134: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x225130u, 0x225138u)) {
        return;
    }
    ctx->pc = 0x225138u;
label_225138:
    // 0x225138: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x225138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22513c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x22513Cu;
    SET_GPR_U32(ctx, 31, 0x225144u);
    ctx->pc = 0x225140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22513Cu;
    // 0x225140: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x22513Cu, 0x225144u)) {
        return;
    }
    ctx->pc = 0x225144u;
label_225144:
    // 0x225144: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225148:
    // 0x225148: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22514c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22514cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225150: 0x3e00008  jr          $ra
    ctx->pc = 0x225150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225150u;
        // 0x225154: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225158u;
}
