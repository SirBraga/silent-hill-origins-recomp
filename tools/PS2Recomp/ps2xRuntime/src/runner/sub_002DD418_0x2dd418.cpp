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

// Function: sub_002DD418
// Address: 0x2dd418 - 0x2dd478
void sub_002DD418_0x2dd418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD418_0x2dd418");
#endif

    switch (ctx->pc) {
        case 0x2dd42cu: goto label_2dd42c;
        case 0x2dd448u: goto label_2dd448;
        case 0x2dd464u: goto label_2dd464;
        default: break;
    }

    ctx->pc = 0x2dd418u;

    // 0x2dd418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dd41c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dd41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dd420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd424: 0xc0b7d76  jal         func_2DF5D8
    ctx->pc = 0x2DD424u;
    SET_GPR_U32(ctx, 31, 0x2DD42Cu);
    ctx->pc = 0x2DD428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD424u;
    // 0x2dd428: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF5D8u, 0x2DD424u, 0x2DD42Cu)) {
        return;
    }
    ctx->pc = 0x2DD42Cu;
label_2dd42c:
    // 0x2dd42c: 0x9203001b  lbu         $v1, 0x1B($s0)
    ctx->pc = 0x2dd42cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
    // 0x2dd430: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2dd430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2dd434: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD434u;
    {
        const bool branch_taken_0x2dd434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD434u;
        // 0x2dd438: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd434) {
            ctx->pc = 0x2DD450u;
            goto label_2dd450;
        }
    }
    ctx->pc = 0x2DD43Cu;
    // 0x2dd43c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd440: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2DD440u;
    SET_GPR_U32(ctx, 31, 0x2DD448u);
    ctx->pc = 0x2DD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD440u;
    // 0x2dd444: 0x24848018  addiu       $a0, $a0, -0x7FE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DD440u, 0x2DD448u)) {
        return;
    }
    ctx->pc = 0x2DD448u;
label_2dd448:
    // 0x2dd448: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD448u;
    {
        const bool branch_taken_0x2dd448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD448u;
        // 0x2dd44c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd448) {
            ctx->pc = 0x2DD468u;
            goto label_2dd468;
        }
    }
    ctx->pc = 0x2DD450u;
label_2dd450:
    // 0x2dd450: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2dd450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2dd454: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD454u;
    {
        const bool branch_taken_0x2dd454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd454) {
            ctx->pc = 0x2DD458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD454u;
            // 0x2dd458: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD468u;
            goto label_2dd468;
        }
    }
    ctx->pc = 0x2DD45Cu;
    // 0x2dd45c: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2DD45Cu;
    SET_GPR_U32(ctx, 31, 0x2DD464u);
    ctx->pc = 0x2DD460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD45Cu;
    // 0x2dd460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DD45Cu, 0x2DD464u)) {
        return;
    }
    ctx->pc = 0x2DD464u;
label_2dd464:
    // 0x2dd464: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dd464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd468:
    // 0x2dd468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd46c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD46Cu;
        // 0x2dd470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD474u;
    // 0x2dd474: 0x0  nop
    ctx->pc = 0x2dd474u;
    // NOP
    ctx->pc = 0x2dd478u;
}
