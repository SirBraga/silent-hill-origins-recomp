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

// Function: sub_001055F0
// Address: 0x1055f0 - 0x105650
void sub_001055F0_0x1055f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001055F0_0x1055f0");
#endif

    switch (ctx->pc) {
        case 0x105628u: goto label_105628;
        default: break;
    }

    ctx->pc = 0x1055f0u;

    // 0x1055f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1055f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1055f4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1055f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1055f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1055fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1055fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105608: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x105608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10560c: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x10560cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x105610: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x105610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x105614: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x105614u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x105618: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x105618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10561c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x10561cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x105620: 0xc080924  jal         func_202490
    ctx->pc = 0x105620u;
    SET_GPR_U32(ctx, 31, 0x105628u);
    ctx->pc = 0x105624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105620u;
    // 0x105624: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x105620u, 0x105628u)) {
        return;
    }
    ctx->pc = 0x105628u;
label_105628:
    // 0x105628: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10562c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10562cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105630: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x105630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x105634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105638: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x105638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10563c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x10563cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x105640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x105640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105644: 0x3e00008  jr          $ra
    ctx->pc = 0x105644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105644u;
        // 0x105648: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10564Cu;
    // 0x10564c: 0x0  nop
    ctx->pc = 0x10564cu;
    // NOP
    ctx->pc = 0x105650u;
}
