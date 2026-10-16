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

// Function: sub_00114B60
// Address: 0x114b60 - 0x114bf0
void sub_00114B60_0x114b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114B60_0x114b60");
#endif

    switch (ctx->pc) {
        case 0x114ba4u: goto label_114ba4;
        case 0x114bb0u: goto label_114bb0;
        case 0x114bbcu: goto label_114bbc;
        case 0x114bc8u: goto label_114bc8;
        case 0x114bd4u: goto label_114bd4;
        default: break;
    }

    ctx->pc = 0x114b60u;

    // 0x114b60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114b64: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x114b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x114b68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x114b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x114b6c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x114b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x114b70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x114b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x114b74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x114b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b78: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x114b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x114b7c: 0x2442ab88  addiu       $v0, $v0, -0x5478
    ctx->pc = 0x114b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945672));
    // 0x114b80: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x114b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x114b84: 0x2463aba8  addiu       $v1, $v1, -0x5458
    ctx->pc = 0x114b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945704));
    // 0x114b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114b8c: 0x263200d0  addiu       $s2, $s1, 0xD0
    ctx->pc = 0x114b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x114b90: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x114b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x114b94: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x114b94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b98: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x114b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x114b9c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x114B9Cu;
    SET_GPR_U32(ctx, 31, 0x114BA4u);
    ctx->pc = 0x114BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B9Cu;
    // 0x114ba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x114B9Cu, 0x114BA4u)) {
        return;
    }
    ctx->pc = 0x114BA4u;
label_114ba4:
    // 0x114ba4: 0x263000d8  addiu       $s0, $s1, 0xD8
    ctx->pc = 0x114ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    // 0x114ba8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x114BA8u;
    SET_GPR_U32(ctx, 31, 0x114BB0u);
    ctx->pc = 0x114BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114BA8u;
    // 0x114bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x114BA8u, 0x114BB0u)) {
        return;
    }
    ctx->pc = 0x114BB0u;
label_114bb0:
    // 0x114bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114bb4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x114BB4u;
    SET_GPR_U32(ctx, 31, 0x114BBCu);
    ctx->pc = 0x114BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114BB4u;
    // 0x114bb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x114BB4u, 0x114BBCu)) {
        return;
    }
    ctx->pc = 0x114BBCu;
label_114bbc:
    // 0x114bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114bc0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x114BC0u;
    SET_GPR_U32(ctx, 31, 0x114BC8u);
    ctx->pc = 0x114BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114BC0u;
    // 0x114bc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x114BC0u, 0x114BC8u)) {
        return;
    }
    ctx->pc = 0x114BC8u;
label_114bc8:
    // 0x114bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114bcc: 0xc04465e  jal         func_111978
    ctx->pc = 0x114BCCu;
    SET_GPR_U32(ctx, 31, 0x114BD4u);
    ctx->pc = 0x114BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114BCCu;
    // 0x114bd0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111978u, 0x114BCCu, 0x114BD4u)) {
        return;
    }
    ctx->pc = 0x114BD4u;
label_114bd4:
    // 0x114bd4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x114bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114bd8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x114bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114bdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x114bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114be0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x114be0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114be8: 0x3e00008  jr          $ra
    ctx->pc = 0x114BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BE8u;
        // 0x114bec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114BF0u;
}
