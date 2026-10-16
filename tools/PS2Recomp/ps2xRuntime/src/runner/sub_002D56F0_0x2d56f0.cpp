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

// Function: sub_002D56F0
// Address: 0x2d56f0 - 0x2d5790
void sub_002D56F0_0x2d56f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D56F0_0x2d56f0");
#endif

    switch (ctx->pc) {
        case 0x2d5718u: goto label_2d5718;
        case 0x2d5728u: goto label_2d5728;
        case 0x2d5730u: goto label_2d5730;
        case 0x2d5744u: goto label_2d5744;
        case 0x2d5750u: goto label_2d5750;
        case 0x2d5758u: goto label_2d5758;
        case 0x2d5768u: goto label_2d5768;
        default: break;
    }

    ctx->pc = 0x2d56f0u;

    // 0x2d56f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d56f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d56f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d56f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d56f8: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x2d56f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x2d56fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d56fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d5700: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x2d5700u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x683034u));
    // 0x2d5704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d5704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5708: 0x1050001a  beq         $v0, $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D5708u;
    {
        const bool branch_taken_0x2d5708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5708u;
        // 0x2d570c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5708) {
            ctx->pc = 0x2D5774u;
            goto label_2d5774;
        }
    }
    ctx->pc = 0x2D5710u;
    // 0x2d5710: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x2D5710u;
    SET_GPR_U32(ctx, 31, 0x2D5718u);
    ctx->pc = 0x2D5714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5710u;
    // 0x2d5714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x2D5710u, 0x2D5718u)) {
        return;
    }
    ctx->pc = 0x2D5718u;
label_2d5718:
    // 0x2d5718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d571c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d571cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5720: 0xc0a5dc2  jal         func_297708
    ctx->pc = 0x2D5720u;
    SET_GPR_U32(ctx, 31, 0x2D5728u);
    ctx->pc = 0x2D5724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5720u;
    // 0x2d5724: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297708u, 0x2D5720u, 0x2D5728u)) {
        return;
    }
    ctx->pc = 0x2D5728u;
label_2d5728:
    // 0x2d5728: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x2D5728u;
    SET_GPR_U32(ctx, 31, 0x2D5730u);
    ctx->pc = 0x2D572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5728u;
    // 0x2d572c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x2D5728u, 0x2D5730u)) {
        return;
    }
    ctx->pc = 0x2D5730u;
label_2d5730:
    // 0x2d5730: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d5730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5734: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d5734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5738: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2d5738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2d573c: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x2D573Cu;
    SET_GPR_U32(ctx, 31, 0x2D5744u);
    ctx->pc = 0x2D5740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D573Cu;
    // 0x2d5740: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x2D573Cu, 0x2D5744u)) {
        return;
    }
    ctx->pc = 0x2D5744u;
label_2d5744:
    // 0x2d5744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5748: 0xc0a5d86  jal         func_297618
    ctx->pc = 0x2D5748u;
    SET_GPR_U32(ctx, 31, 0x2D5750u);
    ctx->pc = 0x2D574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5748u;
    // 0x2d574c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297618u, 0x2D5748u, 0x2D5750u)) {
        return;
    }
    ctx->pc = 0x2D5750u;
label_2d5750:
    // 0x2d5750: 0xc0a5ccc  jal         func_297330
    ctx->pc = 0x2D5750u;
    SET_GPR_U32(ctx, 31, 0x2D5758u);
    ctx->pc = 0x2D5754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5750u;
    // 0x2d5754: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297330u, 0x2D5750u, 0x2D5758u)) {
        return;
    }
    ctx->pc = 0x2D5758u;
label_2d5758:
    // 0x2d5758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d575c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d575cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5760: 0xc0a5dc2  jal         func_297708
    ctx->pc = 0x2D5760u;
    SET_GPR_U32(ctx, 31, 0x2D5768u);
    ctx->pc = 0x2D5764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5760u;
    // 0x2d5764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297708u, 0x2D5760u, 0x2D5768u)) {
        return;
    }
    ctx->pc = 0x2D5768u;
label_2d5768:
    // 0x2d5768: 0xae303034  sw          $s0, 0x3034($s1)
    ctx->pc = 0x2d5768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 16));
    // 0x2d576c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D576Cu;
    {
        const bool branch_taken_0x2d576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D576Cu;
        // 0x2d5770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d576c) {
            ctx->pc = 0x2D5778u;
            goto label_2d5778;
        }
    }
    ctx->pc = 0x2D5774u;
label_2d5774:
    // 0x2d5774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5778:
    // 0x2d5778: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d5778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d577c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d577cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5784: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5784u;
        // 0x2d5788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D578Cu;
    // 0x2d578c: 0x0  nop
    ctx->pc = 0x2d578cu;
    // NOP
    ctx->pc = 0x2d5790u;
}
