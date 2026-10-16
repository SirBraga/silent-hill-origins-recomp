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

// Function: sub_00137A20
// Address: 0x137a20 - 0x137a60
void sub_00137A20_0x137a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137A20_0x137a20");
#endif

    switch (ctx->pc) {
        case 0x137a30u: goto label_137a30;
        default: break;
    }

    ctx->pc = 0x137a20u;

    // 0x137a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137a28: 0xc049bee  jal         func_126FB8
    ctx->pc = 0x137A28u;
    SET_GPR_U32(ctx, 31, 0x137A30u);
    ctx->pc = 0x126FB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126FB8u, 0x137A28u, 0x137A30u)) {
        return;
    }
    ctx->pc = 0x137A30u;
label_137a30:
    // 0x137a30: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x137a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x137a34: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x137a34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x137a38: 0x8c438b2c  lw          $v1, -0x74D4($v0)
    ctx->pc = 0x137a38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338B2Cu));
    // 0x137a3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x137a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x137a40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137a44: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x137a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x137a48: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x137A48u;
    {
        const bool branch_taken_0x137a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137a48) {
            ctx->pc = 0x137A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137A48u;
            // 0x137a4c: 0xc440005c  lwc1        $f0, 0x5C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x137A50u;
            goto label_137a50;
        }
    }
    ctx->pc = 0x137A50u;
label_137a50:
    // 0x137a50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x137a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x137a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137a58: 0x3e00008  jr          $ra
    ctx->pc = 0x137A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A58u;
        // 0x137a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137A60u;
}
