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

// Function: sub_002F4300
// Address: 0x2f4300 - 0x2f4430
void sub_002F4300_0x2f4300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4300_0x2f4300");
#endif

    switch (ctx->pc) {
        case 0x2f4368u: goto label_2f4368;
        case 0x2f4378u: goto label_2f4378;
        case 0x2f4390u: goto label_2f4390;
        case 0x2f43c8u: goto label_2f43c8;
        default: break;
    }

    ctx->pc = 0x2f4300u;

    // 0x2f4300: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f4300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2f4304: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f4304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f4308: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f4308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f430c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2f430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2f4310: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2f4310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4314: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2f4314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2f4318: 0x245ec880  addiu       $fp, $v0, -0x3780
    ctx->pc = 0x2f4318u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
    // 0x2f431c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f431cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f4320: 0x3c178101  lui         $s7, 0x8101
    ctx->pc = 0x2f4320u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4324: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f4324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f4328: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x2f4328u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x2f432c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f4330: 0x3c157fff  lui         $s5, 0x7FFF
    ctx->pc = 0x2f4330u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32767 << 16));
    // 0x2f4334: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f4334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f4338: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f4338u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f433c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f433cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f4340: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f4340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f4344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f4348: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f4348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f434c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f434cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2f4350: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f4350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4354: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2f4354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2f4358: 0x36f7006f  ori         $s7, $s7, 0x6F
    ctx->pc = 0x2f4358u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)111);
    // 0x2f435c: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x2f435cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x2f4360: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x2f4360u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x2f4364: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f4368:
    // 0x2f4368: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2f4368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f436c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f436cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4370: 0xc0bdb5e  jal         func_2F6D78
    ctx->pc = 0x2F4370u;
    SET_GPR_U32(ctx, 31, 0x2F4378u);
    ctx->pc = 0x2F4374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4370u;
    // 0x2f4374: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D78u, 0x2F4370u, 0x2F4378u)) {
        return;
    }
    ctx->pc = 0x2F4378u;
label_2f4378:
    // 0x2f4378: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4378u;
    {
        const bool branch_taken_0x2f4378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4378u;
        // 0x2f437c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4378) {
            ctx->pc = 0x2F438Cu;
            goto label_2f438c;
        }
    }
    ctx->pc = 0x2F4380u;
    // 0x2f4380: 0xae770000  sw          $s7, 0x0($s3)
    ctx->pc = 0x2f4380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
    // 0x2f4384: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2F4384u;
    {
        const bool branch_taken_0x2f4384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4384u;
        // 0x2f4388: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4384) {
            ctx->pc = 0x2F43FCu;
            goto label_2f43fc;
        }
    }
    ctx->pc = 0x2F438Cu;
label_2f438c:
    // 0x2f438c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f438cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f4390:
    // 0x2f4390: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2f4390u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f4394: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2f4394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f4398: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2f4398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2f439c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2f439cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2f43a0: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F43A0u;
    {
        const bool branch_taken_0x2f43a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43A0u;
        // 0x2f43a4: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43a0) {
            ctx->pc = 0x2F43ECu;
            goto label_2f43ec;
        }
    }
    ctx->pc = 0x2F43A8u;
    // 0x2f43a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f43a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f43ac: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2f43acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f43b0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F43B0u;
    {
        const bool branch_taken_0x2f43b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43B0u;
        // 0x2f43b4: 0x24840200  addiu       $a0, $a0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43b0) {
            ctx->pc = 0x2F4390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4390;
        }
    }
    ctx->pc = 0x2F43B8u;
    // 0x2f43b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f43b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f43bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f43bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f43c0: 0xc0bc95c  jal         func_2F2570
    ctx->pc = 0x2F43C0u;
    SET_GPR_U32(ctx, 31, 0x2F43C8u);
    ctx->pc = 0x2F43C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F43C0u;
    // 0x2f43c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2570u, 0x2F43C0u, 0x2F43C8u)) {
        return;
    }
    ctx->pc = 0x2F43C8u;
label_2f43c8:
    // 0x2f43c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f43cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F43CCu;
    {
        const bool branch_taken_0x2f43cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43CCu;
        // 0x2f43d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43cc) {
            ctx->pc = 0x2F43DCu;
            goto label_2f43dc;
        }
    }
    ctx->pc = 0x2F43D4u;
    // 0x2f43d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F43D4u;
    {
        const bool branch_taken_0x2f43d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43D4u;
        // 0x2f43d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43d4) {
            ctx->pc = 0x2F43FCu;
            goto label_2f43fc;
        }
    }
    ctx->pc = 0x2F43DCu;
label_2f43dc:
    // 0x2f43dc: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F43DCu;
    {
        const bool branch_taken_0x2f43dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x2F43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43DCu;
        // 0x2f43e0: 0x2158024  and         $s0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43dc) {
            ctx->pc = 0x2F43F8u;
            goto label_2f43f8;
        }
    }
    ctx->pc = 0x2F43E4u;
    // 0x2f43e4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x2F43E4u;
    {
        const bool branch_taken_0x2f43e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43E4u;
        // 0x2f43e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43e4) {
            ctx->pc = 0x2F4368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4368;
        }
    }
    ctx->pc = 0x2F43ECu;
label_2f43ec:
    // 0x2f43ec: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2f43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f43f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F43F0u;
    {
        const bool branch_taken_0x2f43f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43F0u;
        // 0x2f43f4: 0x225100b  movn        $v0, $s1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43f0) {
            ctx->pc = 0x2F43FCu;
            goto label_2f43fc;
        }
    }
    ctx->pc = 0x2F43F8u;
label_2f43f8:
    // 0x2f43f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f43f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f43fc:
    // 0x2f43fc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f43fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f4400: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2f4400u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f4404: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2f4404u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f4408: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2f4408u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f440c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f440cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f4410: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f4410u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f4414: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f4414u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f4418: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f4418u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f441c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f441cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f4420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4424: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4424u;
        // 0x2f4428: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F442Cu;
    // 0x2f442c: 0x0  nop
    ctx->pc = 0x2f442cu;
    // NOP
    ctx->pc = 0x2f4430u;
}
