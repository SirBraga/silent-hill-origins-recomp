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

// Function: sub_00252FC0
// Address: 0x252fc0 - 0x253048
void sub_00252FC0_0x252fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252FC0_0x252fc0");
#endif

    switch (ctx->pc) {
        case 0x253000u: goto label_253000;
        case 0x253010u: goto label_253010;
        case 0x253024u: goto label_253024;
        default: break;
    }

    ctx->pc = 0x252fc0u;

    // 0x252fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x252fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x252fc4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x252fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x252fc8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x252fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x252fcc: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x252fccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
    // 0x252fd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x252fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x252fd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fd8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x252fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x252fdc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x252fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252fe4: 0x26935618  addiu       $s3, $s4, 0x5618
    ctx->pc = 0x252fe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 22040));
    // 0x252fe8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x252fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x252fec: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x252fecu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x73561Cu));
    // 0x252ff0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x252ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252ff4: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x252ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x252ff8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x252FF8u;
    SET_GPR_U32(ctx, 31, 0x253000u);
    ctx->pc = 0x252FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252FF8u;
    // 0x252ffc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x252FF8u, 0x253000u)) {
        return;
    }
    ctx->pc = 0x253000u;
label_253000:
    // 0x253000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253004: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x253004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x253008: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x253008u;
    SET_GPR_U32(ctx, 31, 0x253010u);
    ctx->pc = 0x25300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253008u;
    // 0x25300c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x253008u, 0x253010u)) {
        return;
    }
    ctx->pc = 0x253010u;
label_253010:
    // 0x253010: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x253010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x253014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253018: 0xae925618  sw          $s2, 0x5618($s4)
    ctx->pc = 0x253018u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 22040), GPR_U32(ctx, 18));
    // 0x25301c: 0xc094a46  jal         func_252918
    ctx->pc = 0x25301Cu;
    SET_GPR_U32(ctx, 31, 0x253024u);
    ctx->pc = 0x253020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25301Cu;
    // 0x253020: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252918u, 0x25301Cu, 0x253024u)) {
        return;
    }
    ctx->pc = 0x253024u;
label_253024:
    // 0x253024: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x253024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253028: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x253028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25302c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25302cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253030: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x253030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253034: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x253034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253038: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x253038u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25303c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25303cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253040: 0x3e00008  jr          $ra
    ctx->pc = 0x253040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253040u;
        // 0x253044: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253048u;
}
