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

// Function: sub_002EE380
// Address: 0x2ee380 - 0x2ee498
void sub_002EE380_0x2ee380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE380_0x2ee380");
#endif

    switch (ctx->pc) {
        case 0x2ee3e8u: goto label_2ee3e8;
        case 0x2ee438u: goto label_2ee438;
        default: break;
    }

    ctx->pc = 0x2ee380u;

    // 0x2ee380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ee380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ee384: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2ee384u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee388: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ee388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ee38c: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x2ee38cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2ee390: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x2ee390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x2ee394: 0x8d63000c  lw          $v1, 0xC($t3)
    ctx->pc = 0x2ee394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x2ee398: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x2ee398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x2ee39c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2ee39cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ee3a0: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x2ee3a0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2ee3a4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE3A4u;
    {
        const bool branch_taken_0x2ee3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee3a4) {
            ctx->pc = 0x2EE3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE3A4u;
            // 0x2ee3a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE3ACu;
            goto label_2ee3ac;
        }
    }
    ctx->pc = 0x2EE3ACu;
label_2ee3ac:
    // 0x2ee3ac: 0x2812  mflo        $a1
    ctx->pc = 0x2ee3acu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2ee3b0: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x2ee3b0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x2ee3b4: 0x578c2  srl         $t7, $a1, 3
    ctx->pc = 0x2ee3b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x2ee3b8: 0x30b00007  andi        $s0, $a1, 0x7
    ctx->pc = 0x2ee3b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2ee3bc: 0x1e0482d  daddu       $t1, $t7, $zero
    ctx->pc = 0x2ee3bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3c0: 0x3012  mflo        $a2
    ctx->pc = 0x2ee3c0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2ee3c4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ee3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ee3c8: 0x570c2  srl         $t6, $a1, 3
    ctx->pc = 0x2ee3c8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x2ee3cc: 0x1c9102b  sltu        $v0, $t6, $t1
    ctx->pc = 0x2ee3ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2ee3d0: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2EE3D0u;
    {
        const bool branch_taken_0x2ee3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE3D0u;
        // 0x2ee3d4: 0x30b90007  andi        $t9, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee3d0) {
            ctx->pc = 0x2EE488u;
            goto label_2ee488;
        }
    }
    ctx->pc = 0x2EE3D8u;
    // 0x2ee3d8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2ee3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ee3dc: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x2ee3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee3e0: 0x2c027  nor         $t8, $zero, $v0
    ctx->pc = 0x2ee3e0u;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2ee3e4: 0x12f1026  xor         $v0, $t1, $t7
    ctx->pc = 0x2ee3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 15));
label_2ee3e8:
    // 0x2ee3e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ee3e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3ec: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x2ee3ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16));
    // 0x2ee3f0: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x2ee3f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee3f4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ee3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3f8: 0x12e1826  xor         $v1, $t1, $t6
    ctx->pc = 0x2ee3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 14));
    // 0x2ee3fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE3FCu;
    {
        const bool branch_taken_0x2ee3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE3FCu;
        // 0x2ee400: 0x323500a  movz        $t2, $t9, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee3fc) {
            ctx->pc = 0x2EE420u;
            goto label_2ee420;
        }
    }
    ctx->pc = 0x2EE404u;
    // 0x2ee404: 0x15510007  bne         $t2, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE404u;
    {
        const bool branch_taken_0x2ee404 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 17));
        ctx->pc = 0x2EE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE404u;
        // 0x2ee408: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee404) {
            ctx->pc = 0x2EE424u;
            goto label_2ee424;
        }
    }
    ctx->pc = 0x2EE40Cu;
    // 0x2ee40c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2ee40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2ee410: 0x252c0001  addiu       $t4, $t1, 0x1
    ctx->pc = 0x2ee410u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2ee414: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2ee414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2ee418: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2EE418u;
    {
        const bool branch_taken_0x2ee418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE418u;
        // 0x2ee41c: 0xa0580000  sb          $t8, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee418) {
            ctx->pc = 0x2EE478u;
            goto label_2ee478;
        }
    }
    ctx->pc = 0x2EE420u;
label_2ee420:
    // 0x2ee420: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2ee420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee424:
    // 0x2ee424: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x2ee424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ee428: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EE428u;
    {
        const bool branch_taken_0x2ee428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE428u;
        // 0x2ee42c: 0x252c0001  addiu       $t4, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee428) {
            ctx->pc = 0x2EE478u;
            goto label_2ee478;
        }
    }
    ctx->pc = 0x2EE430u;
    // 0x2ee430: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2ee430u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee434: 0x0  nop
    ctx->pc = 0x2ee434u;
    // NOP
label_2ee438:
    // 0x2ee438: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2ee438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2ee43c: 0x10d1804  sllv        $v1, $t5, $t0
    ctx->pc = 0x2ee43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 8) & 0x1F));
    // 0x2ee440: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2ee440u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2ee444: 0x1073004  sllv        $a2, $a3, $t0
    ctx->pc = 0x2ee444u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
    // 0x2ee448: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2ee448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2ee44c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ee44cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ee450: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2ee450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee454: 0x10a282b  sltu        $a1, $t0, $t2
    ctx->pc = 0x2ee454u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ee458: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ee45c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2ee45cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ee460: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2ee460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2ee464: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2ee464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2ee468: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2ee468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ee46c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2ee46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2ee470: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2EE470u;
    {
        const bool branch_taken_0x2ee470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE470u;
        // 0x2ee474: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee470) {
            ctx->pc = 0x2EE438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee438;
        }
    }
    ctx->pc = 0x2EE478u;
label_2ee478:
    // 0x2ee478: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2ee478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee47c: 0x1c9102b  sltu        $v0, $t6, $t1
    ctx->pc = 0x2ee47cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2ee480: 0x1040ffd9  beqz        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2EE480u;
    {
        const bool branch_taken_0x2ee480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE480u;
        // 0x2ee484: 0x12f1026  xor         $v0, $t1, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee480) {
            ctx->pc = 0x2EE3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee3e8;
        }
    }
    ctx->pc = 0x2EE488u;
label_2ee488:
    // 0x2ee488: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ee488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee48c: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x2ee48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee490: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE490u;
        // 0x2ee494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE498u;
}
