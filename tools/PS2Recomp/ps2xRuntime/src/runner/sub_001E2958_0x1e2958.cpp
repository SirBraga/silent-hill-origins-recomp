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

// Function: sub_001E2958
// Address: 0x1e2958 - 0x1e2a40
void sub_001E2958_0x1e2958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2958_0x1e2958");
#endif

    switch (ctx->pc) {
        case 0x1e2990u: goto label_1e2990;
        case 0x1e29a0u: goto label_1e29a0;
        case 0x1e29bcu: goto label_1e29bc;
        default: break;
    }

    ctx->pc = 0x1e2958u;

    // 0x1e2958: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e2958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e295c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1e295cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e2960: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e2960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e2964: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e2964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e2968: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e296c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e296cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1e2970: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e2970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2974: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1e2974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1e2978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e297c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e2980: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x1e2980u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e2984: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e2984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2988: 0xc093546  jal         func_24D518
    ctx->pc = 0x1E2988u;
    SET_GPR_U32(ctx, 31, 0x1E2990u);
    ctx->pc = 0x1E298Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2988u;
    // 0x1e298c: 0x26340010  addiu       $s4, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1E2988u, 0x1E2990u)) {
        return;
    }
    ctx->pc = 0x1E2990u;
label_1e2990:
    // 0x1e2990: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1e2990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e2994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2998: 0xc093546  jal         func_24D518
    ctx->pc = 0x1E2998u;
    SET_GPR_U32(ctx, 31, 0x1E29A0u);
    ctx->pc = 0x1E299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2998u;
    // 0x1e299c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1E2998u, 0x1E29A0u)) {
        return;
    }
    ctx->pc = 0x1E29A0u;
label_1e29a0:
    // 0x1e29a0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e29a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e29a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e29a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29a8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1e29a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e29ac: 0x2839821  addu        $s3, $s4, $v1
    ctx->pc = 0x1e29acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e29b0: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x1e29b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e29b4: 0xc093546  jal         func_24D518
    ctx->pc = 0x1E29B4u;
    SET_GPR_U32(ctx, 31, 0x1E29BCu);
    ctx->pc = 0x1E29B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E29B4u;
    // 0x1e29b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1E29B4u, 0x1E29BCu)) {
        return;
    }
    ctx->pc = 0x1E29BCu;
label_1e29bc:
    // 0x1e29bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e29bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e29c0: 0x24051101  addiu       $a1, $zero, 0x1101
    ctx->pc = 0x1e29c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x1e29c4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e29c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e29c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e29cc: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E29CCu;
    {
        const bool branch_taken_0x1e29cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1E29D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29CCu;
        // 0x1e29d0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29cc) {
            ctx->pc = 0x1E29ECu;
            goto label_1e29ec;
        }
    }
    ctx->pc = 0x1E29D4u;
    // 0x1e29d4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1e29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1e29d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e29d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e29dc: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x1e29dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x1e29e0: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x1e29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x1e29e4: 0xac53000c  sw          $s3, 0xC($v0)
    ctx->pc = 0x1e29e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 19));
    // 0x1e29e8: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x1e29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_1e29ec:
    // 0x1e29ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e29f0: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x1e29f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
    // 0x1e29f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e29f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e29f8: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E29F8u;
    {
        const bool branch_taken_0x1e29f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1E29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29F8u;
        // 0x1e29fc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29f8) {
            ctx->pc = 0x1E2A1Cu;
            goto label_1e2a1c;
        }
    }
    ctx->pc = 0x1E2A00u;
    // 0x1e2a00: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1e2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1e2a04: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x1e2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x1e2a08: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x1e2a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x1e2a0c: 0xac53000c  sw          $s3, 0xC($v0)
    ctx->pc = 0x1e2a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 19));
    // 0x1e2a10: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x1e2a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x1e2a14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e2a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e2a18: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e2a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e2a1c:
    // 0x1e2a1c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e2a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2a20: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e2a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2a24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e2a24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2a28: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e2a28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2a2c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1e2a2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A34u;
        // 0x1e2a38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2A3Cu;
    // 0x1e2a3c: 0x0  nop
    ctx->pc = 0x1e2a3cu;
    // NOP
    ctx->pc = 0x1e2a40u;
}
