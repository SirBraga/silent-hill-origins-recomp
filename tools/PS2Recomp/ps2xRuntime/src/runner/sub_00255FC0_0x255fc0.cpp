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

// Function: sub_00255FC0
// Address: 0x255fc0 - 0x255ff8
void sub_00255FC0_0x255fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255FC0_0x255fc0");
#endif

    switch (ctx->pc) {
        case 0x255fd4u: goto label_255fd4;
        default: break;
    }

    ctx->pc = 0x255fc0u;

    // 0x255fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x255fc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x255fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x255fc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255fcc: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x255FCCu;
    SET_GPR_U32(ctx, 31, 0x255FD4u);
    ctx->pc = 0x255FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255FCCu;
    // 0x255fd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x255FCCu, 0x255FD4u)) {
        return;
    }
    ctx->pc = 0x255FD4u;
label_255fd4:
    // 0x255fd4: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x255fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x255fd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x255fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255fe0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x255fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x255fe4: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x255fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x255fe8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x255fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255fec: 0x3e00008  jr          $ra
    ctx->pc = 0x255FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FECu;
        // 0x255ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255FF4u;
    // 0x255ff4: 0x0  nop
    ctx->pc = 0x255ff4u;
    // NOP
    ctx->pc = 0x255ff8u;
}
