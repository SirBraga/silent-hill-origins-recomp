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

// Function: sub_001AE310
// Address: 0x1ae310 - 0x1ae3e8
void sub_001AE310_0x1ae310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE310_0x1ae310");
#endif

    switch (ctx->pc) {
        case 0x1ae358u: goto label_1ae358;
        case 0x1ae36cu: goto label_1ae36c;
        case 0x1ae37cu: goto label_1ae37c;
        case 0x1ae3b8u: goto label_1ae3b8;
        default: break;
    }

    ctx->pc = 0x1ae310u;

    // 0x1ae310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ae310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ae314: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ae314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ae318: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ae318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ae31c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae320: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ae320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1ae324: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ae324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae328: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ae328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ae32c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ae32cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae330: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ae330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ae334: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AE334u;
    {
        const bool branch_taken_0x1ae334 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE334u;
        // 0x1ae338: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae334) {
            ctx->pc = 0x1AE3B8u;
            goto label_1ae3b8;
        }
    }
    ctx->pc = 0x1AE33Cu;
    // 0x1ae33c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ae33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ae340: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x1ae340u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ae344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae34c: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x1ae34cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae350: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1AE350u;
    SET_GPR_U32(ctx, 31, 0x1AE358u);
    ctx->pc = 0x1AE354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE350u;
    // 0x1ae354: 0x708821  addu        $s1, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1AE350u, 0x1AE358u)) {
        return;
    }
    ctx->pc = 0x1AE358u;
label_1ae358:
    // 0x1ae358: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ae358u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae35c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE35Cu;
    {
        const bool branch_taken_0x1ae35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE35Cu;
        // 0x1ae360: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae35c) {
            ctx->pc = 0x1AE384u;
            goto label_1ae384;
        }
    }
    ctx->pc = 0x1AE364u;
    // 0x1ae364: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AE364u;
    SET_GPR_U32(ctx, 31, 0x1AE36Cu);
    ctx->pc = 0x1AE368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE364u;
    // 0x1ae368: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AE364u, 0x1AE36Cu)) {
        return;
    }
    ctx->pc = 0x1AE36Cu;
label_1ae36c:
    // 0x1ae36c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae374: 0xc081baa  jal         func_206EA8
    ctx->pc = 0x1AE374u;
    SET_GPR_U32(ctx, 31, 0x1AE37Cu);
    ctx->pc = 0x1AE378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE374u;
    // 0x1ae378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206EA8u, 0x1AE374u, 0x1AE37Cu)) {
        return;
    }
    ctx->pc = 0x1AE37Cu;
label_1ae37c:
    // 0x1ae37c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ae37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ae380: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ae380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae384:
    // 0x1ae384: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ae384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ae388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae38c: 0x532818  mult        $a1, $v0, $s3
    ctx->pc = 0x1ae38cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ae390: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1ae390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1ae394: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x1ae394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x1ae398: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x1ae398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ae39c: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x1ae39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae3a0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1ae3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ae3a4: 0xac740054  sw          $s4, 0x54($v1)
    ctx->pc = 0x1ae3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 20));
    // 0x1ae3a8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ae3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ae3ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae3b0: 0xc06b568  jal         func_1AD5A0
    ctx->pc = 0x1AE3B0u;
    SET_GPR_U32(ctx, 31, 0x1AE3B8u);
    ctx->pc = 0x1AE3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE3B0u;
    // 0x1ae3b4: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD5A0u, 0x1AE3B0u, 0x1AE3B8u)) {
        return;
    }
    ctx->pc = 0x1AE3B8u;
label_1ae3b8:
    // 0x1ae3b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ae3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae3bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ae3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae3c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ae3c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae3c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ae3c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae3c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ae3c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae3cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3D0u;
        // 0x1ae3d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE3D8u;
    // 0x1ae3d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ae3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ae3dc: 0x0  nop
    ctx->pc = 0x1ae3dcu;
    // NOP
    // 0x1ae3e0: 0xac87008c  sw          $a3, 0x8C($a0)
    ctx->pc = 0x1ae3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 7));
    // 0x1ae3e4: 0x0  nop
    ctx->pc = 0x1ae3e4u;
    // NOP
    ctx->pc = 0x1ae3e8u;
}
