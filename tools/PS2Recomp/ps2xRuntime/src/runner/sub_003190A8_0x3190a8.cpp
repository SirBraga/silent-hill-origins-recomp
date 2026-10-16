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

// Function: sub_003190A8
// Address: 0x3190a8 - 0x319258
void sub_003190A8_0x3190a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003190A8_0x3190a8");
#endif

    switch (ctx->pc) {
        case 0x319138u: goto label_319138;
        case 0x3191c8u: goto label_3191c8;
        case 0x319230u: goto label_319230;
        default: break;
    }

    ctx->pc = 0x3190a8u;

    // 0x3190a8: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x3190a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3190ac: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3190acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3190b0: 0x24430019  addiu       $v1, $v0, 0x19
    ctx->pc = 0x3190b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x3190b4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3190b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x3190b8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x3190b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x3190bc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3190bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3190c0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3190c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3190c4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3190c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190c8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3190c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3190cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3190ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3190d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3190d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3190d4: 0x2450000a  addiu       $s0, $v0, 0xA
    ctx->pc = 0x3190d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x3190d8: 0x3a3e823  subu        $sp, $sp, $v1
    ctx->pc = 0x3190d8u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3190dc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3190dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190e0: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x3190e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x3190e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3190e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3190e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190ec: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3190ECu;
    {
        const bool branch_taken_0x3190ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3190F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190ECu;
        // 0x3190f0: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3190ec) {
            ctx->pc = 0x319104u;
            goto label_319104;
        }
    }
    ctx->pc = 0x3190F4u;
    // 0x3190f4: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3190F4u;
    {
        const bool branch_taken_0x3190f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3190F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190F4u;
        // 0x3190f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3190f4) {
            ctx->pc = 0x319238u;
            goto label_319238;
        }
    }
    ctx->pc = 0x3190FCu;
    // 0x3190fc: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3190FCu;
    {
        const bool branch_taken_0x3190fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x319100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190FCu;
        // 0x319100: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3190fc) {
            ctx->pc = 0x31910Cu;
            goto label_31910c;
        }
    }
    ctx->pc = 0x319104u;
label_319104:
    // 0x319104: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x319104u;
    {
        const bool branch_taken_0x319104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319104u;
        // 0x319108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319104) {
            ctx->pc = 0x319238u;
            goto label_319238;
        }
    }
    ctx->pc = 0x31910Cu;
label_31910c:
    // 0x31910c: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x31910cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x319110: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x319110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x319114: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x319114u;
    {
        const bool branch_taken_0x319114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319114u;
        // 0x319118: 0xafc60004  sw          $a2, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319114) {
            ctx->pc = 0x319194u;
            goto label_319194;
        }
    }
    ctx->pc = 0x31911Cu;
    // 0x31911c: 0x240d0045  addiu       $t5, $zero, 0x45
    ctx->pc = 0x31911cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x319120: 0x240c002e  addiu       $t4, $zero, 0x2E
    ctx->pc = 0x319120u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x319124: 0x240b0065  addiu       $t3, $zero, 0x65
    ctx->pc = 0x319124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x319128: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x319128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31912c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x31912cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x319130: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x319130u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x319134: 0x0  nop
    ctx->pc = 0x319134u;
    // NOP
label_319138:
    // 0x319138: 0x106d000f  beq         $v1, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x319138u;
    {
        const bool branch_taken_0x319138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        ctx->pc = 0x31913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319138u;
        // 0x31913c: 0x28620046  slti        $v0, $v1, 0x46 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319138) {
            ctx->pc = 0x319178u;
            goto label_319178;
        }
    }
    ctx->pc = 0x319140u;
    // 0x319140: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x319140u;
    {
        const bool branch_taken_0x319140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319140) {
            ctx->pc = 0x319158u;
            goto label_319158;
        }
    }
    ctx->pc = 0x319148u;
    // 0x319148: 0x106c0007  beq         $v1, $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x319148u;
    {
        const bool branch_taken_0x319148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x31914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319148u;
        // 0x31914c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319148) {
            ctx->pc = 0x319168u;
            goto label_319168;
        }
    }
    ctx->pc = 0x319150u;
    // 0x319150: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x319150u;
    {
        const bool branch_taken_0x319150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319150u;
        // 0x319154: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319150) {
            ctx->pc = 0x319180u;
            goto label_319180;
        }
    }
    ctx->pc = 0x319158u;
label_319158:
    // 0x319158: 0x506b0008  beql        $v1, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x319158u;
    {
        const bool branch_taken_0x319158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x319158) {
            ctx->pc = 0x31915Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319158u;
            // 0x31915c: 0xafc90000  sw          $t1, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31917Cu;
            goto label_31917c;
        }
    }
    ctx->pc = 0x319160u;
    // 0x319160: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x319160u;
    {
        const bool branch_taken_0x319160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319160u;
        // 0x319164: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319160) {
            ctx->pc = 0x319180u;
            goto label_319180;
        }
    }
    ctx->pc = 0x319168u;
label_319168:
    // 0x319168: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x319168u;
    {
        const bool branch_taken_0x319168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319168u;
        // 0x31916c: 0xafc40004  sw          $a0, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319168) {
            ctx->pc = 0x31917Cu;
            goto label_31917c;
        }
    }
    ctx->pc = 0x319170u;
    // 0x319170: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x319170u;
    {
        const bool branch_taken_0x319170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319170u;
        // 0x319174: 0xafca0000  sw          $t2, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319170) {
            ctx->pc = 0x31917Cu;
            goto label_31917c;
        }
    }
    ctx->pc = 0x319178u;
label_319178:
    // 0x319178: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x319178u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
label_31917c:
    // 0x31917c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31917cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_319180:
    // 0x319180: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x319180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x319184: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319184u;
    {
        const bool branch_taken_0x319184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319184u;
        // 0x319188: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319184) {
            ctx->pc = 0x319194u;
            goto label_319194;
        }
    }
    ctx->pc = 0x31918Cu;
    // 0x31918c: 0x5449ffea  bnel        $v0, $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31918Cu;
    {
        const bool branch_taken_0x31918c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x31918c) {
            ctx->pc = 0x319190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31918Cu;
            // 0x319190: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319138;
        }
    }
    ctx->pc = 0x319194u;
label_319194:
    // 0x319194: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x319194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319198: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x319198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31919c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31919Cu;
    {
        const bool branch_taken_0x31919c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3191A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31919Cu;
        // 0x3191a0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31919c) {
            ctx->pc = 0x3191ACu;
            goto label_3191ac;
        }
    }
    ctx->pc = 0x3191A4u;
    // 0x3191a4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3191A4u;
    {
        const bool branch_taken_0x3191a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3191A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3191A4u;
        // 0x3191a8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191a4) {
            ctx->pc = 0x319238u;
            goto label_319238;
        }
    }
    ctx->pc = 0x3191ACu;
label_3191ac:
    // 0x3191ac: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3191acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3191b0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3191B0u;
    {
        const bool branch_taken_0x3191b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3191B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3191B0u;
        // 0x3191b4: 0x8fc90004  lw          $t1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191b0) {
            ctx->pc = 0x319214u;
            goto label_319214;
        }
    }
    ctx->pc = 0x3191B8u;
    // 0x3191b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3191b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3191bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3191bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3191c0: 0x240a002c  addiu       $t2, $zero, 0x2C
    ctx->pc = 0x3191c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3191c4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3191c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3191c8:
    // 0x3191c8: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x3191c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3191cc: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3191ccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3191d0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3191D0u;
    {
        const bool branch_taken_0x3191d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3191D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3191D0u;
        // 0x3191d4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191d0) {
            ctx->pc = 0x319204u;
            goto label_319204;
        }
    }
    ctx->pc = 0x3191D8u;
    // 0x3191d8: 0x106001a  div         $zero, $t0, $a2
    ctx->pc = 0x3191d8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3191dc: 0x50cb0001  beql        $a2, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x3191DCu;
    {
        const bool branch_taken_0x3191dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x3191dc) {
            ctx->pc = 0x3191E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3191DCu;
            // 0x3191e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3191E4u;
            goto label_3191e4;
        }
    }
    ctx->pc = 0x3191E4u;
label_3191e4:
    // 0x3191e4: 0x1010  mfhi        $v0
    ctx->pc = 0x3191e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3191e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3191E8u;
    {
        const bool branch_taken_0x3191e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3191e8) {
            ctx->pc = 0x3191ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3191E8u;
            // 0x3191ec: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319204u;
            goto label_319204;
        }
    }
    ctx->pc = 0x3191F0u;
    // 0x3191f0: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3191F0u;
    {
        const bool branch_taken_0x3191f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3191F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3191F0u;
        // 0x3191f4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191f0) {
            ctx->pc = 0x319204u;
            goto label_319204;
        }
    }
    ctx->pc = 0x3191F8u;
    // 0x3191f8: 0xa0ea0000  sb          $t2, 0x0($a3)
    ctx->pc = 0x3191f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x3191fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3191fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x319200: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x319200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_319204:
    // 0x319204: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x319204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x319208: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x319208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31920c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x31920Cu;
    {
        const bool branch_taken_0x31920c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31920c) {
            ctx->pc = 0x319210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31920Cu;
            // 0x319210: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3191C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3191c8;
        }
    }
    ctx->pc = 0x319214u;
label_319214:
    // 0x319214: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x319214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x319218: 0x2610fff6  addiu       $s0, $s0, -0xA
    ctx->pc = 0x319218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
    // 0x31921c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x31921cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x319220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319224: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x319224u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x319228: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319228u;
    SET_GPR_U32(ctx, 31, 0x319230u);
    ctx->pc = 0x31922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319228u;
    // 0x31922c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319228u, 0x319230u)) {
        return;
    }
    ctx->pc = 0x319230u;
label_319230:
    // 0x319230: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x319230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x319234: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x319234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_319238:
    // 0x319238: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319238u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31923c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31923cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x319240: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x319240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x319244: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x319244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x319248: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x319248u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31924c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31924cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x319250: 0x3e00008  jr          $ra
    ctx->pc = 0x319250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319250u;
        // 0x319254: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319258u;
}
