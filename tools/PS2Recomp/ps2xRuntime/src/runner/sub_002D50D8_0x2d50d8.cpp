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

// Function: sub_002D50D8
// Address: 0x2d50d8 - 0x2d5388
void sub_002D50D8_0x2d50d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D50D8_0x2d50d8");
#endif

    switch (ctx->pc) {
        case 0x2d5168u: goto label_2d5168;
        case 0x2d51a0u: goto label_2d51a0;
        case 0x2d51e0u: goto label_2d51e0;
        default: break;
    }

    ctx->pc = 0x2d50d8u;

    // 0x2d50d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d50d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d50dc: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2d50dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d50e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d50e4: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x2d50e4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d50e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d50ec: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2d50ecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d50f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d50f4: 0x7fb30000  sq          $s3, 0x0($sp)
    ctx->pc = 0x2d50f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 19));
    // 0x2d50f8: 0x8d670004  lw          $a3, 0x4($t3)
    ctx->pc = 0x2d50f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2d50fc: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D50FCu;
    {
        const bool branch_taken_0x2d50fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50FCu;
        // 0x2d5100: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d50fc) {
            ctx->pc = 0x2D5188u;
            goto label_2d5188;
        }
    }
    ctx->pc = 0x2D5104u;
    // 0x2d5104: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x2d5104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2d5108: 0x30e30003  andi        $v1, $a3, 0x3
    ctx->pc = 0x2d5108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2d510c: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2D510Cu;
    {
        const bool branch_taken_0x2d510c = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x2D5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D510Cu;
        // 0x2d5110: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d510c) {
            ctx->pc = 0x2D514Cu;
            goto label_2d514c;
        }
    }
    ctx->pc = 0x2D5114u;
    // 0x2d5114: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D5114u;
    {
        const bool branch_taken_0x2d5114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5114u;
        // 0x2d5118: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5114) {
            ctx->pc = 0x2D5168u;
            goto label_2d5168;
        }
    }
    ctx->pc = 0x2D511Cu;
    // 0x2d511c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2d511cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d5120: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2D5120u;
    {
        const bool branch_taken_0x2d5120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5120) {
            ctx->pc = 0x2D5124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5120u;
            // 0x2d5124: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5150u;
            goto label_2d5150;
        }
    }
    ctx->pc = 0x2D5128u;
    // 0x2d5128: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2d5128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d512c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D512Cu;
    {
        const bool branch_taken_0x2d512c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d512c) {
            ctx->pc = 0x2D5130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D512Cu;
            // 0x2d5130: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5144u;
            goto label_2d5144;
        }
    }
    ctx->pc = 0x2D5134u;
    // 0x2d5134: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2d5134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2d5138: 0x24c40004  addiu       $a0, $a2, 0x4
    ctx->pc = 0x2d5138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2d513c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d513cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5140: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2d5140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2d5144:
    // 0x2d5144: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d5144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d5148: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2d5148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2d514c:
    // 0x2d514c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2d514cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2d5150:
    // 0x2d5150: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d5150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d5154: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x2d5154u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2d5158: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D5158u;
    {
        const bool branch_taken_0x2d5158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5158u;
        // 0x2d515c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5158) {
            ctx->pc = 0x2D5188u;
            goto label_2d5188;
        }
    }
    ctx->pc = 0x2D5160u;
    // 0x2d5160: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d5160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5164: 0x0  nop
    ctx->pc = 0x2d5164u;
    // NOP
label_2d5168:
    // 0x2d5168: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d5168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d516c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d516cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2d5170: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d5170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d5174: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x2d5174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2d5178: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2d5178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2d517c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2d517cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2d5180: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D5180u;
    {
        const bool branch_taken_0x2d5180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5180u;
        // 0x2d5184: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5180) {
            ctx->pc = 0x2D5168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5168;
        }
    }
    ctx->pc = 0x2D5188u;
label_2d5188:
    // 0x2d5188: 0x8dc20004  lw          $v0, 0x4($t6)
    ctx->pc = 0x2d5188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2d518c: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2D518Cu;
    {
        const bool branch_taken_0x2d518c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D518Cu;
        // 0x2d5190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d518c) {
            ctx->pc = 0x2D536Cu;
            goto label_2d536c;
        }
    }
    ctx->pc = 0x2D5194u;
    // 0x2d5194: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x2d5194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2d5198: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x2d5198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2d519c: 0xb12018  mult        $a0, $a1, $s1
    ctx->pc = 0x2d519cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d51a0:
    // 0x2d51a0: 0x8dc30010  lw          $v1, 0x10($t6)
    ctx->pc = 0x2d51a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2d51a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d51a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d51a8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2d51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2d51ac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2d51acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d51b0: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2D51B0u;
    {
        const bool branch_taken_0x2d51b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51B0u;
        // 0x2d51b4: 0x24af0001  addiu       $t7, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d51b0) {
            ctx->pc = 0x2D5358u;
            goto label_2d5358;
        }
    }
    ctx->pc = 0x2D51B8u;
    // 0x2d51b8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2d51b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d51bc: 0x50c00067  beql        $a2, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x2D51BCu;
    {
        const bool branch_taken_0x2d51bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d51bc) {
            ctx->pc = 0x2D51C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D51BCu;
            // 0x2d51c0: 0x8dc20004  lw          $v0, 0x4($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D535Cu;
            goto label_2d535c;
        }
    }
    ctx->pc = 0x2D51C4u;
    // 0x2d51c4: 0x1b05018  mult        $t2, $t5, $s0
    ctx->pc = 0x2d51c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2d51c8: 0x3c09001f  lui         $t1, 0x1F
    ctx->pc = 0x2d51c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)31 << 16));
    // 0x2d51cc: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2d51ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d51d0: 0x340cffff  ori         $t4, $zero, 0xFFFF
    ctx->pc = 0x2d51d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d51d4: 0x3529ffe0  ori         $t1, $t1, 0xFFE0
    ctx->pc = 0x2d51d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65504);
    // 0x2d51d8: 0x24193ffd  addiu       $t9, $zero, 0x3FFD
    ctx->pc = 0x2d51d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 16381));
    // 0x2d51dc: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x2d51dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d51e0:
    // 0x2d51e0: 0x8d62000c  lw          $v0, 0xC($t3)
    ctx->pc = 0x2d51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x2d51e4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2d51e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2d51e8: 0x94c400b8  lhu         $a0, 0xB8($a2)
    ctx->pc = 0x2d51e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x2d51ec: 0x4a3821  addu        $a3, $v0, $t2
    ctx->pc = 0x2d51ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2d51f0: 0x108c0006  beq         $a0, $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D51F0u;
    {
        const bool branch_taken_0x2d51f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 12));
        ctx->pc = 0x2D51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51F0u;
        // 0x2d51f4: 0x254a0028  addiu       $t2, $t2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d51f0) {
            ctx->pc = 0x2D520Cu;
            goto label_2d520c;
        }
    }
    ctx->pc = 0x2D51F8u;
    // 0x2d51f8: 0x8cc300b4  lw          $v1, 0xB4($a2)
    ctx->pc = 0x2d51f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
    // 0x2d51fc: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x2d51fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d5200: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d5200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d5204: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5204u;
    {
        const bool branch_taken_0x2d5204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5204u;
        // 0x2d5208: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5204) {
            ctx->pc = 0x2D5210u;
            goto label_2d5210;
        }
    }
    ctx->pc = 0x2D520Cu;
label_2d520c:
    // 0x2d520c: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x2d520cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_2d5210:
    // 0x2d5210: 0x94c400c0  lhu         $a0, 0xC0($a2)
    ctx->pc = 0x2d5210u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x2d5214: 0x508c0005  beql        $a0, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5214u;
    {
        const bool branch_taken_0x2d5214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 12));
        if (branch_taken_0x2d5214) {
            ctx->pc = 0x2D5218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5214u;
            // 0x2d5218: 0x891821  addu        $v1, $a0, $t1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D522Cu;
            goto label_2d522c;
        }
    }
    ctx->pc = 0x2D521Cu;
    // 0x2d521c: 0x8cc300bc  lw          $v1, 0xBC($a2)
    ctx->pc = 0x2d521cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x2d5220: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x2d5220u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d5224: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d5224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d5228: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2d5228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d522c:
    // 0x2d522c: 0xb92018  mult        $a0, $a1, $t9
    ctx->pc = 0x2d522cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d5230: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x2d5230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2d5234: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d5234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d5238: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d5238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d523c: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2d523cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2d5240: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d5240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d5244: 0x68c500bb  ldl         $a1, 0xBB($a2)
    ctx->pc = 0x2d5244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 187); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d5248: 0x6cc500b4  ldr         $a1, 0xB4($a2)
    ctx->pc = 0x2d5248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 180); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d524c: 0xb0e50007  sdl         $a1, 0x7($a3)
    ctx->pc = 0x2d524cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d5250: 0xb4e50000  sdr         $a1, 0x0($a3)
    ctx->pc = 0x2d5250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d5254: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5258: 0x68c500c3  ldl         $a1, 0xC3($a2)
    ctx->pc = 0x2d5258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 195); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d525c: 0x6cc500bc  ldr         $a1, 0xBC($a2)
    ctx->pc = 0x2d525cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 188); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d5260: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x2d5260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d5264: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x2d5264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d5268: 0x68c50007  ldl         $a1, 0x7($a2)
    ctx->pc = 0x2d5268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d526c: 0x6cc50000  ldr         $a1, 0x0($a2)
    ctx->pc = 0x2d526cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d5270: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x2d5270u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2d5274: 0xb0e5001b  sdl         $a1, 0x1B($a3)
    ctx->pc = 0x2d5274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d5278: 0xb4e50014  sdr         $a1, 0x14($a3)
    ctx->pc = 0x2d5278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d527c: 0xace8001c  sw          $t0, 0x1C($a3)
    ctx->pc = 0x2d527cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 8));
    // 0x2d5280: 0x94c200b8  lhu         $v0, 0xB8($a2)
    ctx->pc = 0x2d5280u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x2d5284: 0x104c001c  beq         $v0, $t4, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D5284u;
    {
        const bool branch_taken_0x2d5284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x2D5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5284u;
        // 0x2d5288: 0x834021  addu        $t0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5284) {
            ctx->pc = 0x2D52F8u;
            goto label_2d52f8;
        }
    }
    ctx->pc = 0x2D528Cu;
    // 0x2d528c: 0x8cc200b4  lw          $v0, 0xB4($a2)
    ctx->pc = 0x2d528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
    // 0x2d5290: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2d5290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d5294: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D5294u;
    {
        const bool branch_taken_0x2d5294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5294) {
            ctx->pc = 0x2D5298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5294u;
            // 0x2d5298: 0x8cc200b0  lw          $v0, 0xB0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D52FCu;
            goto label_2d52fc;
        }
    }
    ctx->pc = 0x2D529Cu;
    // 0x2d529c: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2d529cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2d52a0: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x2d52a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2d52a4: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2d52a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2d52a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d52a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d52ac: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2d52acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2d52b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d52b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d52b4: 0x982004  sllv        $a0, $t8, $a0
    ctx->pc = 0x2d52b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 4) & 0x1F));
    // 0x2d52b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d52bc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2d52bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2d52c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D52C0u;
    {
        const bool branch_taken_0x2d52c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52C0u;
        // 0x2d52c4: 0x8cc200b0  lw          $v0, 0xB0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d52c0) {
            ctx->pc = 0x2D52FCu;
            goto label_2d52fc;
        }
    }
    ctx->pc = 0x2D52C8u;
    // 0x2d52c8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2d52c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d52cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d52ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d52d0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2d52d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d52d4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2d52d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d52d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d52d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d52dc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2d52dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d52e0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2d52e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2d52e4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2d52e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d52e8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2d52e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2d52ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d52ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d52f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D52F0u;
    {
        const bool branch_taken_0x2d52f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D52F0u;
        // 0x2d52f4: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d52f0) {
            ctx->pc = 0x2D532Cu;
            goto label_2d532c;
        }
    }
    ctx->pc = 0x2D52F8u;
label_2d52f8:
    // 0x2d52f8: 0x8cc200b0  lw          $v0, 0xB0($a2)
    ctx->pc = 0x2d52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
label_2d52fc:
    // 0x2d52fc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2d52fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5300: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2d5300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5304: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2d5304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5308: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x2d5308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d530c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d530cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d5310: 0xc4440028  lwc1        $f4, 0x28($v0)
    ctx->pc = 0x2d5310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d5314: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2d5314u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2d5318: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2d5318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d531c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2d531cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2d5320: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d5320u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d5324: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d5324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d5328: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d5328u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2d532c:
    // 0x2d532c: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x2d532cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x2d5330: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x2d5330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5334: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2d5334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5338: 0x0  nop
    ctx->pc = 0x2d5338u;
    // NOP
    // 0x2d533c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D533Cu;
    {
        const bool branch_taken_0x2d533c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d533c) {
            ctx->pc = 0x2D5340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D533Cu;
            // 0x2d5340: 0xace00020  sw          $zero, 0x20($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5344u;
            goto label_2d5344;
        }
    }
    ctx->pc = 0x2D5344u;
label_2d5344:
    // 0x2d5344: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2d5344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d5348: 0x8cc600dc  lw          $a2, 0xDC($a2)
    ctx->pc = 0x2d5348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x2d534c: 0xace20024  sw          $v0, 0x24($a3)
    ctx->pc = 0x2d534cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 2));
    // 0x2d5350: 0x14c0ffa3  bnez        $a2, . + 4 + (-0x5D << 2)
    ctx->pc = 0x2D5350u;
    {
        const bool branch_taken_0x2d5350 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5350u;
        // 0x2d5354: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5350) {
            ctx->pc = 0x2D51E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d51e0;
        }
    }
    ctx->pc = 0x2D5358u;
label_2d5358:
    // 0x2d5358: 0x8dc20004  lw          $v0, 0x4($t6)
    ctx->pc = 0x2d5358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
label_2d535c:
    // 0x2d535c: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x2d535cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5360: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2d5360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d5364: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x2D5364u;
    {
        const bool branch_taken_0x2d5364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5364u;
        // 0x2d5368: 0xb12018  mult        $a0, $a1, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5364) {
            ctx->pc = 0x2D51A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d51a0;
        }
    }
    ctx->pc = 0x2D536Cu;
label_2d536c:
    // 0x2d536c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d536cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5370: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2d5370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5374: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d5374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5378: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d5378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d537c: 0x7bb30000  lq          $s3, 0x0($sp)
    ctx->pc = 0x2d537cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5380: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5380u;
        // 0x2d5384: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5388u;
}
