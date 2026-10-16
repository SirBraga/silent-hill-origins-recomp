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

// Function: sub_002A3780
// Address: 0x2a3780 - 0x2a3958
void sub_002A3780_0x2a3780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3780_0x2a3780");
#endif

    switch (ctx->pc) {
        case 0x2a3808u: goto label_2a3808;
        case 0x2a3854u: goto label_2a3854;
        case 0x2a3868u: goto label_2a3868;
        case 0x2a38b4u: goto label_2a38b4;
        case 0x2a3900u: goto label_2a3900;
        case 0x2a3924u: goto label_2a3924;
        default: break;
    }

    ctx->pc = 0x2a3780u;

    // 0x2a3780: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a3780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a3784: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a3784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a3788: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a3788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a378c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2a378cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3790: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2a3790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2a3794: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a3794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3798: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2a3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2a379c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a379cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a37a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a37a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a37a4: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2a37a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a37a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a37a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a37ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a37acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a37b0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a37b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a37b4: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2a37b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a37b8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A37B8u;
    {
        const bool branch_taken_0x2a37b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37B8u;
        // 0x2a37bc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37b8) {
            ctx->pc = 0x2A37C8u;
            goto label_2a37c8;
        }
    }
    ctx->pc = 0x2A37C0u;
    // 0x2a37c0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2A37C0u;
    {
        const bool branch_taken_0x2a37c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37C0u;
        // 0x2a37c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37c0) {
            ctx->pc = 0x2A392Cu;
            goto label_2a392c;
        }
    }
    ctx->pc = 0x2A37C8u;
label_2a37c8:
    // 0x2a37c8: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x2a37c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2a37cc: 0x24040a00  addiu       $a0, $zero, 0xA00
    ctx->pc = 0x2a37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x2a37d0: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2a37d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2a37d4: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x2a37d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a37d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a37d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a37dc: 0x30420a00  andi        $v0, $v0, 0xA00
    ctx->pc = 0x2a37dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2560);
    // 0x2a37e0: 0x14440011  bne         $v0, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A37E0u;
    {
        const bool branch_taken_0x2a37e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37E0u;
        // 0x2a37e4: 0x658023  subu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37e0) {
            ctx->pc = 0x2A3828u;
            goto label_2a3828;
        }
    }
    ctx->pc = 0x2A37E8u;
    // 0x2a37e8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2a37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2a37ec: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x2a37ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a37f0: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x2a37f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2a37f4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A37F4u;
    {
        const bool branch_taken_0x2a37f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37F4u;
        // 0x2a37f8: 0x2b41821  addu        $v1, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37f4) {
            ctx->pc = 0x2A3828u;
            goto label_2a3828;
        }
    }
    ctx->pc = 0x2A37FCu;
    // 0x2a37fc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2a37fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a3800: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x2a3800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a3804: 0x0  nop
    ctx->pc = 0x2a3804u;
    // NOP
label_2a3808:
    // 0x2a3808: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3808u;
    {
        const bool branch_taken_0x2a3808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3808u;
        // 0x2a380c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3808) {
            ctx->pc = 0x2A3828u;
            goto label_2a3828;
        }
    }
    ctx->pc = 0x2A3810u;
    // 0x2a3810: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2a3810u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a3814: 0x1444fffc  bne         $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2A3814u;
    {
        const bool branch_taken_0x2a3814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3814u;
        // 0x2a3818: 0x223102b  sltu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3814) {
            ctx->pc = 0x2A3808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3808;
        }
    }
    ctx->pc = 0x2A381Cu;
    // 0x2a381c: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x2a381cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2a3820: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2a3820u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3824: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2a3824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3828:
    // 0x2a3828: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A3828u;
    {
        const bool branch_taken_0x2a3828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3828u;
        // 0x2a382c: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3828) {
            ctx->pc = 0x2A389Cu;
            goto label_2a389c;
        }
    }
    ctx->pc = 0x2A3830u;
    // 0x2a3830: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x2a3830u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20));
    // 0x2a3834: 0x2e030015  sltiu       $v1, $s0, 0x15
    ctx->pc = 0x2a3834u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x2a3838: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3838u;
    {
        const bool branch_taken_0x2a3838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3838u;
        // 0x2a383c: 0x2603ffff  addiu       $v1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3838) {
            ctx->pc = 0x2A385Cu;
            goto label_2a385c;
        }
    }
    ctx->pc = 0x2A3840u;
    // 0x2a3840: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a3840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3844: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a3844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3848: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a3848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a384c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2A384Cu;
    SET_GPR_U32(ctx, 31, 0x2A3854u);
    ctx->pc = 0x2A3850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A384Cu;
    // 0x2a3850: 0x230a821  addu        $s5, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2A384Cu, 0x2A3854u)) {
        return;
    }
    ctx->pc = 0x2A3854u;
label_2a3854:
    // 0x2a3854: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A3854u;
    {
        const bool branch_taken_0x2a3854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3854u;
        // 0x2a3858: 0x8e650014  lw          $a1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3854) {
            ctx->pc = 0x2A388Cu;
            goto label_2a388c;
        }
    }
    ctx->pc = 0x2A385Cu;
label_2a385c:
    // 0x2a385c: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2A385Cu;
    {
        const bool branch_taken_0x2a385c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2A3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A385Cu;
        // 0x2a3860: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a385c) {
            ctx->pc = 0x2A388Cu;
            goto label_2a388c;
        }
    }
    ctx->pc = 0x2A3864u;
    // 0x2a3864: 0x2903023  subu        $a2, $s4, $s0
    ctx->pc = 0x2a3864u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_2a3868:
    // 0x2a3868: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x2a3868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2a386c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a386cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a3870: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a3870u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a3874: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a3874u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3878: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a3878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a387c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A387Cu;
    {
        const bool branch_taken_0x2a387c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2a387c) {
            ctx->pc = 0x2A3868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3868;
        }
    }
    ctx->pc = 0x2A3884u;
    // 0x2a3884: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3884u;
    {
        const bool branch_taken_0x2a3884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3884u;
        // 0x2a3888: 0x8e650014  lw          $a1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3884) {
            ctx->pc = 0x2A3890u;
            goto label_2a3890;
        }
    }
    ctx->pc = 0x2A388Cu;
label_2a388c:
    // 0x2a388c: 0x2903023  subu        $a2, $s4, $s0
    ctx->pc = 0x2a388cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_2a3890:
    // 0x2a3890: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x2a3890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2a3894: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a3894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3898: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2a3898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2a389c:
    // 0x2a389c: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x2a389cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x2a38a0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A38A0u;
    {
        const bool branch_taken_0x2a38a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A38A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38A0u;
        // 0x2a38a4: 0x2921023  subu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38a0) {
            ctx->pc = 0x2A392Cu;
            goto label_2a392c;
        }
    }
    ctx->pc = 0x2A38A8u;
    // 0x2a38a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a38a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a38ac: 0xc0a7202  jal         func_29C808
    ctx->pc = 0x2A38ACu;
    SET_GPR_U32(ctx, 31, 0x2A38B4u);
    ctx->pc = 0x2A38B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A38ACu;
    // 0x2a38b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C808u, 0x2A38ACu, 0x2A38B4u)) {
        return;
    }
    ctx->pc = 0x2A38B4u;
label_2a38b4:
    // 0x2a38b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a38b8: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A38B8u;
    {
        const bool branch_taken_0x2a38b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38B8u;
        // 0x2a38bc: 0x2921023  subu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38b8) {
            ctx->pc = 0x2A392Cu;
            goto label_2a392c;
        }
    }
    ctx->pc = 0x2A38C0u;
    // 0x2a38c0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2a38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2a38c4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x2a38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2a38c8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2a38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a38cc: 0x2c640080  sltiu       $a0, $v1, 0x80
    ctx->pc = 0x2a38ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2a38d0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A38D0u;
    {
        const bool branch_taken_0x2a38d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38D0u;
        // 0x2a38d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38d0) {
            ctx->pc = 0x2A38ECu;
            goto label_2a38ec;
        }
    }
    ctx->pc = 0x2A38D8u;
    // 0x2a38d8: 0x243001b  divu        $zero, $s2, $v1
    ctx->pc = 0x2a38d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x2a38dc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A38DCu;
    {
        const bool branch_taken_0x2a38dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a38dc) {
            ctx->pc = 0x2A38E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A38DCu;
            // 0x2a38e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A38E4u;
            goto label_2a38e4;
        }
    }
    ctx->pc = 0x2A38E4u;
label_2a38e4:
    // 0x2a38e4: 0x1010  mfhi        $v0
    ctx->pc = 0x2a38e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2a38e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a38e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a38ec:
    // 0x2a38ec: 0x2518023  subu        $s0, $s2, $s1
    ctx->pc = 0x2a38ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2a38f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a38f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a38f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a38f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a38f8: 0xc0a8ba6  jal         func_2A2E98
    ctx->pc = 0x2A38F8u;
    SET_GPR_U32(ctx, 31, 0x2A3900u);
    ctx->pc = 0x2A38FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A38F8u;
    // 0x2a38fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2E98u, 0x2A38F8u, 0x2A3900u)) {
        return;
    }
    ctx->pc = 0x2A3900u;
label_2a3900:
    // 0x2a3900: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a3900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3904: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3904u;
    {
        const bool branch_taken_0x2a3904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3904u;
        // 0x2a3908: 0x2921023  subu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3904) {
            ctx->pc = 0x2A392Cu;
            goto label_2a392c;
        }
    }
    ctx->pc = 0x2A390Cu;
    // 0x2a390c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2a390cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3910: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3910u;
    {
        const bool branch_taken_0x2a3910 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3910u;
        // 0x2a3914: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3910) {
            ctx->pc = 0x2A3928u;
            goto label_2a3928;
        }
    }
    ctx->pc = 0x2A3918u;
    // 0x2a3918: 0x2b02821  addu        $a1, $s5, $s0
    ctx->pc = 0x2a3918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2a391c: 0xc0a7332  jal         func_29CCC8
    ctx->pc = 0x2A391Cu;
    SET_GPR_U32(ctx, 31, 0x2A3924u);
    ctx->pc = 0x2A3920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A391Cu;
    // 0x2a3920: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CCC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CCC8u, 0x2A391Cu, 0x2A3924u)) {
        return;
    }
    ctx->pc = 0x2A3924u;
label_2a3924:
    // 0x2a3924: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x2a3924u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2a3928:
    // 0x2a3928: 0x2921023  subu        $v0, $s4, $s2
    ctx->pc = 0x2a3928u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_2a392c:
    // 0x2a392c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a392cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a3930: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a3930u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a3934: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a3934u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3938: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a3938u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a393c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a393cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a3940: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a3940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3944: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a3944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a394c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A394Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A394Cu;
        // 0x2a3950: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A394Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3954u;
    // 0x2a3954: 0x0  nop
    ctx->pc = 0x2a3954u;
    // NOP
    ctx->pc = 0x2a3958u;
}
