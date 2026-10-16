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

// Function: sub_00178BA0
// Address: 0x178ba0 - 0x178c30
void sub_00178BA0_0x178ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178BA0_0x178ba0");
#endif

    switch (ctx->pc) {
        case 0x178be4u: goto label_178be4;
        case 0x178c08u: goto label_178c08;
        default: break;
    }

    ctx->pc = 0x178ba0u;

    // 0x178ba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x178ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x178ba4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x178ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x178ba8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x178ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x178bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x178bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x178bb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x178bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bb8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x178bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x178bbc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x178bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bc0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x178bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x178bc4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x178bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178bcc: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x178bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x178bd0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x178BD0u;
    {
        const bool branch_taken_0x178bd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BD0u;
        // 0x178bd4: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178bd0) {
            ctx->pc = 0x178BE8u;
            goto label_178be8;
        }
    }
    ctx->pc = 0x178BD8u;
    // 0x178bd8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x178bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x178bdc: 0xc0665c4  jal         func_199710
    ctx->pc = 0x178BDCu;
    SET_GPR_U32(ctx, 31, 0x178BE4u);
    ctx->pc = 0x178BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BDCu;
    // 0x178be0: 0x8c448bc4  lw          $a0, -0x743C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199710u, 0x178BDCu, 0x178BE4u)) {
        return;
    }
    ctx->pc = 0x178BE4u;
label_178be4:
    // 0x178be4: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x178be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_178be8:
    // 0x178be8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x178BE8u;
    {
        const bool branch_taken_0x178be8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BE8u;
        // 0x178bec: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178be8) {
            ctx->pc = 0x178C0Cu;
            goto label_178c0c;
        }
    }
    ctx->pc = 0x178BF0u;
    // 0x178bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bf4: 0x8c448bc4  lw          $a0, -0x743C($v0)
    ctx->pc = 0x178bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937540)));
    // 0x178bf8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x178bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bfc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x178bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c00: 0xc0665a4  jal         func_199690
    ctx->pc = 0x178C00u;
    SET_GPR_U32(ctx, 31, 0x178C08u);
    ctx->pc = 0x178C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C00u;
    // 0x178c04: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199690u, 0x178C00u, 0x178C08u)) {
        return;
    }
    ctx->pc = 0x178C08u;
label_178c08:
    // 0x178c08: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x178c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_178c0c:
    // 0x178c0c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x178c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178c10: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x178c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178c14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x178c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178c18: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x178c18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178c1c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x178c1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178c24: 0x3e00008  jr          $ra
    ctx->pc = 0x178C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C24u;
        // 0x178c28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178C2Cu;
    // 0x178c2c: 0x0  nop
    ctx->pc = 0x178c2cu;
    // NOP
    ctx->pc = 0x178c30u;
}
