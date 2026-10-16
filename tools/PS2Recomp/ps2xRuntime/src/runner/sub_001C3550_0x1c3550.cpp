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

// Function: sub_001C3550
// Address: 0x1c3550 - 0x1c3578
void sub_001C3550_0x1c3550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3550_0x1c3550");
#endif

    switch (ctx->pc) {
        case 0x1c3554u: goto label_1c3554;
        default: break;
    }

    ctx->pc = 0x1c3550u;

    // 0x1c3550: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c3550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c3554:
    // 0x1c3554: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c3554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3558: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c3558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c355c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c355cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3564: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1c3564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c3568: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1c3568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c356c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C356Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C356Cu;
        // 0x1c3570: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C356Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3574u;
    // 0x1c3574: 0x0  nop
    ctx->pc = 0x1c3574u;
    // NOP
    ctx->pc = 0x1c3578u;
}
