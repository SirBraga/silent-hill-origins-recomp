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

// Function: sub_00162B90
// Address: 0x162b90 - 0x162c68
void sub_00162B90_0x162b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162B90_0x162b90");
#endif

    switch (ctx->pc) {
        case 0x162be4u: goto label_162be4;
        case 0x162bf4u: goto label_162bf4;
        case 0x162bfcu: goto label_162bfc;
        case 0x162c08u: goto label_162c08;
        case 0x162c10u: goto label_162c10;
        case 0x162c2cu: goto label_162c2c;
        case 0x162c38u: goto label_162c38;
        case 0x162c44u: goto label_162c44;
        default: break;
    }

    ctx->pc = 0x162b90u;

    // 0x162b90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x162b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x162b94: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x162b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x162b98: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x162b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x162b9c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x162b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x162ba0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x162ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x162ba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ba8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x162ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x162bac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x162bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162bb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x162bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x162bb4: 0x24633ba8  addiu       $v1, $v1, 0x3BA8
    ctx->pc = 0x162bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15272));
    // 0x162bb8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x162bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x162bbc: 0x24423bc8  addiu       $v0, $v0, 0x3BC8
    ctx->pc = 0x162bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15304));
    // 0x162bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162bc4: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x162bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x162bc8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x162bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x162bcc: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x162bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x162bd0: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x162bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x162bd4: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x162bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x162bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162bdc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x162BDCu;
    SET_GPR_U32(ctx, 31, 0x162BE4u);
    ctx->pc = 0x162BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BDCu;
    // 0x162be0: 0x26331d2c  addiu       $s3, $s1, 0x1D2C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 7468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x162BDCu, 0x162BE4u)) {
        return;
    }
    ctx->pc = 0x162BE4u;
label_162be4:
    // 0x162be4: 0x26321d34  addiu       $s2, $s1, 0x1D34
    ctx->pc = 0x162be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 7476));
    // 0x162be8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x162be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162bec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x162BECu;
    SET_GPR_U32(ctx, 31, 0x162BF4u);
    ctx->pc = 0x162BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BECu;
    // 0x162bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x162BECu, 0x162BF4u)) {
        return;
    }
    ctx->pc = 0x162BF4u;
label_162bf4:
    // 0x162bf4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x162BF4u;
    SET_GPR_U32(ctx, 31, 0x162BFCu);
    ctx->pc = 0x162BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BF4u;
    // 0x162bf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x162BF4u, 0x162BFCu)) {
        return;
    }
    ctx->pc = 0x162BFCu;
label_162bfc:
    // 0x162bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c00: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x162C00u;
    SET_GPR_U32(ctx, 31, 0x162C08u);
    ctx->pc = 0x162C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C00u;
    // 0x162c04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x162C00u, 0x162C08u)) {
        return;
    }
    ctx->pc = 0x162C08u;
label_162c08:
    // 0x162c08: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x162C08u;
    SET_GPR_U32(ctx, 31, 0x162C10u);
    ctx->pc = 0x162C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C08u;
    // 0x162c0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x162C08u, 0x162C10u)) {
        return;
    }
    ctx->pc = 0x162C10u;
label_162c10:
    // 0x162c10: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x162c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x162c14: 0x8c628660  lw          $v0, -0x79A0($v1)
    ctx->pc = 0x162c14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338660u));
    // 0x162c18: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x162C18u;
    {
        const bool branch_taken_0x162c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x162c18) {
            ctx->pc = 0x162C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162C18u;
            // 0x162c1c: 0xac608660  sw          $zero, -0x79A0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294936160), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162C20u;
            goto label_162c20;
        }
    }
    ctx->pc = 0x162C20u;
label_162c20:
    // 0x162c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c24: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x162C24u;
    SET_GPR_U32(ctx, 31, 0x162C2Cu);
    ctx->pc = 0x162C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C24u;
    // 0x162c28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x162C24u, 0x162C2Cu)) {
        return;
    }
    ctx->pc = 0x162C2Cu;
label_162c2c:
    // 0x162c2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x162c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c30: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x162C30u;
    SET_GPR_U32(ctx, 31, 0x162C38u);
    ctx->pc = 0x162C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C30u;
    // 0x162c34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x162C30u, 0x162C38u)) {
        return;
    }
    ctx->pc = 0x162C38u;
label_162c38:
    // 0x162c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c3c: 0xc04f084  jal         func_13C210
    ctx->pc = 0x162C3Cu;
    SET_GPR_U32(ctx, 31, 0x162C44u);
    ctx->pc = 0x162C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C3Cu;
    // 0x162c40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x162C3Cu, 0x162C44u)) {
        return;
    }
    ctx->pc = 0x162C44u;
label_162c44:
    // 0x162c44: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x162c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162c48: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x162c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162c4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x162c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162c50: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x162c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162c54: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x162c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x162C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C5Cu;
        // 0x162c60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162C64u;
    // 0x162c64: 0x0  nop
    ctx->pc = 0x162c64u;
    // NOP
    ctx->pc = 0x162c68u;
}
