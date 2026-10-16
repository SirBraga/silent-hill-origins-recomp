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

// Function: sub_002053E8
// Address: 0x2053e8 - 0x2054d8
void sub_002053E8_0x2053e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002053E8_0x2053e8");
#endif

    switch (ctx->pc) {
        case 0x20541cu: goto label_20541c;
        case 0x205444u: goto label_205444;
        case 0x205458u: goto label_205458;
        case 0x205460u: goto label_205460;
        case 0x205470u: goto label_205470;
        case 0x2054a4u: goto label_2054a4;
        case 0x2054acu: goto label_2054ac;
        case 0x2054b4u: goto label_2054b4;
        default: break;
    }

    ctx->pc = 0x2053e8u;

    // 0x2053e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2053e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2053ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2053ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2053f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2053f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2053f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2053f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2053f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2053f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2053fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2053fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x205400: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x205400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x205404: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x205404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20540c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20540cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205410: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x205410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x205414: 0xc081444  jal         func_205110
    ctx->pc = 0x205414u;
    SET_GPR_U32(ctx, 31, 0x20541Cu);
    ctx->pc = 0x205418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205414u;
    // 0x205418: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205110u, 0x205414u, 0x20541Cu)) {
        return;
    }
    ctx->pc = 0x20541Cu;
label_20541c:
    // 0x20541c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20541cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205420: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x205420u;
    {
        const bool branch_taken_0x205420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x205424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205420u;
        // 0x205424: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205420) {
            ctx->pc = 0x2054B8u;
            goto label_2054b8;
        }
    }
    ctx->pc = 0x205428u;
    // 0x205428: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x205428u;
    {
        const bool branch_taken_0x205428 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205428u;
        // 0x20542c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205428) {
            ctx->pc = 0x205434u;
            goto label_205434;
        }
    }
    ctx->pc = 0x205430u;
    // 0x205430: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x205430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_205434:
    // 0x205434: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x205434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205438: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x205438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20543c: 0xc080924  jal         func_202490
    ctx->pc = 0x20543Cu;
    SET_GPR_U32(ctx, 31, 0x205444u);
    ctx->pc = 0x205440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20543Cu;
    // 0x205440: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x20543Cu, 0x205444u)) {
        return;
    }
    ctx->pc = 0x205444u;
label_205444:
    // 0x205444: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x205444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205448: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x205448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20544c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20544cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205450: 0xc093546  jal         func_24D518
    ctx->pc = 0x205450u;
    SET_GPR_U32(ctx, 31, 0x205458u);
    ctx->pc = 0x205454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205450u;
    // 0x205454: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x205450u, 0x205458u)) {
        return;
    }
    ctx->pc = 0x205458u;
label_205458:
    // 0x205458: 0xc0815b2  jal         func_2056C8
    ctx->pc = 0x205458u;
    SET_GPR_U32(ctx, 31, 0x205460u);
    ctx->pc = 0x2056C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2056C8u, 0x205458u, 0x205460u)) {
        return;
    }
    ctx->pc = 0x205460u;
label_205460:
    // 0x205460: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x205460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x205464: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x205464u;
    {
        const bool branch_taken_0x205464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205464u;
        // 0x205468: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205464) {
            ctx->pc = 0x205490u;
            goto label_205490;
        }
    }
    ctx->pc = 0x20546Cu;
    // 0x20546c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x20546cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_205470:
    // 0x205470: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x205470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x205474: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x205474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x205478: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x205478u;
    {
        const bool branch_taken_0x205478 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x205478) {
            ctx->pc = 0x20547Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205478u;
            // 0x20547c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205488u;
            goto label_205488;
        }
    }
    ctx->pc = 0x205480u;
    // 0x205480: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x205480u;
    {
        const bool branch_taken_0x205480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205480u;
        // 0x205484: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205480) {
            ctx->pc = 0x205494u;
            goto label_205494;
        }
    }
    ctx->pc = 0x205488u;
label_205488:
    // 0x205488: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x205488u;
    {
        const bool branch_taken_0x205488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x205488) {
            ctx->pc = 0x20548Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205488u;
            // 0x20548c: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205470;
        }
    }
    ctx->pc = 0x205490u;
label_205490:
    // 0x205490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x205490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205494:
    // 0x205494: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205494u;
    {
        const bool branch_taken_0x205494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205494u;
        // 0x205498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205494) {
            ctx->pc = 0x2054A4u;
            goto label_2054a4;
        }
    }
    ctx->pc = 0x20549Cu;
    // 0x20549c: 0xc09366a  jal         func_24D9A8
    ctx->pc = 0x20549Cu;
    SET_GPR_U32(ctx, 31, 0x2054A4u);
    ctx->pc = 0x2054A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20549Cu;
    // 0x2054a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D9A8u, 0x20549Cu, 0x2054A4u)) {
        return;
    }
    ctx->pc = 0x2054A4u;
label_2054a4:
    // 0x2054a4: 0xc067c34  jal         func_19F0D0
    ctx->pc = 0x2054A4u;
    SET_GPR_U32(ctx, 31, 0x2054ACu);
    ctx->pc = 0x19F0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F0D0u, 0x2054A4u, 0x2054ACu)) {
        return;
    }
    ctx->pc = 0x2054ACu;
label_2054ac:
    // 0x2054ac: 0xc081536  jal         func_2054D8
    ctx->pc = 0x2054ACu;
    SET_GPR_U32(ctx, 31, 0x2054B4u);
    ctx->pc = 0x2054D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2054D8u, 0x2054ACu, 0x2054B4u)) {
        return;
    }
    ctx->pc = 0x2054B4u;
label_2054b4:
    // 0x2054b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2054b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2054b8:
    // 0x2054b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2054b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2054bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2054bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2054c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2054c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2054c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2054c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2054c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2054c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2054cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2054CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2054D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054CCu;
        // 0x2054d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2054CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2054D4u;
    // 0x2054d4: 0x0  nop
    ctx->pc = 0x2054d4u;
    // NOP
    ctx->pc = 0x2054d8u;
}
