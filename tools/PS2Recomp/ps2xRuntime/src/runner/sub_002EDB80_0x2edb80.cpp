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

// Function: sub_002EDB80
// Address: 0x2edb80 - 0x2edbc8
void sub_002EDB80_0x2edb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDB80_0x2edb80");
#endif

    switch (ctx->pc) {
        case 0x2edb94u: goto label_2edb94;
        case 0x2edbb0u: goto label_2edbb0;
        default: break;
    }

    ctx->pc = 0x2edb80u;

    // 0x2edb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2edb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2edb84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2edb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2edb88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edb8c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2EDB8Cu;
    SET_GPR_U32(ctx, 31, 0x2EDB94u);
    ctx->pc = 0x2EDB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB8Cu;
    // 0x2edb90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2EDB8Cu, 0x2EDB94u)) {
        return;
    }
    ctx->pc = 0x2EDB94u;
label_2edb94:
    // 0x2edb94: 0x93838cb8  lbu         $v1, -0x7348($gp)
    ctx->pc = 0x2edb94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937784)));
    // 0x2edb98: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x2edb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x2edb9c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2edb9cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2edba0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2edba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2edba4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2edba4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2edba8: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2EDBA8u;
    SET_GPR_U32(ctx, 31, 0x2EDBB0u);
    ctx->pc = 0x2EDBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBA8u;
    // 0x2edbac: 0xa3838cb8  sb          $v1, -0x7348($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937784), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2EDBA8u, 0x2EDBB0u)) {
        return;
    }
    ctx->pc = 0x2EDBB0u;
label_2edbb0:
    // 0x2edbb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2edbb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edbb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2edbb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2edbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBBCu;
        // 0x2edbc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDBC4u;
    // 0x2edbc4: 0x0  nop
    ctx->pc = 0x2edbc4u;
    // NOP
    ctx->pc = 0x2edbc8u;
}
