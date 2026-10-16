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

// Function: sub_00317630
// Address: 0x317630 - 0x3176a8
void sub_00317630_0x317630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317630_0x317630");
#endif

    switch (ctx->pc) {
        case 0x317654u: goto label_317654;
        case 0x317660u: goto label_317660;
        case 0x31767cu: goto label_31767c;
        default: break;
    }

    ctx->pc = 0x317630u;

    // 0x317630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x317630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x317634: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x317634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x317638: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x317638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x31763c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31763cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317640: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x317640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x317644: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x317644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x317648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31764c: 0xc0c5dc0  jal         func_317700
    ctx->pc = 0x31764Cu;
    SET_GPR_U32(ctx, 31, 0x317654u);
    ctx->pc = 0x317650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31764Cu;
    // 0x317650: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317700u, 0x31764Cu, 0x317654u)) {
        return;
    }
    ctx->pc = 0x317654u;
label_317654:
    // 0x317654: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x317654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317658: 0xc0c5dc0  jal         func_317700
    ctx->pc = 0x317658u;
    SET_GPR_U32(ctx, 31, 0x317660u);
    ctx->pc = 0x31765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317658u;
    // 0x31765c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317700u, 0x317658u, 0x317660u)) {
        return;
    }
    ctx->pc = 0x317660u;
label_317660:
    // 0x317660: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x317660u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x317664: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x317664u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x317668: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x317668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x31766c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31766cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317674: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x317674u;
    SET_GPR_U32(ctx, 31, 0x31767Cu);
    ctx->pc = 0x317678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317674u;
    // 0x317678: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x317674u, 0x31767Cu)) {
        return;
    }
    ctx->pc = 0x31767Cu;
label_31767c:
    // 0x31767c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x31767cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x317680: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x317680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317684: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x317684u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x317688: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x317688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31768c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31768cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317690: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x317690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317694: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x317694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31769c: 0x3e00008  jr          $ra
    ctx->pc = 0x31769Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3176A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31769Cu;
        // 0x3176a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31769Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3176A4u;
    // 0x3176a4: 0x0  nop
    ctx->pc = 0x3176a4u;
    // NOP
    ctx->pc = 0x3176a8u;
}
