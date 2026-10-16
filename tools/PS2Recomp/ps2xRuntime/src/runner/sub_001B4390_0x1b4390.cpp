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

// Function: sub_001B4390
// Address: 0x1b4390 - 0x1b4438
void sub_001B4390_0x1b4390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4390_0x1b4390");
#endif

    switch (ctx->pc) {
        case 0x1b43b4u: goto label_1b43b4;
        case 0x1b43c8u: goto label_1b43c8;
        case 0x1b43e0u: goto label_1b43e0;
        case 0x1b43f4u: goto label_1b43f4;
        case 0x1b4400u: goto label_1b4400;
        case 0x1b4408u: goto label_1b4408;
        case 0x1b4414u: goto label_1b4414;
        case 0x1b441cu: goto label_1b441c;
        default: break;
    }

    ctx->pc = 0x1b4390u;

    // 0x1b4390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b4390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b4394: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b4394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4398: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b4398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b439c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b439cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b43a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b43a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b43a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b43a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b43a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b43ac: 0xc081444  jal         func_205110
    ctx->pc = 0x1B43ACu;
    SET_GPR_U32(ctx, 31, 0x1B43B4u);
    ctx->pc = 0x1B43B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43ACu;
    // 0x1b43b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205110u, 0x1B43ACu, 0x1B43B4u)) {
        return;
    }
    ctx->pc = 0x1B43B4u;
label_1b43b4:
    // 0x1b43b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b43b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43b8: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B43B8u;
    {
        const bool branch_taken_0x1b43b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43B8u;
        // 0x1b43bc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43b8) {
            ctx->pc = 0x1B4420u;
            goto label_1b4420;
        }
    }
    ctx->pc = 0x1B43C0u;
    // 0x1b43c0: 0xc081a96  jal         func_206A58
    ctx->pc = 0x1B43C0u;
    SET_GPR_U32(ctx, 31, 0x1B43C8u);
    ctx->pc = 0x1B43C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43C0u;
    // 0x1b43c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206A58u, 0x1B43C0u, 0x1B43C8u)) {
        return;
    }
    ctx->pc = 0x1B43C8u;
label_1b43c8:
    // 0x1b43c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b43c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43cc: 0x24070504  addiu       $a3, $zero, 0x504
    ctx->pc = 0x1b43ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x1b43d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b43d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b43d4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b43d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b43d8: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x1B43D8u;
    SET_GPR_U32(ctx, 31, 0x1B43E0u);
    ctx->pc = 0x1B43DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43D8u;
    // 0x1b43dc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x1B43D8u, 0x1B43E0u)) {
        return;
    }
    ctx->pc = 0x1B43E0u;
label_1b43e0:
    // 0x1b43e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b43e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b43e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b43e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b43e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43ec: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1B43ECu;
    SET_GPR_U32(ctx, 31, 0x1B43F4u);
    ctx->pc = 0x1B43F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43ECu;
    // 0x1b43f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x1B43ECu, 0x1B43F4u)) {
        return;
    }
    ctx->pc = 0x1B43F4u;
label_1b43f4:
    // 0x1b43f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b43f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43f8: 0xc08a066  jal         func_228198
    ctx->pc = 0x1B43F8u;
    SET_GPR_U32(ctx, 31, 0x1B4400u);
    ctx->pc = 0x1B43FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43F8u;
    // 0x1b43fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228198u, 0x1B43F8u, 0x1B4400u)) {
        return;
    }
    ctx->pc = 0x1B4400u;
label_1b4400:
    // 0x1b4400: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x1B4400u;
    SET_GPR_U32(ctx, 31, 0x1B4408u);
    ctx->pc = 0x1B4404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4400u;
    // 0x1b4404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x1B4400u, 0x1B4408u)) {
        return;
    }
    ctx->pc = 0x1B4408u;
label_1b4408:
    // 0x1b4408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b440c: 0xc09366a  jal         func_24D9A8
    ctx->pc = 0x1B440Cu;
    SET_GPR_U32(ctx, 31, 0x1B4414u);
    ctx->pc = 0x1B4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B440Cu;
    // 0x1b4410: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D9A8u, 0x1B440Cu, 0x1B4414u)) {
        return;
    }
    ctx->pc = 0x1B4414u;
label_1b4414:
    // 0x1b4414: 0xc089b96  jal         func_226E58
    ctx->pc = 0x1B4414u;
    SET_GPR_U32(ctx, 31, 0x1B441Cu);
    ctx->pc = 0x1B4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4414u;
    // 0x1b4418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x1B4414u, 0x1B441Cu)) {
        return;
    }
    ctx->pc = 0x1B441Cu;
label_1b441c:
    // 0x1b441c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b441cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b4420:
    // 0x1b4420: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b4420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4424: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b4424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4428: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b4428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b442c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b442cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4430: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4430u;
        // 0x1b4434: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4438u;
}
