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

// Function: sub_0025F1C0
// Address: 0x25f1c0 - 0x25f280
void sub_0025F1C0_0x25f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F1C0_0x25f1c0");
#endif

    switch (ctx->pc) {
        case 0x25f1d8u: goto label_25f1d8;
        case 0x25f1e4u: goto label_25f1e4;
        case 0x25f1f0u: goto label_25f1f0;
        case 0x25f1fcu: goto label_25f1fc;
        case 0x25f208u: goto label_25f208;
        case 0x25f210u: goto label_25f210;
        case 0x25f24cu: goto label_25f24c;
        default: break;
    }

    ctx->pc = 0x25f1c0u;

    // 0x25f1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25f1c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25f1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25f1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25f1cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f1d0: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x25F1D0u;
    SET_GPR_U32(ctx, 31, 0x25F1D8u);
    ctx->pc = 0x25F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F1D0u;
    // 0x25f1d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2485B8u, 0x25F1D0u, 0x25F1D8u)) {
        return;
    }
    ctx->pc = 0x25F1D8u;
label_25f1d8:
    // 0x25f1d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25f1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1dc: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x25F1DCu;
    SET_GPR_U32(ctx, 31, 0x25F1E4u);
    ctx->pc = 0x25F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F1DCu;
    // 0x25f1e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2485B8u, 0x25F1DCu, 0x25F1E4u)) {
        return;
    }
    ctx->pc = 0x25F1E4u;
label_25f1e4:
    // 0x25f1e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25f1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1e8: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x25F1E8u;
    SET_GPR_U32(ctx, 31, 0x25F1F0u);
    ctx->pc = 0x25F1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F1E8u;
    // 0x25f1ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2485B8u, 0x25F1E8u, 0x25F1F0u)) {
        return;
    }
    ctx->pc = 0x25F1F0u;
label_25f1f0:
    // 0x25f1f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25f1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1f4: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x25F1F4u;
    SET_GPR_U32(ctx, 31, 0x25F1FCu);
    ctx->pc = 0x25F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F1F4u;
    // 0x25f1f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2485B8u, 0x25F1F4u, 0x25F1FCu)) {
        return;
    }
    ctx->pc = 0x25F1FCu;
label_25f1fc:
    // 0x25f1fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25f1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25f200: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x25F200u;
    SET_GPR_U32(ctx, 31, 0x25F208u);
    ctx->pc = 0x25F204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F200u;
    // 0x25f204: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2485B8u, 0x25F200u, 0x25F208u)) {
        return;
    }
    ctx->pc = 0x25F208u;
label_25f208:
    // 0x25f208: 0xc092156  jal         func_248558
    ctx->pc = 0x25F208u;
    SET_GPR_U32(ctx, 31, 0x25F210u);
    ctx->pc = 0x25F20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F208u;
    // 0x25f20c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248558u, 0x25F208u, 0x25F210u)) {
        return;
    }
    ctx->pc = 0x25F210u;
label_25f210:
    // 0x25f210: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25f210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25f214: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x25f214u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x25f218: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x25f218u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x25f21c: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x25f21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
    // 0x25f220: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25f220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25f224: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x25f224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x25f228: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x25f228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x25f22c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x25f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x25f230: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x25f230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x25f234: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x25f234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x25f238: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x25f238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x25f23c: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x25f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x25f240: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x25f240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x25f244: 0xc092466  jal         func_249198
    ctx->pc = 0x25F244u;
    SET_GPR_U32(ctx, 31, 0x25F24Cu);
    ctx->pc = 0x25F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F244u;
    // 0x25f248: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249198u, 0x25F244u, 0x25F24Cu)) {
        return;
    }
    ctx->pc = 0x25F24Cu;
label_25f24c:
    // 0x25f24c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x25f250: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x25f250u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x25f254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f258: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25f258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25f25c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25f25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f260: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x25f260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x25f264: 0x3e00008  jr          $ra
    ctx->pc = 0x25F264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F264u;
        // 0x25f268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F26Cu;
    // 0x25f26c: 0x0  nop
    ctx->pc = 0x25f26cu;
    // NOP
    // 0x25f270: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x25f270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x25f274: 0x0  nop
    ctx->pc = 0x25f274u;
    // NOP
    // 0x25f278: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x25f278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x25f27c: 0x0  nop
    ctx->pc = 0x25f27cu;
    // NOP
    ctx->pc = 0x25f280u;
}
