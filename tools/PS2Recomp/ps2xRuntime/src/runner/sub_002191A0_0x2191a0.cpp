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

// Function: sub_002191A0
// Address: 0x2191a0 - 0x219350
void sub_002191A0_0x2191a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002191A0_0x2191a0");
#endif

    switch (ctx->pc) {
        case 0x2191fcu: goto label_2191fc;
        case 0x219220u: goto label_219220;
        case 0x219234u: goto label_219234;
        case 0x2192a0u: goto label_2192a0;
        default: break;
    }

    ctx->pc = 0x2191a0u;

label_2191a0:
    // 0x2191a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2191a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2191a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2191a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2191a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2191a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2191ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2191acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2191b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2191b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2191b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2191b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2191bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2191bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2191c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2191c4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2191C4u;
    {
        const bool branch_taken_0x2191c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2191C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191C4u;
        // 0x2191c8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191c4) {
            ctx->pc = 0x2191D8u;
            goto label_2191d8;
        }
    }
    ctx->pc = 0x2191CCu;
    // 0x2191cc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x2191ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2191d0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2191D0u;
    {
        const bool branch_taken_0x2191d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191D0u;
        // 0x2191d4: 0xa6600000  sh          $zero, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191d0) {
            ctx->pc = 0x219330u;
            goto label_219330;
        }
    }
    ctx->pc = 0x2191D8u;
label_2191d8:
    // 0x2191d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2191d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2191dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2191dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2191e0: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2191E0u;
    {
        const bool branch_taken_0x2191e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2191e0) {
            ctx->pc = 0x2191E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2191E0u;
            // 0x2191e4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219204u;
            goto label_219204;
        }
    }
    ctx->pc = 0x2191E8u;
    // 0x2191e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2191e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2191ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2191f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191f4: 0xc08640a  jal         func_219028
    ctx->pc = 0x2191F4u;
    SET_GPR_U32(ctx, 31, 0x2191FCu);
    ctx->pc = 0x2191F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191F4u;
    // 0x2191f8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x219028u, 0x2191F4u, 0x2191FCu)) {
        return;
    }
    ctx->pc = 0x2191FCu;
label_2191fc:
    // 0x2191fc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2191FCu;
    {
        const bool branch_taken_0x2191fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191FCu;
        // 0x219200: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191fc) {
            ctx->pc = 0x219334u;
            goto label_219334;
        }
    }
    ctx->pc = 0x219204u;
label_219204:
    // 0x219204: 0x37a60003  ori         $a2, $sp, 0x3
    ctx->pc = 0x219204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)3);
    // 0x219208: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x219208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21920c: 0x37a70006  ori         $a3, $sp, 0x6
    ctx->pc = 0x21920cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)6);
    // 0x219210: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x219210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x219214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219218: 0xc086468  jal         func_2191A0
    ctx->pc = 0x219218u;
    SET_GPR_U32(ctx, 31, 0x219220u);
    ctx->pc = 0x21921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219218u;
    // 0x21921c: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2191A0u;
    goto label_2191a0;
    ctx->pc = 0x219220u;
label_219220:
    // 0x219220: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x219220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x219224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219228: 0x37a60002  ori         $a2, $sp, 0x2
    ctx->pc = 0x219228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    // 0x21922c: 0xc086468  jal         func_2191A0
    ctx->pc = 0x21922Cu;
    SET_GPR_U32(ctx, 31, 0x219234u);
    ctx->pc = 0x219230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21922Cu;
    // 0x219230: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2191A0u;
    goto label_2191a0;
    ctx->pc = 0x219234u;
label_219234:
    // 0x219234: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x219234u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x219238: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x219238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x21923c: 0x54440008  bnel        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21923Cu;
    {
        const bool branch_taken_0x21923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21923c) {
            ctx->pc = 0x219240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21923Cu;
            // 0x219240: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219260u;
            goto label_219260;
        }
    }
    ctx->pc = 0x219244u;
    // 0x219244: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x219244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x219248: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x219248u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21924c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21924Cu;
    {
        const bool branch_taken_0x21924c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21924c) {
            ctx->pc = 0x219250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21924Cu;
            // 0x219250: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219260u;
            goto label_219260;
        }
    }
    ctx->pc = 0x219254u;
    // 0x219254: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x219254u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x219258: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x219258u;
    {
        const bool branch_taken_0x219258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219258u;
        // 0x21925c: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219258) {
            ctx->pc = 0x219330u;
            goto label_219330;
        }
    }
    ctx->pc = 0x219260u;
label_219260:
    // 0x219260: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x219260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219264: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x219264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x219268: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x219268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x21926c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x21926cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x219270: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x219270u;
    {
        const bool branch_taken_0x219270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219270u;
        // 0x219274: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219270) {
            ctx->pc = 0x2192FCu;
            goto label_2192fc;
        }
    }
    ctx->pc = 0x219278u;
    // 0x219278: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x219278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x21927c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x21927cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219280: 0x97a40004  lhu         $a0, 0x4($sp)
    ctx->pc = 0x219280u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x219284: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x219284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x219288: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x219288u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21928c: 0x97a80000  lhu         $t0, 0x0($sp)
    ctx->pc = 0x21928cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219290: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x219290u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219294: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x219294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219298: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x219298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x21929c: 0x0  nop
    ctx->pc = 0x21929cu;
    // NOP
label_2192a0:
    // 0x2192a0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2192a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2192a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2192a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2192a8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2192a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2192ac: 0x5488000e  bnel        $a0, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x2192ACu;
    {
        const bool branch_taken_0x2192ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x2192ac) {
            ctx->pc = 0x2192B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2192ACu;
            // 0x2192b0: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2192E8u;
            goto label_2192e8;
        }
    }
    ctx->pc = 0x2192B4u;
    // 0x2192b4: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2192b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2192b8: 0x544b000b  bnel        $v0, $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x2192B8u;
    {
        const bool branch_taken_0x2192b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x2192b8) {
            ctx->pc = 0x2192BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2192B8u;
            // 0x2192bc: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2192E8u;
            goto label_2192e8;
        }
    }
    ctx->pc = 0x2192C0u;
    // 0x2192c0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x2192c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2192c4: 0x544a0008  bnel        $v0, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2192C4u;
    {
        const bool branch_taken_0x2192c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x2192c4) {
            ctx->pc = 0x2192C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2192C4u;
            // 0x2192c8: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2192E8u;
            goto label_2192e8;
        }
    }
    ctx->pc = 0x2192CCu;
    // 0x2192cc: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2192ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2192d0: 0x54490005  bnel        $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2192D0u;
    {
        const bool branch_taken_0x2192d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x2192d0) {
            ctx->pc = 0x2192D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2192D0u;
            // 0x2192d4: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2192E8u;
            goto label_2192e8;
        }
    }
    ctx->pc = 0x2192D8u;
    // 0x2192d8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2192d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2192dc: 0x50470014  beql        $v0, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2192DCu;
    {
        const bool branch_taken_0x2192dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2192dc) {
            ctx->pc = 0x2192E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2192DCu;
            // 0x2192e0: 0xa6660000  sh          $a2, 0x0($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219330u;
            goto label_219330;
        }
    }
    ctx->pc = 0x2192E4u;
    // 0x2192e4: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x2192e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2192e8:
    // 0x2192e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2192e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2192ec: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x2192ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2192f0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2192f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2192f4: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2192F4u;
    {
        const bool branch_taken_0x2192f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2192f4) {
            ctx->pc = 0x2192F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2192F4u;
            // 0x2192f8: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2192A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2192a0;
        }
    }
    ctx->pc = 0x2192FCu;
label_2192fc:
    // 0x2192fc: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x2192fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x219300: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x219300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x219304: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x219304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x219308: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x219308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x21930c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x21930cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x219310: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x219310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x219314: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x219314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x219318: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x219318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21931c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x21931cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x219320: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x219320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x219324: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x219324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219328: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x219328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21932c: 0xa6650000  sh          $a1, 0x0($s3)
    ctx->pc = 0x21932cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 5));
label_219330:
    // 0x219330: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x219330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_219334:
    // 0x219334: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x219334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219338: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x219338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21933c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x21933cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219344: 0x3e00008  jr          $ra
    ctx->pc = 0x219344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219344u;
        // 0x219348: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21934Cu;
    // 0x21934c: 0x0  nop
    ctx->pc = 0x21934cu;
    // NOP
    ctx->pc = 0x219350u;
}
