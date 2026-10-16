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

// Function: sub_003271C0
// Address: 0x3271c0 - 0x327228
void sub_003271C0_0x3271c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003271C0_0x3271c0");
#endif

    switch (ctx->pc) {
        case 0x3271d4u: goto label_3271d4;
        case 0x3271f8u: goto label_3271f8;
        case 0x327200u: goto label_327200;
        case 0x327208u: goto label_327208;
        default: break;
    }

    ctx->pc = 0x3271c0u;

    // 0x3271c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3271c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3271c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3271c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3271c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3271c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3271cc: 0xc0c84f4  jal         func_3213D0
    ctx->pc = 0x3271CCu;
    SET_GPR_U32(ctx, 31, 0x3271D4u);
    ctx->pc = 0x3271D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271CCu;
    // 0x3271d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3213D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3213D0u, 0x3271CCu, 0x3271D4u)) {
        return;
    }
    ctx->pc = 0x3271D4u;
label_3271d4:
    // 0x3271d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3271d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3271d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3271d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3271dc: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x3271dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x3271e0: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x3271e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3271e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3271e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3271e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3271e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271ec: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3271ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3271f0: 0xc0c84f0  jal         func_3213C0
    ctx->pc = 0x3271F0u;
    SET_GPR_U32(ctx, 31, 0x3271F8u);
    ctx->pc = 0x3271F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271F0u;
    // 0x3271f4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3213C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3213C0u, 0x3271F0u, 0x3271F8u)) {
        return;
    }
    ctx->pc = 0x3271F8u;
label_3271f8:
    // 0x3271f8: 0xc0c84f4  jal         func_3213D0
    ctx->pc = 0x3271F8u;
    SET_GPR_U32(ctx, 31, 0x327200u);
    ctx->pc = 0x3271FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271F8u;
    // 0x3271fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3213D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3213D0u, 0x3271F8u, 0x327200u)) {
        return;
    }
    ctx->pc = 0x327200u;
label_327200:
    // 0x327200: 0xc0c84f0  jal         func_3213C0
    ctx->pc = 0x327200u;
    SET_GPR_U32(ctx, 31, 0x327208u);
    ctx->pc = 0x327204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327200u;
    // 0x327204: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3213C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3213C0u, 0x327200u, 0x327208u)) {
        return;
    }
    ctx->pc = 0x327208u;
label_327208:
    // 0x327208: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x327208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x32720c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32720cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327210: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x327210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x327214: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x327214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327218: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x327218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x32721c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x32721cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x327220: 0x3e00008  jr          $ra
    ctx->pc = 0x327220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327220u;
        // 0x327224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327228u;
}
