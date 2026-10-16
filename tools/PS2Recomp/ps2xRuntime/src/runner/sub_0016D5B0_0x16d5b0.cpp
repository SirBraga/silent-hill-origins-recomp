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

// Function: sub_0016D5B0
// Address: 0x16d5b0 - 0x16d648
void sub_0016D5B0_0x16d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D5B0_0x16d5b0");
#endif

    switch (ctx->pc) {
        case 0x16d5ccu: goto label_16d5cc;
        case 0x16d5fcu: goto label_16d5fc;
        case 0x16d614u: goto label_16d614;
        case 0x16d62cu: goto label_16d62c;
        default: break;
    }

    ctx->pc = 0x16d5b0u;

    // 0x16d5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16d5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16d5b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16d5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16d5b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16d5bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16d5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d5c4: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x16D5C4u;
    SET_GPR_U32(ctx, 31, 0x16D5CCu);
    ctx->pc = 0x16D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5C4u;
    // 0x16d5c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x16D5C4u, 0x16D5CCu)) {
        return;
    }
    ctx->pc = 0x16D5CCu;
label_16d5cc:
    // 0x16d5cc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x16d5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d5d0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x16d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x16d5d4: 0x56020016  bnel        $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16D5D4u;
    {
        const bool branch_taken_0x16d5d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d5d4) {
            ctx->pc = 0x16D5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D5D4u;
            // 0x16d5d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D630u;
            goto label_16d630;
        }
    }
    ctx->pc = 0x16D5DCu;
    // 0x16d5dc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16d5e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5e4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D5E4u;
    {
        const bool branch_taken_0x16d5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5E4u;
        // 0x16d5e8: 0x24454c50  addiu       $a1, $v0, 0x4C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5e4) {
            ctx->pc = 0x16D5F0u;
            goto label_16d5f0;
        }
    }
    ctx->pc = 0x16D5ECu;
    // 0x16d5ec: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x16d5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_16d5f0:
    // 0x16d5f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d5f4: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x16D5F4u;
    SET_GPR_U32(ctx, 31, 0x16D5FCu);
    ctx->pc = 0x16D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5F4u;
    // 0x16d5f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16D5F4u, 0x16D5FCu)) {
        return;
    }
    ctx->pc = 0x16D5FCu;
label_16d5fc:
    // 0x16d5fc: 0x8e270044  lw          $a3, 0x44($s1)
    ctx->pc = 0x16d5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16d600: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x16d600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x16d604: 0x24a54c70  addiu       $a1, $a1, 0x4C70
    ctx->pc = 0x16d604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19568));
    // 0x16d608: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d60c: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x16D60Cu;
    SET_GPR_U32(ctx, 31, 0x16D614u);
    ctx->pc = 0x16D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D60Cu;
    // 0x16d610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16D60Cu, 0x16D614u)) {
        return;
    }
    ctx->pc = 0x16D614u;
label_16d614:
    // 0x16d614: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16d614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x16d618: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x16d618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16d61c: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x16d61cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x16d620: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16d620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d624: 0xc043642  jal         func_10D908
    ctx->pc = 0x16D624u;
    SET_GPR_U32(ctx, 31, 0x16D62Cu);
    ctx->pc = 0x16D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D624u;
    // 0x16d628: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D908u, 0x16D624u, 0x16D62Cu)) {
        return;
    }
    ctx->pc = 0x16D62Cu;
label_16d62c:
    // 0x16d62c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16d62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16d630:
    // 0x16d630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d638: 0x3e00008  jr          $ra
    ctx->pc = 0x16D638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D638u;
        // 0x16d63c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D640u;
    // 0x16d640: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x16d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16d644: 0x0  nop
    ctx->pc = 0x16d644u;
    // NOP
    ctx->pc = 0x16d648u;
}
