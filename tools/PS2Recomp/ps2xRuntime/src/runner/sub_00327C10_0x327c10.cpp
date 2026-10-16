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

// Function: sub_00327C10
// Address: 0x327c10 - 0x327c60
void sub_00327C10_0x327c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327C10_0x327c10");
#endif

    ctx->pc = 0x327c10u;

    // 0x327c10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x327c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x327c14: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x327c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x327c18: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x327c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x327c1c: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x327c1cu;
    SET_GPR_ZE32(ctx, 2, runtime->Load32(rdram, ctx, 0x10001000u));
    // 0x327c20: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x327c20u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x327c24: 0xdc8a8590  ld          $t2, -0x7A70($a0)
    ctx->pc = 0x327c24u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x688590u));
    // 0x327c28: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x327c28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x327c2c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x327C2Cu;
    {
        const bool branch_taken_0x327c2c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x327C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C2Cu;
        // 0x327c30: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c2c) {
            ctx->pc = 0x327C3Cu;
            goto label_327c3c;
        }
    }
    ctx->pc = 0x327C34u;
    // 0x327c34: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x327c34u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327c38: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x327c38u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_327c3c:
    // 0x327c3c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x327c3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x327c40: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x327c40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x327c44: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x327c44u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0));
    // 0x327c48: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x327c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x327c4c: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x327c4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x327c50: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x327c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x327c54: 0x3e00008  jr          $ra
    ctx->pc = 0x327C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327C5Cu;
    // 0x327c5c: 0x0  nop
    ctx->pc = 0x327c5cu;
    // NOP
    ctx->pc = 0x327c60u;
}
