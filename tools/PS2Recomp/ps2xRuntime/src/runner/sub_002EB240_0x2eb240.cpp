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

// Function: sub_002EB240
// Address: 0x2eb240 - 0x2eb3b0
void sub_002EB240_0x2eb240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB240_0x2eb240");
#endif

    switch (ctx->pc) {
        case 0x2eb274u: goto label_2eb274;
        case 0x2eb2b8u: goto label_2eb2b8;
        case 0x2eb330u: goto label_2eb330;
        case 0x2eb38cu: goto label_2eb38c;
        default: break;
    }

    ctx->pc = 0x2eb240u;

    // 0x2eb240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2eb240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2eb244: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2eb244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2eb248: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2eb248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2eb24c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eb24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb250: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2eb250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2eb254: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2eb254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb258: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2eb258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2eb25c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2eb25cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb260: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2eb260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2eb264: 0x24130030  addiu       $s3, $zero, 0x30
    ctx->pc = 0x2eb264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2eb268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eb268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eb26c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2EB26Cu;
    SET_GPR_U32(ctx, 31, 0x2EB274u);
    ctx->pc = 0x2EB270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB26Cu;
    // 0x2eb270: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2EB26Cu, 0x2EB274u)) {
        return;
    }
    ctx->pc = 0x2EB274u;
label_2eb274:
    // 0x2eb274: 0x32100003  andi        $s0, $s0, 0x3
    ctx->pc = 0x2eb274u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x2eb278: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2eb278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2eb27c: 0x3a020002  xori        $v0, $s0, 0x2
    ctx->pc = 0x2eb27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
    // 0x2eb280: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2eb280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb284: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x2eb284u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x2eb288: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x2eb288u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x2eb28c: 0x70980a  movz        $s3, $v1, $s0
    ctx->pc = 0x2eb28cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
    // 0x2eb290: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2eb290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2eb294: 0x1240003b  beqz        $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x2EB294u;
    {
        const bool branch_taken_0x2eb294 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB294u;
        // 0x2eb298: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb294) {
            ctx->pc = 0x2EB384u;
            goto label_2eb384;
        }
    }
    ctx->pc = 0x2EB29Cu;
    // 0x2eb29c: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x2eb29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2eb2a0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EB2A0u;
    {
        const bool branch_taken_0x2eb2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2A0u;
        // 0x2eb2a4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2a0) {
            ctx->pc = 0x2EB314u;
            goto label_2eb314;
        }
    }
    ctx->pc = 0x2EB2A8u;
    // 0x2eb2a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2eb2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eb2ac: 0x2442e5c0  addiu       $v0, $v0, -0x1A40
    ctx->pc = 0x2eb2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960576));
    // 0x2eb2b0: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2eb2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eb2b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2eb2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2eb2b8:
    // 0x2eb2b8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EB2B8u;
    {
        const bool branch_taken_0x2eb2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb2b8) {
            ctx->pc = 0x2EB2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB2B8u;
            // 0x2eb2bc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB300u;
            goto label_2eb300;
        }
    }
    ctx->pc = 0x2EB2C0u;
    // 0x2eb2c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb2c4: 0x2c820018  sltiu       $v0, $a0, 0x18
    ctx->pc = 0x2eb2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x2eb2c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB2C8u;
    {
        const bool branch_taken_0x2eb2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2C8u;
        // 0x2eb2cc: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2c8) {
            ctx->pc = 0x2EB2E4u;
            goto label_2eb2e4;
        }
    }
    ctx->pc = 0x2EB2D0u;
    // 0x2eb2d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2eb2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eb2d4: 0x851804  sllv        $v1, $a1, $a0
    ctx->pc = 0x2eb2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x2eb2d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eb2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eb2dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB2DCu;
    {
        const bool branch_taken_0x2eb2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2DCu;
        // 0x2eb2e0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2dc) {
            ctx->pc = 0x2EB2F8u;
            goto label_2eb2f8;
        }
    }
    ctx->pc = 0x2EB2E4u;
label_2eb2e4:
    // 0x2eb2e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2eb2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2eb2e8: 0x2482ffe8  addiu       $v0, $a0, -0x18
    ctx->pc = 0x2eb2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    // 0x2eb2ec: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x2eb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x2eb2f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eb2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eb2f4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2eb2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_2eb2f8:
    // 0x2eb2f8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2eb2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2eb2fc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2eb2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2eb300:
    // 0x2eb300: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EB300u;
    {
        const bool branch_taken_0x2eb300 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB300u;
        // 0x2eb304: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb300) {
            ctx->pc = 0x2EB384u;
            goto label_2eb384;
        }
    }
    ctx->pc = 0x2EB308u;
    // 0x2eb308: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x2eb308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2eb30c: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2EB30Cu;
    {
        const bool branch_taken_0x2eb30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb30c) {
            ctx->pc = 0x2EB310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB30Cu;
            // 0x2eb310: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb2b8;
        }
    }
    ctx->pc = 0x2EB314u;
label_2eb314:
    // 0x2eb314: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EB314u;
    {
        const bool branch_taken_0x2eb314 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB314u;
        // 0x2eb318: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb314) {
            ctx->pc = 0x2EB384u;
            goto label_2eb384;
        }
    }
    ctx->pc = 0x2EB31Cu;
    // 0x2eb31c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb320: 0x2445e5c0  addiu       $a1, $v0, -0x1A40
    ctx->pc = 0x2eb320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960576));
    // 0x2eb324: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2eb324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb328: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2eb328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eb32c: 0x0  nop
    ctx->pc = 0x2eb32cu;
    // NOP
label_2eb330:
    // 0x2eb330: 0x861804  sllv        $v1, $a2, $a0
    ctx->pc = 0x2eb330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x2eb334: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eb338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB338u;
    {
        const bool branch_taken_0x2eb338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB338u;
        // 0x2eb33c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb338) {
            ctx->pc = 0x2EB348u;
            goto label_2eb348;
        }
    }
    ctx->pc = 0x2EB340u;
    // 0x2eb340: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2eb340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2eb344: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2eb344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2eb348:
    // 0x2eb348: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2eb348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2eb34c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eb350: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB350u;
    {
        const bool branch_taken_0x2eb350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB350u;
        // 0x2eb354: 0x24820018  addiu       $v0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb350) {
            ctx->pc = 0x2EB364u;
            goto label_2eb364;
        }
    }
    ctx->pc = 0x2EB358u;
    // 0x2eb358: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eb358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eb35c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2eb35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2eb360: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2eb360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2eb364:
    // 0x2eb364: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2eb364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2eb368: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2eb368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eb36c: 0x2c830018  sltiu       $v1, $a0, 0x18
    ctx->pc = 0x2eb36cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x2eb370: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2EB370u;
    {
        const bool branch_taken_0x2eb370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb370) {
            ctx->pc = 0x2EB374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB370u;
            // 0x2eb374: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb330;
        }
    }
    ctx->pc = 0x2EB378u;
    // 0x2eb378: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2eb378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2eb37c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2eb37cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb380: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2eb380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2eb384:
    // 0x2eb384: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2EB384u;
    SET_GPR_U32(ctx, 31, 0x2EB38Cu);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2EB384u, 0x2EB38Cu)) {
        return;
    }
    ctx->pc = 0x2EB38Cu;
label_2eb38c:
    // 0x2eb38c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2eb38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb390: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2eb390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb394: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2eb394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eb398: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2eb398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb39c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2eb39cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb3a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2eb3a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb3a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB3A8u;
        // 0x2eb3ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB3B0u;
}
