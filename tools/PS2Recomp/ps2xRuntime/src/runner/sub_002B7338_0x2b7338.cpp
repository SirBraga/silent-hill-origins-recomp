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

// Function: sub_002B7338
// Address: 0x2b7338 - 0x2b7820
void sub_002B7338_0x2b7338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7338_0x2b7338");
#endif

    switch (ctx->pc) {
        case 0x2b7368u: goto label_2b7368;
        case 0x2b7408u: goto label_2b7408;
        case 0x2b7510u: goto label_2b7510;
        case 0x2b7638u: goto label_2b7638;
        case 0x2b76e0u: goto label_2b76e0;
        default: break;
    }

    ctx->pc = 0x2b7338u;

    // 0x2b7338: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b7338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b733c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b733cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b7340: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b7340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b7344: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2b7344u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b7348: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b7348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b734c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b734cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7350: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7354: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x2b7354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2b7358: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x2b7358u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b735c: 0x8e044010  lw          $a0, 0x4010($s0)
    ctx->pc = 0x2b735cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16400)));
    // 0x2b7360: 0xc0adf7a  jal         func_2B7DE8
    ctx->pc = 0x2B7360u;
    SET_GPR_U32(ctx, 31, 0x2B7368u);
    ctx->pc = 0x2B7364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7360u;
    // 0x2b7364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7DE8u, 0x2B7360u, 0x2B7368u)) {
        return;
    }
    ctx->pc = 0x2B7368u;
label_2b7368:
    // 0x2b7368: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x2b7368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2b736c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x2b736cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2b7370: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2b7370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b7374: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x2b7374u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b7378: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2b7378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2b737c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x2b737cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x2b7380: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7380u;
    {
        const bool branch_taken_0x2b7380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B7384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7380u;
        // 0x2b7384: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7380) {
            ctx->pc = 0x2B7390u;
            goto label_2b7390;
        }
    }
    ctx->pc = 0x2B7388u;
    // 0x2b7388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7388u;
    {
        const bool branch_taken_0x2b7388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7388u;
        // 0x2b738c: 0xa7a30002  sh          $v1, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7388) {
            ctx->pc = 0x2B7398u;
            goto label_2b7398;
        }
    }
    ctx->pc = 0x2B7390u;
label_2b7390:
    // 0x2b7390: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2b7390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b7394: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x2b7394u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
label_2b7398:
    // 0x2b7398: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x2b7398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2b739c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2b739cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b73a0: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2B73A0u;
    {
        const bool branch_taken_0x2b73a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73A0u;
        // 0x2b73a4: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73a0) {
            ctx->pc = 0x2B74ACu;
            goto label_2b74ac;
        }
    }
    ctx->pc = 0x2B73A8u;
    // 0x2b73a8: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x2b73a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b73ac: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b73acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b73b0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2b73b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b73b4: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2b73b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2b73b8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2b73b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b73bc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2b73bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2b73c0: 0x2466081e  addiu       $a2, $v1, 0x81E
    ctx->pc = 0x2b73c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2078));
    // 0x2b73c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b73c8: 0x9462181c  lhu         $v0, 0x181C($v1)
    ctx->pc = 0x2b73c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6172)));
    // 0x2b73cc: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2b73ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2b73d0: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x2b73d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b73d4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2b73d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b73d8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2b73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b73dc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b73e0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b73e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b73e4: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x2b73e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2b73e8: 0x10710014  beq         $v1, $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B73E8u;
    {
        const bool branch_taken_0x2b73e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73E8u;
        // 0x2b73ec: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73e8) {
            ctx->pc = 0x2B743Cu;
            goto label_2b743c;
        }
    }
    ctx->pc = 0x2B73F0u;
    // 0x2b73f0: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x2b73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b73f4: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B73F4u;
    {
        const bool branch_taken_0x2b73f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73F4u;
        // 0x2b73f8: 0x3408881e  ori         $t0, $zero, 0x881E (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34846);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73f4) {
            ctx->pc = 0x2B743Cu;
            goto label_2b743c;
        }
    }
    ctx->pc = 0x2B73FCu;
    // 0x2b73fc: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x2b73fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b7400: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2b7400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b7404: 0x0  nop
    ctx->pc = 0x2b7404u;
    // NOP
label_2b7408:
    // 0x2b7408: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b7408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b740c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2b740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2b7410: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b7410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b7414: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x2b7414u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b7418: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x2b7418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b741c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b741cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7420: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2b7420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b7424: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b7424u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7428: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2b7428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2b742c: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B742Cu;
    {
        const bool branch_taken_0x2b742c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2b742c) {
            ctx->pc = 0x2B743Cu;
            goto label_2b743c;
        }
    }
    ctx->pc = 0x2B7434u;
    // 0x2b7434: 0x5487fff4  bnel        $a0, $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B7434u;
    {
        const bool branch_taken_0x2b7434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x2b7434) {
            ctx->pc = 0x2B7438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7434u;
            // 0x2b7438: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7408;
        }
    }
    ctx->pc = 0x2B743Cu;
label_2b743c:
    // 0x2b743c: 0x14aa0013  bne         $a1, $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B743Cu;
    {
        const bool branch_taken_0x2b743c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        ctx->pc = 0x2B7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B743Cu;
        // 0x2b7440: 0x94a90000  lhu         $t1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b743c) {
            ctx->pc = 0x2B748Cu;
            goto label_2b748c;
        }
    }
    ctx->pc = 0x2B7444u;
    // 0x2b7444: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x2b7444u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7448: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b7448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b744c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b744cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b7450: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x2b7450u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b7454: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x2b7454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b7458: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b7458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b745c: 0x2444181c  addiu       $a0, $v0, 0x181C
    ctx->pc = 0x2b745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6172));
    // 0x2b7460: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2b7460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2b7464: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b7464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b7468: 0x3463fc00  ori         $v1, $v1, 0xFC00
    ctx->pc = 0x2b7468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64512);
    // 0x2b746c: 0x94470820  lhu         $a3, 0x820($v0)
    ctx->pc = 0x2b746cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x2b7470: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2b7470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7474: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b7474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b7478: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b7478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b747c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b747cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b7480: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2b7480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2b7484: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2B7484u;
    {
        const bool branch_taken_0x2b7484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7484u;
        // 0x2b7488: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7484) {
            ctx->pc = 0x2B7678u;
            goto label_2b7678;
        }
    }
    ctx->pc = 0x2B748Cu;
label_2b748c:
    // 0x2b748c: 0x34028820  ori         $v0, $zero, 0x8820
    ctx->pc = 0x2b748cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34848);
    // 0x2b7490: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x2b7490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b7494: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b7494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b7498: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2b7498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b749c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b74a0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b74a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b74a4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2B74A4u;
    {
        const bool branch_taken_0x2b74a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74A4u;
        // 0x2b74a8: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74a4) {
            ctx->pc = 0x2B7678u;
            goto label_2b7678;
        }
    }
    ctx->pc = 0x2B74ACu;
label_2b74ac:
    // 0x2b74ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b74acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b74b0: 0x97a40002  lhu         $a0, 0x2($sp)
    ctx->pc = 0x2b74b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2b74b4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2b74b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b74b8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2b74b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b74bc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2b74bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2b74c0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2b74c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2b74c4: 0x2466081e  addiu       $a2, $v1, 0x81E
    ctx->pc = 0x2b74c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2078));
    // 0x2b74c8: 0x27a50006  addiu       $a1, $sp, 0x6
    ctx->pc = 0x2b74c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6));
    // 0x2b74cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b74ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b74d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b74d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b74d4: 0x94621820  lhu         $v0, 0x1820($v1)
    ctx->pc = 0x2b74d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6176)));
    // 0x2b74d8: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2b74d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2b74dc: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x2b74dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b74e0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2b74e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b74e4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2b74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b74e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b74ec: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b74ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b74f0: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x2b74f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2b74f4: 0x10710013  beq         $v1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B74F4u;
    {
        const bool branch_taken_0x2b74f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74F4u;
        // 0x2b74f8: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74f4) {
            ctx->pc = 0x2B7544u;
            goto label_2b7544;
        }
    }
    ctx->pc = 0x2B74FCu;
    // 0x2b74fc: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x2b74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b7500: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B7500u;
    {
        const bool branch_taken_0x2b7500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7500u;
        // 0x2b7504: 0x3408881e  ori         $t0, $zero, 0x881E (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34846);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7500) {
            ctx->pc = 0x2B7544u;
            goto label_2b7544;
        }
    }
    ctx->pc = 0x2B7508u;
    // 0x2b7508: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x2b7508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b750c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2b750cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2b7510:
    // 0x2b7510: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b7510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b7514: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2b7514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2b7518: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b7518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b751c: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x2b751cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b7520: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x2b7520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b7524: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b7524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7528: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2b7528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b752c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b752cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7530: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2b7530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2b7534: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7534u;
    {
        const bool branch_taken_0x2b7534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2b7534) {
            ctx->pc = 0x2B7544u;
            goto label_2b7544;
        }
    }
    ctx->pc = 0x2B753Cu;
    // 0x2b753c: 0x5487fff4  bnel        $a0, $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B753Cu;
    {
        const bool branch_taken_0x2b753c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x2b753c) {
            ctx->pc = 0x2B7540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B753Cu;
            // 0x2b7540: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7510;
        }
    }
    ctx->pc = 0x2B7544u;
label_2b7544:
    // 0x2b7544: 0x14aa0013  bne         $a1, $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B7544u;
    {
        const bool branch_taken_0x2b7544 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        ctx->pc = 0x2B7548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7544u;
        // 0x2b7548: 0x94a90000  lhu         $t1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7544) {
            ctx->pc = 0x2B7594u;
            goto label_2b7594;
        }
    }
    ctx->pc = 0x2B754Cu;
    // 0x2b754c: 0x97a60000  lhu         $a2, 0x0($sp)
    ctx->pc = 0x2b754cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7550: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b7550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b7554: 0x97a40002  lhu         $a0, 0x2($sp)
    ctx->pc = 0x2b7554u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2b7558: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b7558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b755c: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x2b755cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2b7560: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b7560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b7564: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x2b7564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b7568: 0x24451820  addiu       $a1, $v0, 0x1820
    ctx->pc = 0x2b7568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6176));
    // 0x2b756c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2b756cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2b7570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b7570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7574: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2b7574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7578: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2b7578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b757c: 0x94430820  lhu         $v1, 0x820($v0)
    ctx->pc = 0x2b757cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x2b7580: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2b7580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b7584: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2b7584u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b7588: 0x3042fc00  andi        $v0, $v0, 0xFC00
    ctx->pc = 0x2b7588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64512);
    // 0x2b758c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B758Cu;
    {
        const bool branch_taken_0x2b758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B758Cu;
        // 0x2b7590: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b758c) {
            ctx->pc = 0x2B75ACu;
            goto label_2b75ac;
        }
    }
    ctx->pc = 0x2B7594u;
label_2b7594:
    // 0x2b7594: 0x34028820  ori         $v0, $zero, 0x8820
    ctx->pc = 0x2b7594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34848);
    // 0x2b7598: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x2b7598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b759c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b75a0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2b75a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b75a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b75a8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b75a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b75ac:
    // 0x2b75ac: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2b75acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b75b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b75b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b75b4: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2b75b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b75b8: 0x2487081e  addiu       $a3, $a0, 0x81E
    ctx->pc = 0x2b75b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2078));
    // 0x2b75bc: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x2b75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2b75c0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b75c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b75c4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2b75c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2b75c8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2B75C8u;
    {
        const bool branch_taken_0x2b75c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75C8u;
        // 0x2b75cc: 0x97ab0000  lhu         $t3, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75c8) {
            ctx->pc = 0x2B7678u;
            goto label_2b7678;
        }
    }
    ctx->pc = 0x2B75D0u;
    // 0x2b75d0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b75d4: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x2b75d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2b75d8: 0x24841820  addiu       $a0, $a0, 0x1820
    ctx->pc = 0x2b75d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6176));
    // 0x2b75dc: 0x1621018  mult        $v0, $t3, $v0
    ctx->pc = 0x2b75dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b75e0: 0x24057c00  addiu       $a1, $zero, 0x7C00
    ctx->pc = 0x2b75e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31744));
    // 0x2b75e4: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x2b75e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2b75e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b75ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b75f0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2b75f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b75f4: 0x30627c00  andi        $v0, $v1, 0x7C00
    ctx->pc = 0x2b75f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x2b75f8: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B75F8u;
    {
        const bool branch_taken_0x2b75f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75F8u;
        // 0x2b75fc: 0x2462fc00  addiu       $v0, $v1, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75f8) {
            ctx->pc = 0x2B7608u;
            goto label_2b7608;
        }
    }
    ctx->pc = 0x2B7600u;
    // 0x2b7600: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B7600u;
    {
        const bool branch_taken_0x2b7600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7600u;
        // 0x2b7604: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7600) {
            ctx->pc = 0x2B7678u;
            goto label_2b7678;
        }
    }
    ctx->pc = 0x2B7608u;
label_2b7608:
    // 0x2b7608: 0x306403ff  andi        $a0, $v1, 0x3FF
    ctx->pc = 0x2b7608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2b760c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2b760cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7610: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x2b7610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b7614: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B7614u;
    {
        const bool branch_taken_0x2b7614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7614u;
        // 0x2b7618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7614) {
            ctx->pc = 0x2B764Cu;
            goto label_2b764c;
        }
    }
    ctx->pc = 0x2B761Cu;
    // 0x2b761c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b761cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7620: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x2b7620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b7624: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2b7624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2b7628: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b7628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b762c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2b762cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2b7630: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b7630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b7634: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2b7634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b7638:
    // 0x2b7638: 0x10860004  beq         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7638u;
    {
        const bool branch_taken_0x2b7638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7638u;
        // 0x2b763c: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7638) {
            ctx->pc = 0x2B764Cu;
            goto label_2b764c;
        }
    }
    ctx->pc = 0x2B7640u;
    // 0x2b7640: 0x28a2001f  slti        $v0, $a1, 0x1F
    ctx->pc = 0x2b7640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2b7644: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2B7644u;
    {
        const bool branch_taken_0x2b7644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7644u;
        // 0x2b7648: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7644) {
            ctx->pc = 0x2B7638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7638;
        }
    }
    ctx->pc = 0x2B764Cu;
label_2b764c:
    // 0x2b764c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b7650: 0x34039820  ori         $v1, $zero, 0x9820
    ctx->pc = 0x2b7650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38944);
    // 0x2b7654: 0x1641018  mult        $v0, $t3, $a0
    ctx->pc = 0x2b7654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b7658: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2b7658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2b765c: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x2b765cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2b7660: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x2b7660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2b7664: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b7664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b7668: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b7668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b766c: 0x304283ff  andi        $v0, $v0, 0x83FF
    ctx->pc = 0x2b766cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)33791);
    // 0x2b7670: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2b7670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2b7674: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2b7674u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_2b7678:
    // 0x2b7678: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b7678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b767c: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x2b767cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7680: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x2b7680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b7684: 0x94c3181a  lhu         $v1, 0x181A($a2)
    ctx->pc = 0x2b7684u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6170)));
    // 0x2b7688: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x2b7688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2b768c: 0xa4430820  sh          $v1, 0x820($v0)
    ctx->pc = 0x2b768cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2080), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b7690: 0x1080005c  beqz        $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2B7690u;
    {
        const bool branch_taken_0x2b7690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7690u;
        // 0x2b7694: 0xa4c9181a  sh          $t1, 0x181A($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 6170), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7690) {
            ctx->pc = 0x2B7804u;
            goto label_2b7804;
        }
    }
    ctx->pc = 0x2B7698u;
    // 0x2b7698: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2b7698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b769c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b76a0: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x2b76a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b76a4: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x2b76a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b76a8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2b76a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b76ac: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2b76acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b76b0: 0x9462181c  lhu         $v0, 0x181C($v1)
    ctx->pc = 0x2b76b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6172)));
    // 0x2b76b4: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2b76b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2b76b8: 0x14450053  bne         $v0, $a1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2B76B8u;
    {
        const bool branch_taken_0x2b76b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2B76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76B8u;
        // 0x2b76bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76b8) {
            ctx->pc = 0x2B7808u;
            goto label_2b7808;
        }
    }
    ctx->pc = 0x2B76C0u;
    // 0x2b76c0: 0x34029820  ori         $v0, $zero, 0x9820
    ctx->pc = 0x2b76c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38944);
    // 0x2b76c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b76c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b76c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b76cc: 0x24c61820  addiu       $a2, $a2, 0x1820
    ctx->pc = 0x2b76ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6176));
    // 0x2b76d0: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x2b76d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b76d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b76d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b76d8: 0x240803ff  addiu       $t0, $zero, 0x3FF
    ctx->pc = 0x2b76d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b76dc: 0x0  nop
    ctx->pc = 0x2b76dcu;
    // NOP
label_2b76e0:
    // 0x2b76e0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2b76e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b76e4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2b76e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2b76e8: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2B76E8u;
    {
        const bool branch_taken_0x2b76e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76E8u;
        // 0x2b76ec: 0x30e2ffff  andi        $v0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76e8) {
            ctx->pc = 0x2B7804u;
            goto label_2b7804;
        }
    }
    ctx->pc = 0x2B76F0u;
    // 0x2b76f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b76f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b76f8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b76f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b76fc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b76fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7700: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x2b7700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2b7704: 0x14680040  bne         $v1, $t0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2B7704u;
    {
        const bool branch_taken_0x2b7704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x2B7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7704u;
        // 0x2b7708: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7704) {
            ctx->pc = 0x2B7808u;
            goto label_2b7808;
        }
    }
    ctx->pc = 0x2B770Cu;
    // 0x2b770c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x2b770cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2b7710: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2b7710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2b7714: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2B7714u;
    {
        const bool branch_taken_0x2b7714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7714u;
        // 0x2b7718: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7714) {
            ctx->pc = 0x2B7808u;
            goto label_2b7808;
        }
    }
    ctx->pc = 0x2B771Cu;
    // 0x2b771c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2b771cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b7720: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b7720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b7724: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b7724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b7728: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b7728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b772c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b772cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7730: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x2b7730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2b7734: 0x14680035  bne         $v1, $t0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2B7734u;
    {
        const bool branch_taken_0x2b7734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x2B7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7734u;
        // 0x2b7738: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7734) {
            ctx->pc = 0x2B780Cu;
            goto label_2b780c;
        }
    }
    ctx->pc = 0x2B773Cu;
    // 0x2b773c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2b773cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b7740: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2b7740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2b7744: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2B7744u;
    {
        const bool branch_taken_0x2b7744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7744u;
        // 0x2b7748: 0x24e30002  addiu       $v1, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7744) {
            ctx->pc = 0x2B780Cu;
            goto label_2b780c;
        }
    }
    ctx->pc = 0x2B774Cu;
    // 0x2b774c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2b774cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b7750: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b7750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b7754: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b7754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b7758: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b7758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b775c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b775cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7760: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x2b7760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2b7764: 0x5468002a  bnel        $v1, $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2B7764u;
    {
        const bool branch_taken_0x2b7764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x2b7764) {
            ctx->pc = 0x2B7768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7764u;
            // 0x2b7768: 0x7bb20020  lq          $s2, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7810u;
            goto label_2b7810;
        }
    }
    ctx->pc = 0x2B776Cu;
    // 0x2b776c: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x2b776cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2b7770: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2b7770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2b7774: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B7774u;
    {
        const bool branch_taken_0x2b7774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7774u;
        // 0x2b7778: 0x24e30003  addiu       $v1, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7774) {
            ctx->pc = 0x2B780Cu;
            goto label_2b780c;
        }
    }
    ctx->pc = 0x2B777Cu;
    // 0x2b777c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2b777cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b7780: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b7780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b7784: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b7784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b7788: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b7788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b778c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b778cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7790: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x2b7790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2b7794: 0x1468001d  bne         $v1, $t0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B7794u;
    {
        const bool branch_taken_0x2b7794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x2B7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7794u;
        // 0x2b7798: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7794) {
            ctx->pc = 0x2B780Cu;
            goto label_2b780c;
        }
    }
    ctx->pc = 0x2B779Cu;
    // 0x2b779c: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x2b779cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b77a0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2B77A0u;
    {
        const bool branch_taken_0x2b77a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B77A0u;
        // 0x2b77a4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77a0) {
            ctx->pc = 0x2B76E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b76e0;
        }
    }
    ctx->pc = 0x2B77A8u;
    // 0x2b77a8: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x2b77a8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b77ac: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2b77acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b77b0: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x2b77b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b77b4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2b77b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b77b8: 0xe61018  mult        $v0, $a3, $a2
    ctx->pc = 0x2b77b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b77bc: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2b77bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2b77c0: 0x24a4181c  addiu       $a0, $a1, 0x181C
    ctx->pc = 0x2b77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6172));
    // 0x2b77c4: 0x97a90000  lhu         $t1, 0x0($sp)
    ctx->pc = 0x2b77c4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b77c8: 0x340883ff  ori         $t0, $zero, 0x83FF
    ctx->pc = 0x2b77c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33791);
    // 0x2b77cc: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x2b77ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b77d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b77d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b77d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b77d8: 0x21a82  srl         $v1, $v0, 10
    ctx->pc = 0x2b77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x2b77dc: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x2b77dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2b77e0: 0x214c2  srl         $v0, $v0, 19
    ctx->pc = 0x2b77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 19));
    // 0x2b77e4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2b77e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b77e8: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x2b77e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x2b77ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b77f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2b77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b77f4: 0xa4481820  sh          $t0, 0x1820($v0)
    ctx->pc = 0x2b77f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6176), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b77f8: 0x94a3400e  lhu         $v1, 0x400E($a1)
    ctx->pc = 0x2b77f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16398)));
    // 0x2b77fc: 0xa4a9400e  sh          $t1, 0x400E($a1)
    ctx->pc = 0x2b77fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16398), (uint16_t)GPR_U32(ctx, 9));
    // 0x2b7800: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2b7800u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_2b7804:
    // 0x2b7804: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b7804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b7808:
    // 0x2b7808: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b7808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b780c:
    // 0x2b780c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b780cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b7810:
    // 0x2b7810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7814: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7814u;
        // 0x2b7818: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B781Cu;
    // 0x2b781c: 0x0  nop
    ctx->pc = 0x2b781cu;
    // NOP
    ctx->pc = 0x2b7820u;
}
