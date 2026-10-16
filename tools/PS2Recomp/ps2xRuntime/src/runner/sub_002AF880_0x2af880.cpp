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

// Function: sub_002AF880
// Address: 0x2af880 - 0x2afa18
void sub_002AF880_0x2af880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF880_0x2af880");
#endif

    switch (ctx->pc) {
        case 0x2af8d8u: goto label_2af8d8;
        case 0x2af9b4u: goto label_2af9b4;
        default: break;
    }

    ctx->pc = 0x2af880u;

    // 0x2af880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2af880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2af884: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2af884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2af888: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2af888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2af88c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2af88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2af890: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2af890u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af894: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2af894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2af898: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2af898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2af89c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2af89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2af8a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af8a4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2af8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2af8a8: 0x8e740024  lw          $s4, 0x24($s3)
    ctx->pc = 0x2af8a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2af8ac: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x2af8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2af8b0: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2AF8B0u;
    {
        const bool branch_taken_0x2af8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8B0u;
        // 0x2af8b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af8b0) {
            ctx->pc = 0x2AF9ECu;
            goto label_2af9ec;
        }
    }
    ctx->pc = 0x2AF8B8u;
    // 0x2af8b8: 0x96620020  lhu         $v0, 0x20($s3)
    ctx->pc = 0x2af8b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2af8bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af8c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af8c4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2af8c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af8c8: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x2AF8C8u;
    {
        const bool branch_taken_0x2af8c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8C8u;
        // 0x2af8cc: 0x3415ffff  ori         $s5, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af8c8) {
            ctx->pc = 0x2AF9ECu;
            goto label_2af9ec;
        }
    }
    ctx->pc = 0x2AF8D0u;
    // 0x2af8d0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2af8d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af8d4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2af8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2af8d8:
    // 0x2af8d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2af8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8dc: 0x94e20054  lhu         $v0, 0x54($a3)
    ctx->pc = 0x2af8dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x2af8e0: 0x10550002  beq         $v0, $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF8E0u;
    {
        const bool branch_taken_0x2af8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2AF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8E0u;
        // 0x2af8e4: 0x24e30058  addiu       $v1, $a3, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af8e0) {
            ctx->pc = 0x2AF8ECu;
            goto label_2af8ec;
        }
    }
    ctx->pc = 0x2AF8E8u;
    // 0x2af8e8: 0x8ce40050  lw          $a0, 0x50($a3)
    ctx->pc = 0x2af8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_2af8ec:
    // 0x2af8ec: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2af8ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2af8f0: 0x10550002  beq         $v0, $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF8F0u;
    {
        const bool branch_taken_0x2af8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2AF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8F0u;
        // 0x2af8f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af8f0) {
            ctx->pc = 0x2AF8FCu;
            goto label_2af8fc;
        }
    }
    ctx->pc = 0x2AF8F8u;
    // 0x2af8f8: 0x8ce30058  lw          $v1, 0x58($a3)
    ctx->pc = 0x2af8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
label_2af8fc:
    // 0x2af8fc: 0x14930003  bne         $a0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF8FCu;
    {
        const bool branch_taken_0x2af8fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x2AF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8FCu;
        // 0x2af900: 0x731026  xor         $v0, $v1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af8fc) {
            ctx->pc = 0x2AF90Cu;
            goto label_2af90c;
        }
    }
    ctx->pc = 0x2AF904u;
    // 0x2af904: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF904u;
    {
        const bool branch_taken_0x2af904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF904u;
        // 0x2af908: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af904) {
            ctx->pc = 0x2AF910u;
            goto label_2af910;
        }
    }
    ctx->pc = 0x2AF90Cu;
label_2af90c:
    // 0x2af90c: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x2af90cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
label_2af910:
    // 0x2af910: 0x5220002a  beql        $s1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x2AF910u;
    {
        const bool branch_taken_0x2af910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af910) {
            ctx->pc = 0x2AF914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF910u;
            // 0x2af914: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF9BCu;
            goto label_2af9bc;
        }
    }
    ctx->pc = 0x2AF918u;
    // 0x2af918: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2af918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2af91c: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2AF91Cu;
    {
        const bool branch_taken_0x2af91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af91c) {
            ctx->pc = 0x2AF920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF91Cu;
            // 0x2af920: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF9BCu;
            goto label_2af9bc;
        }
    }
    ctx->pc = 0x2AF924u;
    // 0x2af924: 0x96220020  lhu         $v0, 0x20($s1)
    ctx->pc = 0x2af924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2af928: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x2af928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x2af92c: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x2af92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2af930: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2af930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2af934: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2af934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af938: 0x562804  sllv        $a1, $s6, $v0
    ctx->pc = 0x2af938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 2) & 0x1F));
    // 0x2af93c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2af93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2af940: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af944: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2af944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2af948: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2AF948u;
    {
        const bool branch_taken_0x2af948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af948) {
            ctx->pc = 0x2AF94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF948u;
            // 0x2af94c: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF9BCu;
            goto label_2af9bc;
        }
    }
    ctx->pc = 0x2AF950u;
    // 0x2af950: 0x8e0600b8  lw          $a2, 0xB8($s0)
    ctx->pc = 0x2af950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2af954: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2af954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2af958: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2af958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af95c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AF95Cu;
    {
        const bool branch_taken_0x2af95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af95c) {
            ctx->pc = 0x2AF960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF95Cu;
            // 0x2af960: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF9E4u;
            goto label_2af9e4;
        }
    }
    ctx->pc = 0x2AF964u;
    // 0x2af964: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x2af964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2af968: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x2af968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2af96c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2af96cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2af970: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2AF970u;
    {
        const bool branch_taken_0x2af970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af970) {
            ctx->pc = 0x2AF974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF970u;
            // 0x2af974: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF9E4u;
            goto label_2af9e4;
        }
    }
    ctx->pc = 0x2AF978u;
    // 0x2af978: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x2af978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x2af97c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2af97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af980: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2af980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af984: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2af984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2af988: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AF988u;
    {
        const bool branch_taken_0x2af988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af988) {
            ctx->pc = 0x2AF98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF988u;
            // 0x2af98c: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF9E4u;
            goto label_2af9e4;
        }
    }
    ctx->pc = 0x2AF990u;
    // 0x2af990: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x2af990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2af994: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2af994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2af998: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2af998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2af99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af9a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2af9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9a8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2af9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2af9ac: 0xc0abdcc  jal         func_2AF730
    ctx->pc = 0x2AF9ACu;
    SET_GPR_U32(ctx, 31, 0x2AF9B4u);
    ctx->pc = 0x2AF9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF9ACu;
    // 0x2af9b0: 0xae0600b8  sw          $a2, 0xB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AF730u, 0x2AF9ACu, 0x2AF9B4u)) {
        return;
    }
    ctx->pc = 0x2AF9B4u;
label_2af9b4:
    // 0x2af9b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2AF9B4u;
    {
        const bool branch_taken_0x2af9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF9B4u;
        // 0x2af9b8: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af9b4) {
            ctx->pc = 0x2AF9E4u;
            goto label_2af9e4;
        }
    }
    ctx->pc = 0x2AF9BCu;
label_2af9bc:
    // 0x2af9bc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2af9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2af9c0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2af9c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af9c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF9C4u;
    {
        const bool branch_taken_0x2af9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF9C4u;
        // 0x2af9c8: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af9c4) {
            ctx->pc = 0x2AF9E0u;
            goto label_2af9e0;
        }
    }
    ctx->pc = 0x2AF9CCu;
    // 0x2af9cc: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x2af9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2af9d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2af9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2af9d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af9d8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2af9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2af9dc: 0xae0400b8  sw          $a0, 0xB8($s0)
    ctx->pc = 0x2af9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 4));
label_2af9e0:
    // 0x2af9e0: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x2af9e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2af9e4:
    // 0x2af9e4: 0x5640ffbc  bnel        $s2, $zero, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2AF9E4u;
    {
        const bool branch_taken_0x2af9e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af9e4) {
            ctx->pc = 0x2AF9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF9E4u;
            // 0x2af9e8: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af8d8;
        }
    }
    ctx->pc = 0x2AF9ECu;
label_2af9ec:
    // 0x2af9ec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2af9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2af9f0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2af9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2af9f4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2af9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2af9f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2af9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af9fc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2af9fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afa00: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2afa00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afa04: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2afa04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afa08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2afa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA0Cu;
        // 0x2afa10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFA14u;
    // 0x2afa14: 0x0  nop
    ctx->pc = 0x2afa14u;
    // NOP
    ctx->pc = 0x2afa18u;
}
