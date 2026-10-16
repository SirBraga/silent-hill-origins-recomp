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

// Function: sub_00300308
// Address: 0x300308 - 0x300488
void sub_00300308_0x300308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300308_0x300308");
#endif

    switch (ctx->pc) {
        case 0x300398u: goto label_300398;
        case 0x3003f4u: goto label_3003f4;
        case 0x300418u: goto label_300418;
        case 0x30042cu: goto label_30042c;
        default: break;
    }

    ctx->pc = 0x300308u;

    // 0x300308: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x300308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x30030c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x300310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x300310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x300314: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x300314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x300318: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x300318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x30031c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30031cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300320: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x300320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x300324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x300324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300328: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x300328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x30032c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x30032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x300330: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x300330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x300334: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x300334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x300338: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x300338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x30033c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x30033cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x300340: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x300340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x300344: 0xdc510000  ld          $s1, 0x0($v0)
    ctx->pc = 0x300344u;
    SET_GPR_U64(ctx, 17, runtime->Load64(rdram, ctx, 0x10002000u));
    // 0x300348: 0x6230042  bgezl       $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x300348u;
    {
        const bool branch_taken_0x300348 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x300348) {
            ctx->pc = 0x30034Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300348u;
            // 0x30034c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300454u;
            goto label_300454;
        }
    }
    ctx->pc = 0x300350u;
    // 0x300350: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x300350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x300354: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x300354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x300358: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x300358u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x30035c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x30035cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x300360: 0x5460003c  bnel        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x300360u;
    {
        const bool branch_taken_0x300360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300360) {
            ctx->pc = 0x300364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300360u;
            // 0x300364: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300454u;
            goto label_300454;
        }
    }
    ctx->pc = 0x300368u;
    // 0x300368: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x300368u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x30036c: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x30036cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x300370: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x300370u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x300374: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x300374u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x300378: 0x36b52020  ori         $s5, $s5, 0x2020
    ctx->pc = 0x300378u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8224);
    // 0x30037c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x30037cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x300380: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x300380u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x300384: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x300384u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x300388: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x300388u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x30038c: 0x36732000  ori         $s3, $s3, 0x2000
    ctx->pc = 0x30038cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8192);
    // 0x300390: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x300390u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x300394: 0x0  nop
    ctx->pc = 0x300394u;
    // NOP
label_300398:
    // 0x300398: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x300398u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 21), 0))); // MMIO: 0x10002020
    // 0x30039c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x30039cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x3003a0: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x3003a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x3003a4: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x3003a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x3003a8: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x3003a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x3003ac: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x3003acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x3003b0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3003b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3003b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3003b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3003b8: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x3003b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x3003bc: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x3003BCu;
    {
        const bool branch_taken_0x3003bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x3003C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003BCu;
        // 0x3003c0: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003bc) {
            ctx->pc = 0x3003D4u;
            goto label_3003d4;
        }
    }
    ctx->pc = 0x3003C4u;
    // 0x3003c4: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x3003C4u;
    {
        const bool branch_taken_0x3003c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x3003c4) {
            ctx->pc = 0x3003C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3003C4u;
            // 0x3003c8: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3003D8u;
            goto label_3003d8;
        }
    }
    ctx->pc = 0x3003CCu;
    // 0x3003cc: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x3003CCu;
    {
        const bool branch_taken_0x3003cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x3003cc) {
            ctx->pc = 0x3003D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3003CCu;
            // 0x3003d0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300404u;
            goto label_300404;
        }
    }
    ctx->pc = 0x3003D4u;
label_3003d4:
    // 0x3003d4: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x3003d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_3003d8:
    // 0x3003d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3003D8u;
    {
        const bool branch_taken_0x3003d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3003DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003D8u;
        // 0x3003dc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003d8) {
            ctx->pc = 0x300404u;
            goto label_300404;
        }
    }
    ctx->pc = 0x3003E0u;
    // 0x3003e0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3003e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3003e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3003E4u;
    {
        const bool branch_taken_0x3003e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3003E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003E4u;
        // 0x3003e8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003e4) {
            ctx->pc = 0x300404u;
            goto label_300404;
        }
    }
    ctx->pc = 0x3003ECu;
    // 0x3003ec: 0xc0be688  jal         func_2F9A20
    ctx->pc = 0x3003ECu;
    SET_GPR_U32(ctx, 31, 0x3003F4u);
    ctx->pc = 0x3003F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3003ECu;
    // 0x3003f0: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9A20u, 0x3003ECu, 0x3003F4u)) {
        return;
    }
    ctx->pc = 0x3003F4u;
label_3003f4:
    // 0x3003f4: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x3003f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x3003f8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3003F8u;
    {
        const bool branch_taken_0x3003f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3003FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003F8u;
        // 0x3003fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003f8) {
            ctx->pc = 0x300424u;
            goto label_300424;
        }
    }
    ctx->pc = 0x300400u;
    // 0x300400: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x300400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_300404:
    // 0x300404: 0x284201f5  slti        $v0, $v0, 0x1F5
    ctx->pc = 0x300404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x300408: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x300408u;
    {
        const bool branch_taken_0x300408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300408u;
        // 0x30040c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300408) {
            ctx->pc = 0x300434u;
            goto label_300434;
        }
    }
    ctx->pc = 0x300410u;
    // 0x300410: 0xc0be688  jal         func_2F9A20
    ctx->pc = 0x300410u;
    SET_GPR_U32(ctx, 31, 0x300418u);
    ctx->pc = 0x300414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300410u;
    // 0x300414: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9A20u, 0x300410u, 0x300418u)) {
        return;
    }
    ctx->pc = 0x300418u;
label_300418:
    // 0x300418: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x300418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x30041c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30041Cu;
    {
        const bool branch_taken_0x30041c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30041Cu;
        // 0x300420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30041c) {
            ctx->pc = 0x300434u;
            goto label_300434;
        }
    }
    ctx->pc = 0x300424u;
label_300424:
    // 0x300424: 0xc0bf702  jal         func_2FDC08
    ctx->pc = 0x300424u;
    SET_GPR_U32(ctx, 31, 0x30042Cu);
    ctx->pc = 0x2FDC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDC08u, 0x300424u, 0x30042Cu)) {
        return;
    }
    ctx->pc = 0x30042Cu;
label_30042c:
    // 0x30042c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30042Cu;
    {
        const bool branch_taken_0x30042c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30042Cu;
        // 0x300430: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30042c) {
            ctx->pc = 0x300454u;
            goto label_300454;
        }
    }
    ctx->pc = 0x300434u;
label_300434:
    // 0x300434: 0xde710000  ld          $s1, 0x0($s3)
    ctx->pc = 0x300434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300438: 0x6230006  bgezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x300438u;
    {
        const bool branch_taken_0x300438 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x300438) {
            ctx->pc = 0x30043Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300438u;
            // 0x30043c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300454u;
            goto label_300454;
        }
    }
    ctx->pc = 0x300440u;
    // 0x300440: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x300440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x300444: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x300444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x300448: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x300448u;
    {
        const bool branch_taken_0x300448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300448) {
            ctx->pc = 0x300398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300398;
        }
    }
    ctx->pc = 0x300450u;
    // 0x300450: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x300450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_300454:
    // 0x300454: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x300454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300458: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x300458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30045c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x30045cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x300460: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x300460u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x300464: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x300464u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x300468: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x300468u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30046c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x30046cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x300470: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x300470u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300474: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x300474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300478: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x300478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30047c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30047cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300480: 0x3e00008  jr          $ra
    ctx->pc = 0x300480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300480u;
        // 0x300484: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300488u;
}
