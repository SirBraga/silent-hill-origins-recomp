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

// Function: sub_001ED958
// Address: 0x1ed958 - 0x1eda48
void sub_001ED958_0x1ed958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED958_0x1ed958");
#endif

    switch (ctx->pc) {
        case 0x1ed990u: goto label_1ed990;
        case 0x1ed9d8u: goto label_1ed9d8;
        case 0x1ed9ecu: goto label_1ed9ec;
        case 0x1eda00u: goto label_1eda00;
        default: break;
    }

    ctx->pc = 0x1ed958u;

    // 0x1ed958: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ed958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ed95c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ed960: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ed960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ed964: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ed964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed968: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1ed968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ed96c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ed96cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed970: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ed970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ed974: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1ed974u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1ed978: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ed978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ed97c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed980: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1ed980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ed984: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1ED984u;
    {
        const bool branch_taken_0x1ed984 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1ED988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED984u;
        // 0x1ed988: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed984) {
            ctx->pc = 0x1EDA14u;
            goto label_1eda14;
        }
    }
    ctx->pc = 0x1ED98Cu;
    // 0x1ed98c: 0x0  nop
    ctx->pc = 0x1ed98cu;
    // NOP
label_1ed990:
    // 0x1ed990: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1ed990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ed994: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1ed994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed998: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED998u;
    {
        const bool branch_taken_0x1ed998 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed998) {
            ctx->pc = 0x1ED99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED998u;
            // 0x1ed99c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED9DCu;
            goto label_1ed9dc;
        }
    }
    ctx->pc = 0x1ED9A0u;
    // 0x1ed9a0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ed9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ed9a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ed9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ed9a8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ed9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ed9ac: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ed9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ed9b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ed9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ed9b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed9b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ed9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed9bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ed9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ed9c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed9c4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ed9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed9c8: 0xe4d40004  swc1        $f20, 0x4($a2)
    ctx->pc = 0x1ed9c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1ed9cc: 0xe614012c  swc1        $f20, 0x12C($s0)
    ctx->pc = 0x1ed9ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x1ed9d0: 0xc07a026  jal         func_1E8098
    ctx->pc = 0x1ED9D0u;
    SET_GPR_U32(ctx, 31, 0x1ED9D8u);
    ctx->pc = 0x1ED9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9D0u;
    // 0x1ed9d4: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E8098u, 0x1ED9D0u, 0x1ED9D8u)) {
        return;
    }
    ctx->pc = 0x1ED9D8u;
label_1ed9d8:
    // 0x1ed9d8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ed9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ed9dc:
    // 0x1ed9dc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED9DCu;
    {
        const bool branch_taken_0x1ed9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9dc) {
            ctx->pc = 0x1ED9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED9DCu;
            // 0x1ed9e0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED9F0u;
            goto label_1ed9f0;
        }
    }
    ctx->pc = 0x1ED9E4u;
    // 0x1ed9e4: 0xc07b4d2  jal         func_1ED348
    ctx->pc = 0x1ED9E4u;
    SET_GPR_U32(ctx, 31, 0x1ED9ECu);
    ctx->pc = 0x1ED9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9E4u;
    // 0x1ed9e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED348u, 0x1ED9E4u, 0x1ED9ECu)) {
        return;
    }
    ctx->pc = 0x1ED9ECu;
label_1ed9ec:
    // 0x1ed9ec: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ed9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ed9f0:
    // 0x1ed9f0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED9F0u;
    {
        const bool branch_taken_0x1ed9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9f0) {
            ctx->pc = 0x1ED9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED9F0u;
            // 0x1ed9f4: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDA04u;
            goto label_1eda04;
        }
    }
    ctx->pc = 0x1ED9F8u;
    // 0x1ed9f8: 0xc07b4d2  jal         func_1ED348
    ctx->pc = 0x1ED9F8u;
    SET_GPR_U32(ctx, 31, 0x1EDA00u);
    ctx->pc = 0x1ED9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9F8u;
    // 0x1ed9fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED348u, 0x1ED9F8u, 0x1EDA00u)) {
        return;
    }
    ctx->pc = 0x1EDA00u;
label_1eda00:
    // 0x1eda00: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1eda00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1eda04:
    // 0x1eda04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1eda04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1eda08: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1eda08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eda0c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1EDA0Cu;
    {
        const bool branch_taken_0x1eda0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA0Cu;
        // 0x1eda10: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda0c) {
            ctx->pc = 0x1ED990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed990;
        }
    }
    ctx->pc = 0x1EDA14u;
label_1eda14:
    // 0x1eda14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1eda14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eda18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1eda18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eda1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eda1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eda20: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1eda20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eda24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eda24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eda28: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1eda28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1eda2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA2Cu;
        // 0x1eda30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDA34u;
    // 0x1eda34: 0x0  nop
    ctx->pc = 0x1eda34u;
    // NOP
    // 0x1eda38: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1eda38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1eda3c: 0x0  nop
    ctx->pc = 0x1eda3cu;
    // NOP
    // 0x1eda40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1eda40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1eda44: 0x0  nop
    ctx->pc = 0x1eda44u;
    // NOP
    ctx->pc = 0x1eda48u;
}
