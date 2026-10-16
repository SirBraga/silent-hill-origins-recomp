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

// Function: sub_002873A8
// Address: 0x2873a8 - 0x287520
void sub_002873A8_0x2873a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002873A8_0x2873a8");
#endif

    switch (ctx->pc) {
        case 0x287458u: goto label_287458;
        case 0x2874b0u: goto label_2874b0;
        case 0x2874c8u: goto label_2874c8;
        case 0x2874e4u: goto label_2874e4;
        default: break;
    }

    ctx->pc = 0x2873a8u;

    // 0x2873a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2873a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2873ac: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2873acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2873b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2873b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2873b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2873b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2873b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2873b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2873bc: 0xc79021  addu        $s2, $a2, $a3
    ctx->pc = 0x2873bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2873c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2873c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2873c4: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x2873c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2873c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2873c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2873cc: 0x1240004b  beqz        $s2, . + 4 + (0x4B << 2)
    ctx->pc = 0x2873CCu;
    {
        const bool branch_taken_0x2873cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873CCu;
        // 0x2873d0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873cc) {
            ctx->pc = 0x2874FCu;
            goto label_2874fc;
        }
    }
    ctx->pc = 0x2873D4u;
    // 0x2873d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2873d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2873d8: 0x58400049  blezl       $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2873D8u;
    {
        const bool branch_taken_0x2873d8 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2873d8) {
            ctx->pc = 0x2873DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2873D8u;
            // 0x2873dc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287500u;
            goto label_287500;
        }
    }
    ctx->pc = 0x2873E0u;
    // 0x2873e0: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2873E0u;
    {
        const bool branch_taken_0x2873e0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2873E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873E0u;
        // 0x2873e4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873e0) {
            ctx->pc = 0x287498u;
            goto label_287498;
        }
    }
    ctx->pc = 0x2873E8u;
    // 0x2873e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2873e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2873ec: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2873ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2873f0: 0x101023  negu        $v0, $s0
    ctx->pc = 0x2873f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x2873f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2873f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2873f8: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x2873f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2873fc: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2873FCu;
    {
        const bool branch_taken_0x2873fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x287400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873FCu;
        // 0x287400: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873fc) {
            ctx->pc = 0x287458u;
            goto label_287458;
        }
    }
    ctx->pc = 0x287404u;
    // 0x287404: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x287404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x287408: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x287408u;
    {
        const bool branch_taken_0x287408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287408u;
        // 0x28740c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287408) {
            ctx->pc = 0x287440u;
            goto label_287440;
        }
    }
    ctx->pc = 0x287410u;
    // 0x287410: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x287410u;
    {
        const bool branch_taken_0x287410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287410) {
            ctx->pc = 0x287414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287410u;
            // 0x287414: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287430u;
            goto label_287430;
        }
    }
    ctx->pc = 0x287418u;
    // 0x287418: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x287418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28741c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28741Cu;
    {
        const bool branch_taken_0x28741c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28741c) {
            ctx->pc = 0x287420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28741Cu;
            // 0x287420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287424u;
            goto label_287424;
        }
    }
    ctx->pc = 0x287424u;
label_287424:
    // 0x287424: 0x24c30014  addiu       $v1, $a2, 0x14
    ctx->pc = 0x287424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x287428: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x287428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x28742c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_287430:
    // 0x287430: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287430u;
    {
        const bool branch_taken_0x287430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287430) {
            ctx->pc = 0x287434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287430u;
            // 0x287434: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287438u;
            goto label_287438;
        }
    }
    ctx->pc = 0x287438u;
label_287438:
    // 0x287438: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x287438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28743c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x28743cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_287440:
    // 0x287440: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x287440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x287444: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287444u;
    {
        const bool branch_taken_0x287444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287444) {
            ctx->pc = 0x287448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287444u;
            // 0x287448: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28744Cu;
            goto label_28744c;
        }
    }
    ctx->pc = 0x28744Cu;
label_28744c:
    // 0x28744c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x28744cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x287450: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x287450u;
    {
        const bool branch_taken_0x287450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x287454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287450u;
        // 0x287454: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287450) {
            ctx->pc = 0x287494u;
            goto label_287494;
        }
    }
    ctx->pc = 0x287458u;
label_287458:
    // 0x287458: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x287458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28745c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28745Cu;
    {
        const bool branch_taken_0x28745c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28745c) {
            ctx->pc = 0x287460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28745Cu;
            // 0x287460: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287464u;
            goto label_287464;
        }
    }
    ctx->pc = 0x287464u;
label_287464:
    // 0x287464: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x287464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x287468: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287468u;
    {
        const bool branch_taken_0x287468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287468) {
            ctx->pc = 0x28746Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287468u;
            // 0x28746c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287470u;
            goto label_287470;
        }
    }
    ctx->pc = 0x287470u;
label_287470:
    // 0x287470: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x287470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x287474: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287474u;
    {
        const bool branch_taken_0x287474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287474) {
            ctx->pc = 0x287478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287474u;
            // 0x287478: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28747Cu;
            goto label_28747c;
        }
    }
    ctx->pc = 0x28747Cu;
label_28747c:
    // 0x28747c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x28747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x287480: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287480u;
    {
        const bool branch_taken_0x287480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287480) {
            ctx->pc = 0x287484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287480u;
            // 0x287484: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287488u;
            goto label_287488;
        }
    }
    ctx->pc = 0x287488u;
label_287488:
    // 0x287488: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x287488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x28748c: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x28748Cu;
    {
        const bool branch_taken_0x28748c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x287490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28748Cu;
        // 0x287490: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28748c) {
            ctx->pc = 0x287458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287458;
        }
    }
    ctx->pc = 0x287494u;
label_287494:
    // 0x287494: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x287494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_287498:
    // 0x287498: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x287498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28749c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x28749Cu;
    {
        const bool branch_taken_0x28749c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28749Cu;
        // 0x2874a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28749c) {
            ctx->pc = 0x2874FCu;
            goto label_2874fc;
        }
    }
    ctx->pc = 0x2874A4u;
    // 0x2874a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2874a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2874a8: 0xc092782  jal         func_249E08
    ctx->pc = 0x2874A8u;
    SET_GPR_U32(ctx, 31, 0x2874B0u);
    ctx->pc = 0x2874ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2874A8u;
    // 0x2874ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x2874A8u, 0x2874B0u)) {
        return;
    }
    ctx->pc = 0x2874B0u;
label_2874b0:
    // 0x2874b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2874B0u;
    {
        const bool branch_taken_0x2874b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874B0u;
        // 0x2874b4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874b0) {
            ctx->pc = 0x287500u;
            goto label_287500;
        }
    }
    ctx->pc = 0x2874B8u;
    // 0x2874b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2874b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2874bc: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2874BCu;
    {
        const bool branch_taken_0x2874bc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2874C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874BCu;
        // 0x2874c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874bc) {
            ctx->pc = 0x2874FCu;
            goto label_2874fc;
        }
    }
    ctx->pc = 0x2874C4u;
    // 0x2874c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2874c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2874c8:
    // 0x2874c8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2874c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2874cc: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2874ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2874d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2874d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2874d4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2874D4u;
    {
        const bool branch_taken_0x2874d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2874d4) {
            ctx->pc = 0x2874D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2874D4u;
            // 0x2874d8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2874ECu;
            goto label_2874ec;
        }
    }
    ctx->pc = 0x2874DCu;
    // 0x2874dc: 0xc0a1978  jal         func_2865E0
    ctx->pc = 0x2874DCu;
    SET_GPR_U32(ctx, 31, 0x2874E4u);
    ctx->pc = 0x2874E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2874DCu;
    // 0x2874e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2865E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2865E0u, 0x2874DCu, 0x2874E4u)) {
        return;
    }
    ctx->pc = 0x2874E4u;
label_2874e4:
    // 0x2874e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2874e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2874e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2874e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2874ec:
    // 0x2874ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2874ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2874f0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2874f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2874f4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2874F4u;
    {
        const bool branch_taken_0x2874f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2874F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874F4u;
        // 0x2874f8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874f4) {
            ctx->pc = 0x2874C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2874c8;
        }
    }
    ctx->pc = 0x2874FCu;
label_2874fc:
    // 0x2874fc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2874fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287500:
    // 0x287500: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x287500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287504: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x287504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287508: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x287508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28750c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28750cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287510: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x287510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x287514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287518: 0x3e00008  jr          $ra
    ctx->pc = 0x287518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287518u;
        // 0x28751c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287520u;
}
