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

// Function: sub_0016F1D0
// Address: 0x16f1d0 - 0x16f240
void sub_0016F1D0_0x16f1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F1D0_0x16f1d0");
#endif

    switch (ctx->pc) {
        case 0x16f1f4u: goto label_16f1f4;
        case 0x16f20cu: goto label_16f20c;
        case 0x16f218u: goto label_16f218;
        case 0x16f228u: goto label_16f228;
        default: break;
    }

    ctx->pc = 0x16f1d0u;

    // 0x16f1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16f1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16f1d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16f1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16f1d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16f1d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16f1dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f1e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16f1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16f1e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16f1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f1ec: 0xc075d62  jal         func_1D7588
    ctx->pc = 0x16F1ECu;
    SET_GPR_U32(ctx, 31, 0x16F1F4u);
    ctx->pc = 0x16F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F1ECu;
    // 0x16f1f0: 0xc62d0058  lwc1        $f13, 0x58($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7588u, 0x16F1ECu, 0x16F1F4u)) {
        return;
    }
    ctx->pc = 0x16F1F4u;
label_16f1f4:
    // 0x16f1f4: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x16f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x16f1f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F1F8u;
    {
        const bool branch_taken_0x16f1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1F8u;
        // 0x16f1fc: 0x26300038  addiu       $s0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1f8) {
            ctx->pc = 0x16F218u;
            goto label_16f218;
        }
    }
    ctx->pc = 0x16F200u;
    // 0x16f200: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x16f200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16f204: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16F204u;
    SET_GPR_U32(ctx, 31, 0x16F20Cu);
    ctx->pc = 0x16F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F204u;
    // 0x16f208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16F204u, 0x16F20Cu)) {
        return;
    }
    ctx->pc = 0x16F20Cu;
label_16f20c:
    // 0x16f20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f210: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16F210u;
    SET_GPR_U32(ctx, 31, 0x16F218u);
    ctx->pc = 0x16F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F210u;
    // 0x16f214: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16F210u, 0x16F218u)) {
        return;
    }
    ctx->pc = 0x16F218u;
label_16f218:
    // 0x16f218: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16f218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16f21c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16f220: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16F220u;
    SET_GPR_U32(ctx, 31, 0x16F228u);
    ctx->pc = 0x16F224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F220u;
    // 0x16f224: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16F220u, 0x16F228u)) {
        return;
    }
    ctx->pc = 0x16F228u;
label_16f228:
    // 0x16f228: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16f228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f22c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f234: 0x3e00008  jr          $ra
    ctx->pc = 0x16F234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F234u;
        // 0x16f238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F23Cu;
    // 0x16f23c: 0x0  nop
    ctx->pc = 0x16f23cu;
    // NOP
    ctx->pc = 0x16f240u;
}
