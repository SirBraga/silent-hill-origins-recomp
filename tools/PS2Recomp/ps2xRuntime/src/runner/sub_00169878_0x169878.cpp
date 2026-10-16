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

// Function: sub_00169878
// Address: 0x169878 - 0x1698f0
void sub_00169878_0x169878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169878_0x169878");
#endif

    switch (ctx->pc) {
        case 0x1698b4u: goto label_1698b4;
        case 0x1698bcu: goto label_1698bc;
        case 0x1698d8u: goto label_1698d8;
        default: break;
    }

    ctx->pc = 0x169878u;

    // 0x169878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16987c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x169880: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x169880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x169884: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x169884u;
    {
        const bool branch_taken_0x169884 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x169888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169884u;
        // 0x169888: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169884) {
            ctx->pc = 0x1698D8u;
            goto label_1698d8;
        }
    }
    ctx->pc = 0x16988Cu;
    // 0x16988c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x16988Cu;
    {
        const bool branch_taken_0x16988c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16988Cu;
        // 0x169890: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16988c) {
            ctx->pc = 0x1698C8u;
            goto label_1698c8;
        }
    }
    ctx->pc = 0x169894u;
    // 0x169894: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x169894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x169898: 0x261043a8  addiu       $s0, $s0, 0x43A8
    ctx->pc = 0x169898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17320));
    // 0x16989c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16989cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1698a0: 0x24c698f0  addiu       $a2, $a2, -0x6710
    ctx->pc = 0x1698a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940912));
    // 0x1698a4: 0x2484f620  addiu       $a0, $a0, -0x9E0
    ctx->pc = 0x1698a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964768));
    // 0x1698a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1698a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1698ac: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1698ACu;
    SET_GPR_U32(ctx, 31, 0x1698B4u);
    ctx->pc = 0x1698B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1698ACu;
    // 0x1698b0: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1698ACu, 0x1698B4u)) {
        return;
    }
    ctx->pc = 0x1698B4u;
label_1698b4:
    // 0x1698b4: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1698B4u;
    SET_GPR_U32(ctx, 31, 0x1698BCu);
    ctx->pc = 0x1698B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1698B4u;
    // 0x1698b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1698B4u, 0x1698BCu)) {
        return;
    }
    ctx->pc = 0x1698BCu;
label_1698bc:
    // 0x1698bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1698bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1698c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1698C0u;
    {
        const bool branch_taken_0x1698c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1698C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698C0u;
        // 0x1698c4: 0xac62f624  sw          $v0, -0x9DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698c0) {
            ctx->pc = 0x1698D8u;
            goto label_1698d8;
        }
    }
    ctx->pc = 0x1698C8u;
label_1698c8:
    // 0x1698c8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1698c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1698cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1698ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1698d0: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1698D0u;
    SET_GPR_U32(ctx, 31, 0x1698D8u);
    ctx->pc = 0x1698D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1698D0u;
    // 0x1698d4: 0x2484f620  addiu       $a0, $a0, -0x9E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1698D0u, 0x1698D8u)) {
        return;
    }
    ctx->pc = 0x1698D8u;
label_1698d8:
    // 0x1698d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1698d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1698dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1698dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1698e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1698E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1698E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698E0u;
        // 0x1698e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1698E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1698E8u;
    // 0x1698e8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1698e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1698ec: 0x0  nop
    ctx->pc = 0x1698ecu;
    // NOP
    ctx->pc = 0x1698f0u;
}
