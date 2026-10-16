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

// Function: sub_001D5280
// Address: 0x1d5280 - 0x1d5578
void sub_001D5280_0x1d5280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5280_0x1d5280");
#endif

    switch (ctx->pc) {
        case 0x1d53a8u: goto label_1d53a8;
        case 0x1d53bcu: goto label_1d53bc;
        case 0x1d53ccu: goto label_1d53cc;
        case 0x1d53e0u: goto label_1d53e0;
        case 0x1d53f0u: goto label_1d53f0;
        case 0x1d5414u: goto label_1d5414;
        case 0x1d5428u: goto label_1d5428;
        case 0x1d543cu: goto label_1d543c;
        case 0x1d5474u: goto label_1d5474;
        case 0x1d5498u: goto label_1d5498;
        case 0x1d54acu: goto label_1d54ac;
        case 0x1d54f8u: goto label_1d54f8;
        case 0x1d550cu: goto label_1d550c;
        case 0x1d5520u: goto label_1d5520;
        case 0x1d5538u: goto label_1d5538;
        default: break;
    }

    ctx->pc = 0x1d5280u;

    // 0x1d5280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d5280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d5284: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d5284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d5288: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d5288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d528c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d528cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5290: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d5290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d5294: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d5294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d5298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d529c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d529cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52a0: 0x4c10066  bgez        $a2, . + 4 + (0x66 << 2)
    ctx->pc = 0x1D52A0u;
    {
        const bool branch_taken_0x1d52a0 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1D52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52A0u;
        // 0x1d52a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52a0) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D52A8u;
    // 0x1d52a8: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1d52a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x1d52ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d52acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52b0: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x1d52b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1d52b4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1d52b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1d52b8: 0x1222005d  beq         $s1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1D52B8u;
    {
        const bool branch_taken_0x1d52b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52B8u;
        // 0x1d52bc: 0xae459b8c  sw          $a1, -0x6474($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294941580), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52b8) {
            ctx->pc = 0x1D5430u;
            goto label_1d5430;
        }
    }
    ctx->pc = 0x1D52C0u;
    // 0x1d52c0: 0x2a220030  slti        $v0, $s1, 0x30
    ctx->pc = 0x1d52c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1d52c4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D52C4u;
    {
        const bool branch_taken_0x1d52c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52C4u;
        // 0x1d52c8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52c4) {
            ctx->pc = 0x1D532Cu;
            goto label_1d532c;
        }
    }
    ctx->pc = 0x1D52CCu;
    // 0x1d52cc: 0x12220041  beq         $s1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1D52CCu;
    {
        const bool branch_taken_0x1d52cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52CCu;
        // 0x1d52d0: 0x2a220012  slti        $v0, $s1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52cc) {
            ctx->pc = 0x1D53D4u;
            goto label_1d53d4;
        }
    }
    ctx->pc = 0x1D52D4u;
    // 0x1d52d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D52D4u;
    {
        const bool branch_taken_0x1d52d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52D4u;
        // 0x1d52d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52d4) {
            ctx->pc = 0x1D52ECu;
            goto label_1d52ec;
        }
    }
    ctx->pc = 0x1D52DCu;
    // 0x1d52dc: 0x12220030  beq         $s1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D52DCu;
    {
        const bool branch_taken_0x1d52dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52DCu;
        // 0x1d52e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52dc) {
            ctx->pc = 0x1D53A0u;
            goto label_1d53a0;
        }
    }
    ctx->pc = 0x1D52E4u;
    // 0x1d52e4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1D52E4u;
    {
        const bool branch_taken_0x1d52e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d52e4) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D52ECu;
label_1d52ec:
    // 0x1d52ec: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1d52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d52f0: 0x1222002f  beq         $s1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D52F0u;
    {
        const bool branch_taken_0x1d52f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52F0u;
        // 0x1d52f4: 0x2a220017  slti        $v0, $s1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52f0) {
            ctx->pc = 0x1D53B0u;
            goto label_1d53b0;
        }
    }
    ctx->pc = 0x1D52F8u;
    // 0x1d52f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D52F8u;
    {
        const bool branch_taken_0x1d52f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52F8u;
        // 0x1d52fc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52f8) {
            ctx->pc = 0x1D5310u;
            goto label_1d5310;
        }
    }
    ctx->pc = 0x1D5300u;
    // 0x1d5300: 0x12220030  beq         $s1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D5300u;
    {
        const bool branch_taken_0x1d5300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5300u;
        // 0x1d5304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5300) {
            ctx->pc = 0x1D53C4u;
            goto label_1d53c4;
        }
    }
    ctx->pc = 0x1D5308u;
    // 0x1d5308: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1D5308u;
    {
        const bool branch_taken_0x1d5308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5308) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D5310u;
label_1d5310:
    // 0x1d5310: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1d5310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d5314: 0x12220049  beq         $s1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1D5314u;
    {
        const bool branch_taken_0x1d5314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5314u;
        // 0x1d5318: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5314) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D531Cu;
    // 0x1d531c: 0x12220032  beq         $s1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D531Cu;
    {
        const bool branch_taken_0x1d531c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D531Cu;
        // 0x1d5320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d531c) {
            ctx->pc = 0x1D53E8u;
            goto label_1d53e8;
        }
    }
    ctx->pc = 0x1D5324u;
    // 0x1d5324: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1D5324u;
    {
        const bool branch_taken_0x1d5324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5324) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D532Cu;
label_1d532c:
    // 0x1d532c: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x1d532cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x1d5330: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1d5330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d5334: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D5334u;
    {
        const bool branch_taken_0x1d5334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5334u;
        // 0x1d5338: 0x34029002  ori         $v0, $zero, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5334) {
            ctx->pc = 0x1D536Cu;
            goto label_1d536c;
        }
    }
    ctx->pc = 0x1D533Cu;
    // 0x1d533c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1d533cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d5340: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d5340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5344: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1D5344u;
    {
        const bool branch_taken_0x1d5344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5344u;
        // 0x1d5348: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5344) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D534Cu;
    // 0x1d534c: 0x12220018  beq         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D534Cu;
    {
        const bool branch_taken_0x1d534c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D534Cu;
        // 0x1d5350: 0x2a220070  slti        $v0, $s1, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)112) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d534c) {
            ctx->pc = 0x1D53B0u;
            goto label_1d53b0;
        }
    }
    ctx->pc = 0x1D5354u;
    // 0x1d5354: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1D5354u;
    {
        const bool branch_taken_0x1d5354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5354u;
        // 0x1d5358: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5354) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D535Cu;
    // 0x1d535c: 0x52220037  beql        $s1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1D535Cu;
    {
        const bool branch_taken_0x1d535c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d535c) {
            ctx->pc = 0x1D5360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D535Cu;
            // 0x1d5360: 0xae409b8c  sw          $zero, -0x6474($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4294941580), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D5364u;
    // 0x1d5364: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1D5364u;
    {
        const bool branch_taken_0x1d5364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5364) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D536Cu;
label_1d536c:
    // 0x1d536c: 0x1222002b  beq         $s1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D536Cu;
    {
        const bool branch_taken_0x1d536c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D536Cu;
        // 0x1d5370: 0x51102a  slt         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d536c) {
            ctx->pc = 0x1D541Cu;
            goto label_1d541c;
        }
    }
    ctx->pc = 0x1D5374u;
    // 0x1d5374: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5374u;
    {
        const bool branch_taken_0x1d5374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5374u;
        // 0x1d5378: 0x34029003  ori         $v0, $zero, 0x9003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36867);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5374) {
            ctx->pc = 0x1D5390u;
            goto label_1d5390;
        }
    }
    ctx->pc = 0x1D537Cu;
    // 0x1d537c: 0x34029001  ori         $v0, $zero, 0x9001
    ctx->pc = 0x1d537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36865);
    // 0x1d5380: 0x12220027  beq         $s1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D5380u;
    {
        const bool branch_taken_0x1d5380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5380u;
        // 0x1d5384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5380) {
            ctx->pc = 0x1D5420u;
            goto label_1d5420;
        }
    }
    ctx->pc = 0x1D5388u;
    // 0x1d5388: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1D5388u;
    {
        const bool branch_taken_0x1d5388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5388) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D5390u;
label_1d5390:
    // 0x1d5390: 0x12220019  beq         $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5390u;
    {
        const bool branch_taken_0x1d5390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5390u;
        // 0x1d5394: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5390) {
            ctx->pc = 0x1D53F8u;
            goto label_1d53f8;
        }
    }
    ctx->pc = 0x1D5398u;
    // 0x1d5398: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1D5398u;
    {
        const bool branch_taken_0x1d5398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5398) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D53A0u;
label_1d53a0:
    // 0x1d53a0: 0xc07555e  jal         func_1D5578
    ctx->pc = 0x1D53A0u;
    SET_GPR_U32(ctx, 31, 0x1D53A8u);
    ctx->pc = 0x1D53A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53A0u;
    // 0x1d53a4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D53A0u, 0x1D53A8u)) {
        return;
    }
    ctx->pc = 0x1D53A8u;
label_1d53a8:
    // 0x1d53a8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1D53A8u;
    {
        const bool branch_taken_0x1d53a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d53a8) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D53B0u;
label_1d53b0:
    // 0x1d53b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d53b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53b4: 0xc07555e  jal         func_1D5578
    ctx->pc = 0x1D53B4u;
    SET_GPR_U32(ctx, 31, 0x1D53BCu);
    ctx->pc = 0x1D53B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53B4u;
    // 0x1d53b8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D53B4u, 0x1D53BCu)) {
        return;
    }
    ctx->pc = 0x1D53BCu;
label_1d53bc:
    // 0x1d53bc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D53BCu;
    {
        const bool branch_taken_0x1d53bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d53bc) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D53C4u;
label_1d53c4:
    // 0x1d53c4: 0xc07555e  jal         func_1D5578
    ctx->pc = 0x1D53C4u;
    SET_GPR_U32(ctx, 31, 0x1D53CCu);
    ctx->pc = 0x1D53C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53C4u;
    // 0x1d53c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D53C4u, 0x1D53CCu)) {
        return;
    }
    ctx->pc = 0x1D53CCu;
label_1d53cc:
    // 0x1d53cc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D53CCu;
    {
        const bool branch_taken_0x1d53cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53CCu;
        // 0x1d53d0: 0xae409b8c  sw          $zero, -0x6474($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294941580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53cc) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D53D4u;
label_1d53d4:
    // 0x1d53d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d53d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53d8: 0xc07555e  jal         func_1D5578
    ctx->pc = 0x1D53D8u;
    SET_GPR_U32(ctx, 31, 0x1D53E0u);
    ctx->pc = 0x1D53DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53D8u;
    // 0x1d53dc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D53D8u, 0x1D53E0u)) {
        return;
    }
    ctx->pc = 0x1D53E0u;
label_1d53e0:
    // 0x1d53e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D53E0u;
    {
        const bool branch_taken_0x1d53e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d53e0) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D53E8u;
label_1d53e8:
    // 0x1d53e8: 0xc07555e  jal         func_1D5578
    ctx->pc = 0x1D53E8u;
    SET_GPR_U32(ctx, 31, 0x1D53F0u);
    ctx->pc = 0x1D53ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53E8u;
    // 0x1d53ec: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D53E8u, 0x1D53F0u)) {
        return;
    }
    ctx->pc = 0x1D53F0u;
label_1d53f0:
    // 0x1d53f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D53F0u;
    {
        const bool branch_taken_0x1d53f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d53f0) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D53F8u;
label_1d53f8:
    // 0x1d53f8: 0x8c439b88  lw          $v1, -0x6478($v0)
    ctx->pc = 0x1d53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941576)));
    // 0x1d53fc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D53FCu;
    {
        const bool branch_taken_0x1d53fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53FCu;
        // 0x1d5400: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53fc) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D5404u;
    // 0x1d5404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5408: 0xac459b90  sw          $a1, -0x6470($v0)
    ctx->pc = 0x1d5408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941584), GPR_U32(ctx, 5));
    // 0x1d540c: 0xc07555e  jal         func_1D5578
    ctx->pc = 0x1D540Cu;
    SET_GPR_U32(ctx, 31, 0x1D5414u);
    ctx->pc = 0x1D5410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D540Cu;
    // 0x1d5410: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D540Cu, 0x1D5414u)) {
        return;
    }
    ctx->pc = 0x1D5414u;
label_1d5414:
    // 0x1d5414: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5414u;
    {
        const bool branch_taken_0x1d5414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5414) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D541Cu;
label_1d541c:
    // 0x1d541c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5420:
    // 0x1d5420: 0xc07555e  jal         func_1D5578
    ctx->pc = 0x1D5420u;
    SET_GPR_U32(ctx, 31, 0x1D5428u);
    ctx->pc = 0x1D5424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5420u;
    // 0x1d5424: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D5420u, 0x1D5428u)) {
        return;
    }
    ctx->pc = 0x1D5428u;
label_1d5428:
    // 0x1d5428: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5428u;
    {
        const bool branch_taken_0x1d5428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5428) {
            ctx->pc = 0x1D543Cu;
            goto label_1d543c;
        }
    }
    ctx->pc = 0x1D5430u;
label_1d5430:
    // 0x1d5430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5434: 0xc07555e  jal         func_1D5578
    ctx->pc = 0x1D5434u;
    SET_GPR_U32(ctx, 31, 0x1D543Cu);
    ctx->pc = 0x1D5438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5434u;
    // 0x1d5438: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D5434u, 0x1D543Cu)) {
        return;
    }
    ctx->pc = 0x1D543Cu;
label_1d543c:
    // 0x1d543c: 0x56200048  bnel        $s1, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x1D543Cu;
    {
        const bool branch_taken_0x1d543c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d543c) {
            ctx->pc = 0x1D5440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D543Cu;
            // 0x1d5440: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5560u;
            goto label_1d5560;
        }
    }
    ctx->pc = 0x1D5444u;
    // 0x1d5444: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d5444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5448: 0x56620005  bnel        $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5448u;
    {
        const bool branch_taken_0x1d5448 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5448) {
            ctx->pc = 0x1D544Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5448u;
            // 0x1d544c: 0x8e020090  lw          $v0, 0x90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5460u;
            goto label_1d5460;
        }
    }
    ctx->pc = 0x1D5450u;
    // 0x1d5450: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d5450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d5454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5458: 0xac629b88  sw          $v0, -0x6478($v1)
    ctx->pc = 0x1d5458u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x339B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339B88u, _value); } while (0);
    // 0x1d545c: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1d545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1d5460:
    // 0x1d5460: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D5460u;
    {
        const bool branch_taken_0x1d5460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5460u;
        // 0x1d5464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5460) {
            ctx->pc = 0x1D54B4u;
            goto label_1d54b4;
        }
    }
    ctx->pc = 0x1D5468u;
    // 0x1d5468: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1d5468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d546c: 0xc07588a  jal         func_1D6228
    ctx->pc = 0x1D546Cu;
    SET_GPR_U32(ctx, 31, 0x1D5474u);
    ctx->pc = 0x1D5470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D546Cu;
    // 0x1d5470: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6228u, 0x1D546Cu, 0x1D5474u)) {
        return;
    }
    ctx->pc = 0x1D5474u;
label_1d5474:
    // 0x1d5474: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d5474u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5478: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5478u;
    {
        const bool branch_taken_0x1d5478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5478u;
        // 0x1d547c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5478) {
            ctx->pc = 0x1D5484u;
            goto label_1d5484;
        }
    }
    ctx->pc = 0x1D5480u;
    // 0x1d5480: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x1d5480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
label_1d5484:
    // 0x1d5484: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1d5484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1d5488: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5488u;
    {
        const bool branch_taken_0x1d5488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5488) {
            ctx->pc = 0x1D548Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5488u;
            // 0x1d548c: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D549Cu;
            goto label_1d549c;
        }
    }
    ctx->pc = 0x1D5490u;
    // 0x1d5490: 0xc07596a  jal         func_1D65A8
    ctx->pc = 0x1D5490u;
    SET_GPR_U32(ctx, 31, 0x1D5498u);
    ctx->pc = 0x1D5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5490u;
    // 0x1d5494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D5490u, 0x1D5498u)) {
        return;
    }
    ctx->pc = 0x1D5498u;
label_1d5498:
    // 0x1d5498: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1d5498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1d549c:
    // 0x1d549c: 0x50a0002f  beql        $a1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D549Cu;
    {
        const bool branch_taken_0x1d549c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d549c) {
            ctx->pc = 0x1D54A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D549Cu;
            // 0x1d54a0: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D555Cu;
            goto label_1d555c;
        }
    }
    ctx->pc = 0x1D54A4u;
    // 0x1d54a4: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x1D54A4u;
    SET_GPR_U32(ctx, 31, 0x1D54ACu);
    ctx->pc = 0x1D54A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54A4u;
    // 0x1d54a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D54A4u, 0x1D54ACu)) {
        return;
    }
    ctx->pc = 0x1D54ACu;
label_1d54ac:
    // 0x1d54ac: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D54ACu;
    {
        const bool branch_taken_0x1d54ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54ACu;
        // 0x1d54b0: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54ac) {
            ctx->pc = 0x1D555Cu;
            goto label_1d555c;
        }
    }
    ctx->pc = 0x1D54B4u;
label_1d54b4:
    // 0x1d54b4: 0x8e06008c  lw          $a2, 0x8C($s0)
    ctx->pc = 0x1d54b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1d54b8: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x1d54b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1d54bc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1d54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1d54c0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d54c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d54c4: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x1d54c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d54c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d54c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d54cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d54ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d54d0: 0x10850022  beq         $a0, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D54D0u;
    {
        const bool branch_taken_0x1d54d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54D0u;
        // 0x1d54d4: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54d0) {
            ctx->pc = 0x1D555Cu;
            goto label_1d555c;
        }
    }
    ctx->pc = 0x1D54D8u;
    // 0x1d54d8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1d54d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1d54dc: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x1d54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x1d54e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d54e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d54e4: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D54E4u;
    {
        const bool branch_taken_0x1d54e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d54e4) {
            ctx->pc = 0x1D54E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D54E4u;
            // 0x1d54e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5560u;
            goto label_1d5560;
        }
    }
    ctx->pc = 0x1D54ECu;
    // 0x1d54ec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d54ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d54f0: 0xc07555e  jal         func_1D5578
    ctx->pc = 0x1D54F0u;
    SET_GPR_U32(ctx, 31, 0x1D54F8u);
    ctx->pc = 0x1D54F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54F0u;
    // 0x1d54f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D54F0u, 0x1D54F8u)) {
        return;
    }
    ctx->pc = 0x1D54F8u;
label_1d54f8:
    // 0x1d54f8: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1d54f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1d54fc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D54FCu;
    {
        const bool branch_taken_0x1d54fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54FCu;
        // 0x1d5500: 0xae00008c  sw          $zero, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54fc) {
            ctx->pc = 0x1D550Cu;
            goto label_1d550c;
        }
    }
    ctx->pc = 0x1D5504u;
    // 0x1d5504: 0xc07596a  jal         func_1D65A8
    ctx->pc = 0x1D5504u;
    SET_GPR_U32(ctx, 31, 0x1D550Cu);
    ctx->pc = 0x1D5508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5504u;
    // 0x1d5508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D5504u, 0x1D550Cu)) {
        return;
    }
    ctx->pc = 0x1D550Cu;
label_1d550c:
    // 0x1d550c: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1d550cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1d5510: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5510u;
    {
        const bool branch_taken_0x1d5510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5510) {
            ctx->pc = 0x1D5514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5510u;
            // 0x1d5514: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5524u;
            goto label_1d5524;
        }
    }
    ctx->pc = 0x1D5518u;
    // 0x1d5518: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x1D5518u;
    SET_GPR_U32(ctx, 31, 0x1D5520u);
    ctx->pc = 0x1D551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5518u;
    // 0x1d551c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D5518u, 0x1D5520u)) {
        return;
    }
    ctx->pc = 0x1D5520u;
label_1d5520:
    // 0x1d5520: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1d5520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1d5524:
    // 0x1d5524: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d5524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5528: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D5528u;
    {
        const bool branch_taken_0x1d5528 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5528u;
        // 0x1d552c: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5528) {
            ctx->pc = 0x1D5558u;
            goto label_1d5558;
        }
    }
    ctx->pc = 0x1D5530u;
    // 0x1d5530: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d5530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5534: 0x0  nop
    ctx->pc = 0x1d5534u;
    // NOP
label_1d5538:
    // 0x1d5538: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1d5538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1d553c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d553cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d5540: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d5544: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d5544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
    // 0x1d5548: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1d5548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1d554c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d554cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5550: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D5550u;
    {
        const bool branch_taken_0x1d5550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5550u;
        // 0x1d5554: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5550) {
            ctx->pc = 0x1D5538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5538;
        }
    }
    ctx->pc = 0x1D5558u;
label_1d5558:
    // 0x1d5558: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1d5558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_1d555c:
    // 0x1d555c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d555cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d5560:
    // 0x1d5560: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d5560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5564: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5568: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d5568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d556c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d556cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5570: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5570u;
        // 0x1d5574: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5578u;
}
