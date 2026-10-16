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

// Function: sub_002DDDA0
// Address: 0x2ddda0 - 0x2dddf8
void sub_002DDDA0_0x2ddda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDDA0_0x2ddda0");
#endif

    switch (ctx->pc) {
        case 0x2dddd4u: goto label_2dddd4;
        default: break;
    }

    ctx->pc = 0x2ddda0u;

    // 0x2ddda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ddda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ddda4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ddda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ddda8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dddac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dddacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dddb0: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x2dddb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2dddb4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2dddb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2dddb8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DDDB8u;
    {
        const bool branch_taken_0x2dddb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dddb8) {
            ctx->pc = 0x2DDDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDDB8u;
            // 0x2dddbc: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDDD8u;
            goto label_2dddd8;
        }
    }
    ctx->pc = 0x2DDDC0u;
    // 0x2dddc0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2dddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dddc4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDDC4u;
    {
        const bool branch_taken_0x2dddc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dddc4) {
            ctx->pc = 0x2DDDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDDC4u;
            // 0x2dddc8: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDDD8u;
            goto label_2dddd8;
        }
    }
    ctx->pc = 0x2DDDCCu;
    // 0x2dddcc: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2DDDCCu;
    SET_GPR_U32(ctx, 31, 0x2DDDD4u);
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DDDCCu, 0x2DDDD4u)) {
        return;
    }
    ctx->pc = 0x2DDDD4u;
label_2dddd4:
    // 0x2dddd4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2dddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2dddd8:
    // 0x2dddd8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2dddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2ddddc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ddddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddde0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddde4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDE4u;
        // 0x2ddde8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDDECu;
    // 0x2dddec: 0x0  nop
    ctx->pc = 0x2dddecu;
    // NOP
    // 0x2dddf0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2dddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dddf4: 0x0  nop
    ctx->pc = 0x2dddf4u;
    // NOP
    ctx->pc = 0x2dddf8u;
}
