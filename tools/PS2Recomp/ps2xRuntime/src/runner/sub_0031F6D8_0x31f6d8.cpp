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

// Function: sub_0031F6D8
// Address: 0x31f6d8 - 0x31f738
void sub_0031F6D8_0x31f6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F6D8_0x31f6d8");
#endif

    switch (ctx->pc) {
        case 0x31f6fcu: goto label_31f6fc;
        default: break;
    }

    ctx->pc = 0x31f6d8u;

    // 0x31f6d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31f6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31f6dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31f6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31f6e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31f6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31f6e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31f6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f6e8: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x31f6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x31f6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f6f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x31f6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f6f4: 0xc0c8686  jal         func_321A18
    ctx->pc = 0x31F6F4u;
    SET_GPR_U32(ctx, 31, 0x31F6FCu);
    ctx->pc = 0x31F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F6F4u;
    // 0x31f6f8: 0xae2092b8  sw          $zero, -0x6D48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939320), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321A18u, 0x31F6F4u, 0x31F6FCu)) {
        return;
    }
    ctx->pc = 0x31F6FCu;
label_31f6fc:
    // 0x31f6fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31f6fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f700: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31f700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31f704: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f708: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F708u;
    {
        const bool branch_taken_0x31f708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31f708) {
            ctx->pc = 0x31F70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F708u;
            // 0x31f70c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F720u;
            goto label_31f720;
        }
    }
    ctx->pc = 0x31F710u;
    // 0x31f710: 0x8e2292b8  lw          $v0, -0x6D48($s1)
    ctx->pc = 0x31f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939320)));
    // 0x31f714: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31F714u;
    {
        const bool branch_taken_0x31f714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f714) {
            ctx->pc = 0x31F718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F714u;
            // 0x31f718: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F71Cu;
            goto label_31f71c;
        }
    }
    ctx->pc = 0x31F71Cu;
label_31f71c:
    // 0x31f71c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31f71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31f720:
    // 0x31f720: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x31f720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31f724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f72c: 0x3e00008  jr          $ra
    ctx->pc = 0x31F72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F72Cu;
        // 0x31f730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F734u;
    // 0x31f734: 0x0  nop
    ctx->pc = 0x31f734u;
    // NOP
    ctx->pc = 0x31f738u;
}
